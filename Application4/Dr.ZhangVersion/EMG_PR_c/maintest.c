#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <assert.h>
#include <math.h>

#include "EMG_PR.h"

// pattern recognition parameter definitions
#define WL  100         // window length
#define WINC    50      // window increment
#define TD_FEATURES 4   // number of features
#define CHANNEL 3       // number of channels
#define CLASS   2       // number of classes
#define FEATURE_DIM (TD_FEATURES*CHANNEL) // feature vector dimension
#define TRAINDATA_ROW    FEATURE_DIM      // number of rows in the training feature matrix
#define TRAINDATA_COLUMN WINDOW_NUM       // number of columns in the training feature matrix
#define WL_DIV_WINC (WL/WINC-1)
#define MV_NUM 5        // majority vote windows

// number of training trials used per class (matches Python: trials 1,3,5)
#define TRIAL_PER_CLASS 3
#define DATA_PER_TRIAL  2000 // number of data samples per trial per channel
#define WIN_PER_TRIAL   (DATA_PER_TRIAL/WINC - WL_DIV_WINC)

// feature extraction parameter definitions
#define DEADZONE_ZC   0.025   // estimated baseline noise level for calculating zero crossings
#define DEADZONE_TURN 0.015   // estimated noise level for calculating slope sign changes
#define SCALE_ZC      15      // parameter for zero crossing
#define SCALE_MAV     2       // parameter for mean absolute value

#define FEATURE_MAV_IDX  0    // feature index MAV: mean absolute value
#define FEATURE_LEN_IDX  1    // feature index LEN: waveform length
#define FEATURE_ZERO_IDX 2    // feature index ZERO: number of zero crossings
#define FEATURE_TURN_IDX 3    // feature index TURN: number of slope sign changes

/* Load one EMG trial file with format:
 * timestamp ch1 ch2 ch3
 * 16:04:11.572  1.29  1.32  1.31
 * ...
 *
 * Stores into dest as interleaved samples:
 * [s0_ch1, s0_ch2, s0_ch3, s1_ch1, s1_ch2, s1_ch3, ...]
 *
 * Returns: number of samples per channel, or -1 on error.
 */
int load_emg_trial(const char *fname, float *dest, int channel, int max_samples)
{
    FILE *fp = fopen(fname, "r");
    if (!fp) {
        printf("Unable to open file: %s\n", fname);
        perror("fopen");
        return -1;
    }

    char line[512];
    int sample = 0;

    /* Skip header line: "timestamp ch1 ch2 ch3" */
    if (!fgets(line, sizeof(line), fp)) {
        fclose(fp);
        return 0;
    }

    while (sample < max_samples && fgets(line, sizeof(line), fp)) {
        float v1, v2, v3;

        /* Ignore first column (timestamp), read 3 floats */
        if (sscanf(line, "%*s %f %f %f", &v1, &v2, &v3) == 3) {
            int base = sample * channel;
            dest[base + 0] = v1;
            if (channel > 1) dest[base + 1] = v2;
            if (channel > 2) dest[base + 2] = v3;
            sample++;
        }
    }

    fclose(fp);
    printf("Loaded %d samples per channel from %s\n", sample, fname);

    if (sample != max_samples) {
        printf("WARNING: expected %d samples, got %d\n", max_samples, sample);
    }

    return sample;
}


int main(int argc, char **argv)
{
    float *TrainData;
    float *TestData;
    int   *TrainClass;
    float *Feature_matrix;
    FILE *TraindataFile = NULL;
    FILE *TestdataFile = NULL;
    FILE *PSFile = NULL;
    FILE *WgCgFile = NULL;
    FILE *FeatureMatrixFile = NULL;
    int i, j, m;
    float *Wg;
    float *Cg;
    float accuracy;
    float test_accuracy;
    int num_correct;
    int total_win_num;
    int test_decision;
    float *xmean;
    float *xstd;
    int trial_idx = 0;
    int class_idx = 0;
    int feature_matrix_idx = 0;

    /* -------- folder + split config -------- */
    #define SET_FOLDER "C:\\Users\\mtino\\OneDrive\\Desktop\\ResearchCode\\Application4\\Dr.ZhangVersion\\set2\\"

    // Match Python's split_training_testing(type="alternate", percentage=50)
    // Training trials: 1, 3, 5
    // Testing  trials: 2, 4, 6
    static const int TRAIN_TRIAL_NUMS[] = {1, 3, 5};
    #define NUM_TRAIN_TRIALS (sizeof(TRAIN_TRIAL_NUMS) / sizeof(TRAIN_TRIAL_NUMS[0]))

    static const int TEST_TRIAL_NUMS[]  = {2, 4, 6};
    #define NUM_TEST_TRIALS  (sizeof(TEST_TRIAL_NUMS) / sizeof(TEST_TRIAL_NUMS[0]))

    int train_trials_per_class = NUM_TRAIN_TRIALS;   // = 3
    int test_trials_per_class  = NUM_TEST_TRIALS;    // = 3 (not used in math, but kept for clarity)

    int total_train_windows = CLASS * train_trials_per_class * WIN_PER_TRIAL;

    /* ---- allocate buffers ---- */
    TrainData = (float*)malloc(CHANNEL * DATA_PER_TRIAL * sizeof(float));
    TestData  = (float*)malloc(CHANNEL * DATA_PER_TRIAL * sizeof(float));
    TrainClass = (int*)malloc(total_train_windows * sizeof(int));
    Feature_matrix = (float*)malloc(total_train_windows * FEATURE_DIM * sizeof(float));
    Wg = (float*)malloc(FEATURE_DIM * CLASS * sizeof(float));
    Cg = (float*)malloc(CLASS * sizeof(float));
    xmean = (float*)malloc(FEATURE_DIM * sizeof(float));
    xstd  = (float*)malloc(FEATURE_DIM * sizeof(float));

    if (!TrainData || !TestData || !TrainClass || !Feature_matrix ||
        !Wg || !Cg || !xmean || !xstd) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("********************************************************\n");
    printf("*******      Training Session Starts      **************\n");
    printf("********************************************************\n\n");

    trial_idx = 0;
    feature_matrix_idx = 0;

    /* ---------------- TRAINING LOOP (trials 1,3,5) ---------------- */
    for (class_idx = 0; class_idx < CLASS; class_idx++)
    {
        for (int ti = 0; ti < NUM_TRAIN_TRIALS; ti++) {
            int t = TRAIN_TRIAL_NUMS[ti];
            char fname[512];

            /* path: SET_FOLDER + actX\\trial_Y.txt */
            snprintf(fname, sizeof(fname),
                     "%sact%d\\trial_%d.txt",
                     SET_FOLDER, class_idx + 1, t);

            printf("\n[TRAIN] Loading class %d, trial %d from:\n  %s\n",
                   class_idx + 1, t, fname);

            int samples = load_emg_trial(fname, TrainData, CHANNEL, DATA_PER_TRIAL);
            if (samples <= 0) {
                printf("Error: no samples loaded for training file %s\n", fname);
                return 1;
            }

            trial_idx++;

            /* slide windows on this trial */
            m = 0;
            while (m < WIN_PER_TRIAL) {
                tdfeats(
                    TrainData + WINC * CHANNEL * m,  // window start
                    WL,                              // win_length
                    CHANNEL,                         // channels
                    feature_matrix_idx,              // Nframe (row index)
                    Feature_matrix,                  // Features base
                    DEADZONE_ZC,                     // zero-cross deadzone
                    DEADZONE_TURN,                   // turn deadzone
                    SCALE_MAV,                       // MAV scale
                    SCALE_ZC,                        // ZC scale
                    TD_FEATURES                      // features per channel
                );

                TrainClass[feature_matrix_idx] = class_idx + 1; // labels 1..CLASS
                feature_matrix_idx++;
                m++;
            }
        }
    }

    printf("\nTotal training windows (feature_matrix_idx) = %d, trials used = %d\n",
           feature_matrix_idx, trial_idx);

    /* ------------- save raw feature matrix BEFORE normalization ---------- */
    FeatureMatrixFile = fopen("FeatureMatrix_before_norm.txt", "w");
    for (i = 0; i < feature_matrix_idx; i++) {
        for (j = 0; j < FEATURE_DIM; j++) {
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j + i * FEATURE_DIM]);
        }
        fprintf(FeatureMatrixFile, "\n");
    }
    fclose(FeatureMatrixFile);

    /* ---------- feature normalization & training ---------- */
    feature_normalization(
        Feature_matrix,
        xmean,
        xstd,
        feature_matrix_idx,   // num_samples (rows)
        FEATURE_DIM           // feature_dim (cols)
    );

    printf("Feature normalization complete!!!\n\n");

    LDA_train(
        Feature_matrix,
        TrainClass,
        Wg,
        Cg,
        FEATURE_DIM,
        CLASS,
        WIN_PER_TRIAL,
        train_trials_per_class      // = 3 (matches Python trial_per_class)
    );

    printf("training complete!!!\n\n");

    for (j = 0; j < FEATURE_DIM; j++) {
        printf("\nxmean[%d]:%.4g\t,xstd:%.4g", j, xmean[j], xstd[j]);
    }
    for (i = 0; i < CLASS; i++) {
        printf("\nWg[%d]=\n", i);
        for (j = 0; j < FEATURE_DIM; j++) {
            printf("%.4g\t", Wg[i + j * CLASS]);
        }
        printf("\nCg[%d]:%.4g\t", i, Cg[i]);
        printf("\n");
    }

    accuracy = LDA_train_accuracy(
        Feature_matrix,
        TrainClass,
        Wg,
        Cg,
        FEATURE_DIM,
        CLASS,
        WIN_PER_TRIAL,
        train_trials_per_class
    );
    printf("\nTraining accuracy = %.2f%%\n", accuracy * 100.0f);

    /* save normalization + model params */
    PSFile = fopen("PS.txt", "w");
    for (j = 0; j < FEATURE_DIM; j++) {
        fprintf(PSFile, "%f %f\n", xmean[j], xstd[j]);
    }
    fclose(PSFile);

    WgCgFile = fopen("WgCg.txt", "w");
    for (j = 0; j < FEATURE_DIM; j++) {
        for (i = 0; i < CLASS; i++) {
            fprintf(WgCgFile, "%f ", Wg[i + j * CLASS]);
        }
        fprintf(WgCgFile, "\n");
    }
    for (i = 0; i < CLASS; i++) {
        fprintf(WgCgFile, "%f ", Cg[i]);
    }
    fclose(WgCgFile);

    FeatureMatrixFile = fopen("FeatureMatrix.txt", "w");
    for (i = 0; i < feature_matrix_idx; i++) {
        for (j = 0; j < FEATURE_DIM; j++) {
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j + i * FEATURE_DIM]);
        }
        fprintf(FeatureMatrixFile, "\n");
    }
    fclose(FeatureMatrixFile);

    /* ===================== TESTING PHASE ===================== */
    printf("\n********************************************************\n");
    printf("*******        Testing Session Starts        ***********\n");
    printf("********************************************************\n\n");

    num_correct   = 0;
    total_win_num = 0;

    for (class_idx = 0; class_idx < CLASS; class_idx++)
    {
        // Test on trials 2, 4, 6 (same pattern as Python "alternate" split)
        for (int ti = 0; ti < NUM_TEST_TRIALS; ti++) {
            int t = TEST_TRIAL_NUMS[ti];
            char fname[512];

            snprintf(fname, sizeof(fname),
                     "%sact%d\\trial_%d.txt",
                     SET_FOLDER, class_idx + 1, t);

            printf("\n[TEST] Loading class %d, trial %d from:\n  %s\n",
                   class_idx + 1, t, fname);

            int samples_test = load_emg_trial(fname, TestData, CHANNEL, DATA_PER_TRIAL);
            if (samples_test <= 0) {
                printf("Error: no samples loaded for test file %s\n", fname);
                return 1;
            }

            /* slide windows over this test trial */
            m = 0;
            while (m < WIN_PER_TRIAL) {

                test_decision = LDA_test(
                    TestData + WINC * CHANNEL * m,  // start of this window
                    Wg,
                    Cg,
                    xmean,
                    xstd,
                    WL,              // wl
                    CHANNEL,         // channel
                    FEATURE_DIM,     // feature_dim = TD_FEATURES * CHANNEL
                    CLASS,           // num_class
                    DEADZONE_ZC,
                    DEADZONE_TURN,
                    SCALE_MAV,
                    SCALE_ZC,
                    TD_FEATURES
                );

                if (test_decision == (class_idx + 1)) {
                    num_correct++;
                }

                m++;
                total_win_num++;
            }
        }
    }

    if (total_win_num > 0) {
        test_accuracy = ((float)num_correct) / total_win_num;
    } else {
        test_accuracy = 0.0f;
    }

    printf("\ntraining accuracy=%.4f\n", accuracy);
    printf("testing  accuracy=%.4f\n", test_accuracy);

    /* cleanup */
    free(TrainData);
    free(TestData);
    free(TrainClass);
    free(Feature_matrix);
    free(Wg);
    free(Cg);
    free(xmean);
    free(xstd);

    return 0;
}

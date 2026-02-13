/****************************************************************************
*
*   Copyright (c) 2012 Xiaorong Zhang
*
*
****************************************************************************/

/* ---- Include Files ---------------------------------------------------- */
//#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
//#include <pthread.h>
//#include <getopt.h>
//#include <termios.h>
#include <time.h>
//#include <unistd.h>
#include <assert.h>
#include <math.h>

//#include <sys/ioctl.h>
//#include <sys/time.h>
//#include <sys/types.h>
//#include <sys/unistd.h>
#include "EMG_PR.h"

#define WL          160         // window length
#define WINC        20          // window increment
#define TD_FEATURES 4           // number of features
#define CHANNEL     6           // number of channels
#define CLASS       3           // number of classes
#define FEATURE_DIM (TD_FEATURES * CHANNEL) // feature vector dimension
#define TRAINDATA_ROW    Feature_DIM     // not used here
#define TRAINDATA_COLUMN WINDOW_NUM      // not used here
#define WL_DIV_WINC (WL / WINC - 1)
#define MV_NUM      5           // majority vote windows

/* 3 TRAINING trials per class (1,3,5) – matches Python alternate split (50% from 6 total) */
#define TRIAL_PER_CLASS 3

#define DATA_PER_TRIAL  2000    // number of data samples per trial per channel
#define WIN_PER_TRIAL   (DATA_PER_TRIAL / WINC - WL_DIV_WINC)

/* feature extraction parameter definitions */
#define DEADZONE_ZC     0.025   // estimated baseline noise level for calculating zero crossings
#define DEADZONE_TURN   0.015   // estimated noise level for calculating slope sign changes
#define SCALE_ZC        15      // parameter for zero crossing
#define SCALE_MAV       2       // parameter for mean absolute value

#define FEATURE_MAV_IDX   0     // feature index MAV: mean absolute value
#define FEATURE_LEN_IDX   1     // feature index LEN: waveform length
#define FEATURE_ZERO_IDX  2     // feature index ZERO: number of zero crossings
#define FEATURE_TURN_IDX  3     // feature index TURN: number of slope sign changes

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

    /* ---- config for training/test files ---- */
    #define TRAIN_FOLDER "C:\\Users\\mtino\\OneDrive\\Desktop\\ResearchCode\\Application4\\Dr.ZhangVersion\\data\\train\\"
    #define TEST_FOLDER  "C:\\Users\\mtino\\OneDrive\\Desktop\\ResearchCode\\Application4\\Dr.ZhangVersion\\data\\test\\"

    /* Python-style alternate split over 6 trials:
       Train: 1, 3, 5
       Test : 2, 4, 6
    */
    static const int TEST_TRIAL_NUMS[]  = {2, 4, 6};
    #define NUM_TEST_TRIALS (sizeof(TEST_TRIAL_NUMS) / sizeof(TEST_TRIAL_NUMS[0]))

    static const char *CLASS_NAMES[CLASS] = {
        "NoMovement",   // class 1
        "HandClose",    // class 2
        "HandOpen"      // class 3
    };

    static const int TRIAL_NUMS[] = {1, 3, 5};    // TRAIN trials (alternate)
    #define NUM_TRIALS (sizeof(TRIAL_NUMS) / sizeof(TRIAL_NUMS[0]))

    /* ---- allocate buffers ---- */
    TrainData = (float*)malloc(CHANNEL * DATA_PER_TRIAL * sizeof(float));
    TestData  = (float*)malloc(CHANNEL * DATA_PER_TRIAL * sizeof(float));
    /* total training windows = CLASS * WIN_PER_TRIAL * TRIAL_PER_CLASS */
    TrainClass = (int*)malloc(CLASS * WIN_PER_TRIAL * TRIAL_PER_CLASS * sizeof(int));
    Feature_matrix = (float*)malloc(CLASS * WIN_PER_TRIAL * TRIAL_PER_CLASS * FEATURE_DIM * sizeof(float));
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
    for (class_idx = 0; class_idx < CLASS; class_idx++) {

        for (int t = 0; t < NUM_TRIALS; t++) {
            char fname[512];

            snprintf(fname, sizeof(fname), "%s%s%d.txt",
                     TRAIN_FOLDER, CLASS_NAMES[class_idx], TRIAL_NUMS[t]);

            printf("\nLoading class %d, trial %d from:\n  %s\n",
                   class_idx + 1, t + 1, fname);

            TraindataFile = fopen(fname, "r");
            if (TraindataFile == NULL) {
                printf("Unable to open traindata file for class %d trial %d ...\n",
                       class_idx + 1, t + 1);
                perror("fopen");
                return 1;
            }

            i = 0;
            while (fscanf(TraindataFile, "%f", &TrainData[i]) == 1) {
                i++;
                if (i >= CHANNEL * DATA_PER_TRIAL) {  // safety
                    break;
                }
            }
            fclose(TraindataFile);
            printf("fscanf complete! read %d samples\n", i);

            trial_idx++;

            m = 0;
            while (m < WIN_PER_TRIAL) {
                tdfeats(
                    TrainData + WINC * CHANNEL * m,  // window start
                    WL,                              // win_length
                    CHANNEL,                         // channels
                    feature_matrix_idx,              // Nframe
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

    printf("feature_matrix_idx=%d, trials=%d\n", feature_matrix_idx, trial_idx);

    /* ---- dump raw feature matrix before normalization ---- */
    FeatureMatrixFile = fopen("FeatureMatrix_before_norm.txt", "w");
    for (i = 0; i < feature_matrix_idx; i++) {
        for (j = 0; j < FEATURE_DIM; j++) {
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j + i * FEATURE_DIM]);
        }
        fprintf(FeatureMatrixFile, "\n");
    }
    fclose(FeatureMatrixFile);

    /* ---- feature normalization ---- */
    feature_normalization(
        Feature_matrix,
        xmean,
        xstd,
        feature_matrix_idx,   // num_samples (rows)
        FEATURE_DIM           // feature_dim (cols)
    );

    printf("Feature normalization complete!!!\n\n");

    /* ---- LDA training ---- */
    LDA_train(
        Feature_matrix,
        TrainClass,
        Wg,
        Cg,
        FEATURE_DIM,     // tdfeatureN * channel
        CLASS,           // num_class
        WIN_PER_TRIAL,   // win_per_trial
        TRIAL_PER_CLASS  // trial_per_class = 3 (trials 1,3,5)
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
        printf("\nCg[%d]: %.4g\n", i, Cg[i]);
    }

    accuracy = LDA_train_accuracy(
        Feature_matrix,
        TrainClass,
        Wg,
        Cg,
        FEATURE_DIM,     // tdfeatureN * channel
        CLASS,           // num_class
        WIN_PER_TRIAL,   // win_per_trial
        TRIAL_PER_CLASS  // trial_per_class = 3
    );
    printf("\nTraining accuracy = %.2f%%\n", accuracy * 100.0f);

    /* ---- save normalization + model params ---- */
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

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////   testing phase //////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("\n********************************************************\n");
    printf("*******        Testing Session Starts        ***********\n");
    printf("********************************************************\n\n");

    num_correct   = 0;
    total_win_num = 0;

    for (class_idx = 0; class_idx < CLASS; class_idx++) {

        for (int t = 0; t < NUM_TEST_TRIALS; t++) {
            char fname[512];

            // Build full path: TEST_FOLDER + ClassName + trialNum + ".txt"
            snprintf(fname, sizeof(fname), "%s%s%d.txt",
                     TEST_FOLDER, CLASS_NAMES[class_idx], TEST_TRIAL_NUMS[t]);

            printf("\n[TEST] Loading class %d, trial %d from:\n  %s\n",
                   class_idx + 1, t + 1, fname);

            TestdataFile = fopen(fname, "r");
            if (TestdataFile == NULL) {
                printf("Unable to open testdata file for class %d trial %d ...\n",
                       class_idx + 1, t + 1);
                perror("fopen");
                return 1;
            }

            i = 0;
            while (fscanf(TestdataFile, "%f", &TestData[i]) == 1) {
                i++;
                if (i >= CHANNEL * DATA_PER_TRIAL) {  // safety
                    break;
                }
            }
            fclose(TestdataFile);
            printf("fscanf complete! read %d samples (test)\n", i);

            // slide windows over this test trial
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

    /////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////   testing phase end    ///////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("\ntraining accuracy=%.4f\n", accuracy);
    printf("testing  accuracy=%.4f\n", test_accuracy);

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

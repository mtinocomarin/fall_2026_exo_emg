
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "function.h"

void mulAB(const float *A, const float *B, float *C, int am, int an, int bn)
{
    for (int i = 0; i < am; i++) {
        for (int j = 0; j < bn; j++) {
            float sum = 0.0f;
            for (int k = 0; k < an; k++) {
                sum += A[i * an + k] * B[k * bn + j];
            }
            C[i * bn + j] = sum;
        }
    }
}


void addition(const float *A, const float *B, float *C, int m, int n)
{
    int total = m * n;
    for (int i = 0; i < total; i++)
    {
        C[i] = A[i] + B[i];
    }
}


void subtract(const float *A, const float *B, float *C, int m, int n)
{
    int total = m * n;

    for (int i = 0; i < total; i++) {
        C[i] = A[i] - B[i];
    }
}


void Transpose(const float *A, float *B, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j * m + i] = A[i * n + j];
        }
    }
}


void cov(const float *A, float *B, int row, int col)
{
    float *mean = (float *)malloc(col * sizeof(float));
    float *centered = (float *)malloc(row * col * sizeof(float));
    float *centered_T = (float *)malloc(col * row * sizeof(float));

    // 1. Compute mean of each column
    for (int i = 0; i < col; i++) {
        float sum = 0.0f;
        for (int j = 0; j < row; j++) {
            sum += A[j * col + i];
        }
        mean[i] = sum / row;
    }

    // 2. Subtract mean from A
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            centered[i * col + j] = A[i * col + j] - mean[j];
        }
    }

    // 3. Transpose centered matrix
    Transpose(centered, centered_T, row, col);

    // 4. Multiply: B = centered_T × centered
    mulAB(centered_T, centered, B, col, row, col);

    // 5. Normalize by (row - 1)
    for (int i = 0; i < col * col; i++) {
        B[i] /= (row - 1);
    }

    // Free memory
    free(mean);
    free(centered);
    free(centered_T);
}

void tdfeats(const float *DataSet_in, int win_length, int channel, int Nframe, float *Features)
{
    float ruler = 1.0f / win_length;
    float rulersq = ruler * ruler;
    float lscale = (float)win_length / 40;
    float tscale = ((float)win_length / 40) * 10;

    float mean[3] = {0};  // Replace MAX_CHANNELS with actual max (e.g., 8 or 16)
    float DataSet[300 * 3];  // MAX_WIN = max window length

    // 1. Compute mean for each channel
    for (int i = 0; i < channel; i++) {
        float sum = 0.0f;
        for (int j = 0; j < win_length; j++) {
            sum += DataSet_in[j * channel + i];
        }
        mean[i] = sum / win_length;
    }

    // 2. Subtract mean → zero-mean data
    for (int i = 0; i < win_length; i++) {
        for (int j = 0; j < channel; j++) {
            DataSet[i * channel + j] = DataSet_in[i * channel + j] - mean[j];
        }
    }

    // 3. Extract features per channel
    for (int ch = 0; ch < channel; ch++) {
        float zero_count = 0, len = 0, mav = 0, turns = 0;

        // 3.1 Mean absolute value (MAV)
        for (int i = 0; i < win_length; i++) {
            mav += fabsf(DataSet[i * channel + ch]);
        }
        mav /= win_length;

        // 3.2 ZC, WL, Turns
        int flag_prev = 1;
        for (int i = 1; i < win_length - 1; i++) {
            float fst = fabsf(DataSet[(i - 1) * channel + ch]);
            float mid = fabsf(DataSet[i * channel + ch]);
            float lst = fabsf(DataSet[(i + 1) * channel + ch]);

            // Zero Crossing detection with dead zone
            int flag_curr = flag_prev;
            float curr = DataSet[i * channel + ch];
            float prev = DataSet[(i - 1) * channel + ch];

            if ((curr >= 0 && prev < 0) || (curr < 0 && prev >= 0)) {
                if (mid >= DEADZONE_ZC || fst >= DEADZONE_ZC) {
                    flag_curr = -flag_prev;
                }
            }
            if (flag_curr != flag_prev) {
                zero_count++;
            }
            flag_prev = flag_curr;

            // Turns (Slope Sign Change) detection
            if ((mid > fst && mid > lst) || (mid < fst && mid < lst)) {
                if (fabsf(mid - fst) > DEADZONE_TURN || fabsf(mid - lst) > DEADZONE_TURN) {
                    turns++;
                }
            }

            // Waveform length
            len += sqrtf(((fst - mid) / 20.0f) * ((fst - mid) / 20.0f) + rulersq);
        }

        // 4. Normalize and store features
        zero_count = (zero_count / SCALE_ZC) * 40.0f / win_length;
        mav /= SCALE_MAV;
        len = (len - 1.0f) / lscale;
        turns /= tscale;

        int base_idx = 4 * channel * Nframe + ch * TD_FEATURES;
        Features[base_idx + 0] = mav;
        Features[base_idx + 1] = len;
        Features[base_idx + 2] = zero_count;
        Features[base_idx + 3] = turns;
    }
}



void feature_normalization(float *features, float *xmean, float *xstd, int num)
{
    float xstd_var[FEATURE_DIM];  // Variance before sqrt

    for (int m = 0; m < FEATURE_DIM; m++) {
        float sum = 0.0f;
        float sq_sum = 0.0f;

        // 1. Compute mean for feature `m`
        for (int j = 0; j < num; j++) {
            sum += features[m + FEATURE_DIM * j];
        }
        xmean[m] = sum / num;

        // 2. Subtract mean and compute variance
        for (int j = 0; j < num; j++) {
            float centered = features[m + FEATURE_DIM * j] - xmean[m];
            features[m + FEATURE_DIM * j] = centered;
            sq_sum += centered * centered;
        }
        xstd_var[m] = sq_sum / (num - 1);
        xstd[m] = sqrtf(xstd_var[m]);

        // 3. Normalize by standard deviation
        for (int j = 0; j < num; j++) {
            features[m + FEATURE_DIM * j] /= xstd[m];
        }

    }
}

/*  Feature Normalization in the testing phase
    mapstd('apply') in Matlab
    Inputs:
        features: the feature vector to be normalized (FEATURE_DIM x 1)
        xmean: parameter of normalization obtained in the training phase
        xtd: parameter of normalization obtained in the training phase
    Output:
        features: the normalized feature vector
*/
void feature_normalization_apply(float *features, const float *xmean, const float *xstd)
{
    for (int m = 0; m < FEATURE_DIM; m++) {
        features[m] = (features[m] - xmean[m]) / xstd[m];
    }
}

/*
%%-------LDA training procedure---------%%
% Inputs:
%     TrainData: the feature matrix of the training data (feature vector dimension x # of windows)
%     TrainClass: the class label for the feature matrix (feature vector dimension x # of windows)
% Outputs:
%     Wg: parameter of the LDA classifier (feature vector dimension x # of classes)
%     Cg: parameter of the LDA classifier (1 x # of classes)
%
*/

void LDA_train(float *TrainData, int *TrainClass, float *Wg, float *Cg)
{
    // Buffers
    float tmp_matrix[FEATURE_DIM * WIN_PER_TRIAL * TRIAL_PER_CLASS] = {0};
    float cov_matrix[FEATURE_DIM * FEATURE_DIM] = {0};
    float C[FEATURE_DIM * FEATURE_DIM] = {0};
    float Cinv[FEATURE_DIM * FEATURE_DIM] = {0};
    float Mi[FEATURE_DIM * CLASS] = {0};
    float Mi_i[FEATURE_DIM] = {0};
    float Wg_i[FEATURE_DIM] = {0};
    float tmp[1] = {0};

    // --- Step 1: Compute means and accumulate shared covariance ---
    for (int i = 0; i < CLASS; i++) {
        // Compute class mean Mi for class i
        for (int m = 0; m < FEATURE_DIM; m++) {
            float sum = 0.0f;
            for (int j = 0; j < WIN_PER_TRIAL * TRIAL_PER_CLASS; j++) {
                int index = m + j * FEATURE_DIM + i * WIN_PER_TRIAL * TRIAL_PER_CLASS * FEATURE_DIM;
                sum += TrainData[index];
            }
            Mi[m * CLASS + i] = sum / (WIN_PER_TRIAL * TRIAL_PER_CLASS);
        }

        // Subtract class mean from each feature
        for (int j = 0; j < WIN_PER_TRIAL * TRIAL_PER_CLASS; j++) {
            for (int m = 0; m < FEATURE_DIM; m++) {
                int index = m + j * FEATURE_DIM + i * WIN_PER_TRIAL * TRIAL_PER_CLASS * FEATURE_DIM;
                tmp_matrix[m + j * FEATURE_DIM] = TrainData[index] - Mi[m * CLASS + i];
            }
        }

        // Covariance of zero-centered features
        cov(tmp_matrix, cov_matrix, WIN_PER_TRIAL * TRIAL_PER_CLASS, FEATURE_DIM);

        // Accumulate shared covariance matrix
        addition(C, cov_matrix, C, FEATURE_DIM, FEATURE_DIM);
    }

    // --- Step 2: Average covariance matrix across classes ---
    for (int i = 0; i < FEATURE_DIM * FEATURE_DIM; i++) {
        C[i] /= CLASS;
    }

    // --- Step 3: Cholesky decomposition of covariance matrix ---
    memcpy(Cinv, C, FEATURE_DIM * FEATURE_DIM * sizeof(float));
    Choleski_LU_Decomposition(Cinv, FEATURE_DIM);

    // --- Step 4: Compute LDA weights Wg and biases Cg ---
    for (int i = 0; i < CLASS; i++) {
        // Copy class mean vector for class i
        for (int j = 0; j < FEATURE_DIM; j++) {
            Mi_i[j] = Mi[j * CLASS + i];
        }

        // Solve: Wg_i = Cinv⁻¹ × Mi_i
        Choleski_LU_Solve(Cinv, Mi_i, Wg_i, FEATURE_DIM);

        // Store weight vector
        for (int j = 0; j < FEATURE_DIM; j++) {
            Wg[j * CLASS + i] = Wg_i[j];
        }

        // Compute class bias: -0.5 * Miᵀ * Wg
        mulAB(Mi_i, Wg_i, tmp, 1, FEATURE_DIM, 1);
        Cg[i] = -0.5f * tmp[0];
    }
}


float LDA_train_accuracy(const float *TrainData, const int *TrainClass, const float *Wg, const float *Cg)
{
    float tmp[CLASS];         // Wg^T * x
    float tmp1[CLASS];        // Wg^T * x + Cg
    float test_tmp[FEATURE_DIM];  // one sample

    int num_correct = 0;
    int total_num = CLASS * TRIAL_PER_CLASS * WIN_PER_TRIAL;

    for (int m = 0; m < total_num; m++) {
        // Load one sample
        for (int j = 0; j < FEATURE_DIM; j++) {
            test_tmp[j] = TrainData[m * FEATURE_DIM + j];
        }

        // Linear classifier: tmp = x ⋅ Wg
        mulAB(test_tmp, Wg, tmp, 1, FEATURE_DIM, CLASS);

        // Add bias: tmp1 = tmp + Cg
        addition(Cg, tmp, tmp1, 1, CLASS);

        // Argmax over class scores
        float max_score = -9999.0f;
        int decision = -1;
        for (int j = 0; j < CLASS; j++) {
            if (tmp1[j] > max_score) {
                max_score = tmp1[j];
                decision = j + 1;  // class labels assumed to be 1-based
            }
        }

        if (decision == TrainClass[m]) {
            num_correct++;
        }
    }

    return ((float)num_correct) / total_num;
}



int LDA_test(const float TestData[], const float Wg[], const float Cg[],
             const float xmean[], const float xstd[])
{
    float Feature_test[FEATURE_DIM];
    float tmp[CLASS];     // Dot product result: x ⋅ Wg
    float tmp1[CLASS];    // Final score: x ⋅ Wg + Cg

    // Step 1: Extract features from raw input
    tdfeats(TestData, WL, CHANNEL, 0, Feature_test);

    // ✅ Print only first FEATURE_DIM values, no overwriting!

    // Step 2: Normalize using training stats
    feature_normalization_apply(Feature_test, xmean, xstd);

    // ✅ Print after normalization


    // Step 3: Linear decision function: Wgᵀ * x
    mulAB(Feature_test, Wg, tmp, 1, FEATURE_DIM, CLASS);

    // Step 4: Add bias term Cg
    addition(Cg, tmp, tmp1, 1, CLASS);

    // Step 5: Argmax to pick the predicted class
    float max_score = -9999.0f;  // use negative so all valid scores win
    int test_decision = -1;

    for (int j = 0; j < CLASS; j++) {
        if (tmp1[j] > max_score) {
            max_score = tmp1[j];
            test_decision = j + 1;  // Assuming class labels are 1-based
        }
    }

    return test_decision;
}




int Lower_Triangular_Solve(const float *L, const float *B, float *x, int n)
{
    for (int k = 0; k < n; k++) {
        float sum = 0.0f;

        if (L[k * n + k] == 0.0f)
            return -1;  // Matrix is singular

        for (int i = 0; i < k; i++) {
            sum += L[k * n + i] * x[i];  // L[k][i] * x[i]
        }

        x[k] = (B[k] - sum) / L[k * n + k];
    }

    return 0;
}

int Upper_Triangular_Solve(const float *U, const float *B, float *x, int n)
{
    for (int k = n - 1; k >= 0; k--) {
        if (U[k * n + k] == 0.0f)
            return -1;  // Matrix is singular

        float sum = 0.0f;
        for (int i = k + 1; i < n; i++) {
            sum += U[k * n + i] * x[i];  // U[k][i] * x[i]
        }

        x[k] = (B[k] - sum) / U[k * n + k];
    }

    return 0;
}


int Choleski_LU_Decomposition(float *A, int n)
{
    for (int k = 0; k < n; k++) {
        float sum = 0.0f;

        // Diagonal element update: A[k][k] -= sum(L[k][p]^2)
        for (int p = 0; p < k; p++) {
            float L_kp = A[k * n + p];
            sum += L_kp * L_kp;
        }

        A[k * n + k] -= sum;

        if (A[k * n + k] <= 0.0f) {
            return -1;  // Not positive definite
        }

        // Take square root of diagonal element
        A[k * n + k] = sqrtf(A[k * n + k]);
        float reciprocal = 1.0f / A[k * n + k];

        // Update subdiagonal elements: A[i][k] = (A[i][k] - dot) / A[k][k]
        for (int i = k + 1; i < n; i++) {
            float dot = 0.0f;
            for (int p = 0; p < k; p++) {
                dot += A[i * n + p] * A[k * n + p];
            }

            A[i * n + k] = (A[i * n + k] - dot) * reciprocal;

            // Symmetrically fill upper triangle: A[k][i] = A[i][k]
            A[k * n + i] = A[i * n + k];
        }
    }

    return 0;
}

int Choleski_LU_Solve(const float *LU, const float *B, float *x, int n)
{
    float y[n];  // Temporary buffer for forward substitution result

    // Step 1: Solve Ly = B
    if (Lower_Triangular_Solve(LU, B, y, n) < 0)
        return -1;  // Singular matrix

    // Step 2: Solve Lᵗx = y (upper triangular solve)
    return Upper_Triangular_Solve(LU, y, x, n);
}



int majority_vote(const int *decision_buffer, int size)
{
    int count[CLASS + 1] = {0};  // CLASS assumed 1-based (e.g., 1 to 4)
    int max_votes = 0;
    int majority_class = 0;

    for (int i = 0; i < size; i++) {
        int cls = decision_buffer[i];
        if (cls >= 1 && cls <= CLASS) {
            count[cls]++;
        }
    }

    for (int j = 1; j <= CLASS; j++) {
        if (count[j] > max_votes) {
            max_votes = count[j];
            majority_class = j;
        }
    }

    return majority_class;
}



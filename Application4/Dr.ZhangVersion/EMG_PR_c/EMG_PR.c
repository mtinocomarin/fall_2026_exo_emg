// EMG_PR.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "EMG_PR.h"



/*  Matrix Multiply
    C=A*B
    A:(am x an)
    B:(an x bn)
    C:(am x bn)
*/
void mulAB(float *A,float *B,float *C,int am,int an,int bn)
{
    int i,j,l,u;

    for (i=0; i<am; i++)
        for (j=0; j<bn; j++)
        {
            u=i*bn+j; C[u]=0.0;
            for (l=0; l<an; l++)
                C[u]=C[u]+A[i*an+l]*B[l*bn+j];
        }
    return;
}

/*  Matrix Addition
    C=A+B
    A,B,C:(m x n)
*/
void addition(float *A,float *B,float *C, int m,int n)
{
    int i,j;

    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
          {
              C[i*m+j]=A[i*m+j]+B[i*m+j];
          }
    return;
}
/*  Matrix Subtraction
    C=A-B
    A,B,C:(m x n)
*/
void subtract(float *A,float *B,float *C, int m,int n)
{
    int i,j;

    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
          {
              C[i*m+j]=A[i*m+j]-B[i*m+j];
          }
    return;
}

/*  Matrix Transpose
    Input: A (m x n)
    Output: B (n x m)
*/
void Transpose(float *A,float *B,int m,int n)
{
    int i,j;

    for (j=0; j<n; j++)
        for (i=0; i<m; i++)
          {
              B[j*m+i]=A[i*n+j];
          }
    return;
}

/*  Covariance Matrix
    Input: A (row x col)
    Output: B (col x col)
*/
void cov(float *A,float *B,int row,int col)
{
    int i,j;
    float *tmp;
    float *tmp1;
    float *t_tmp1;
    float sum=0;

    printf("row:%d, col:%d\n",row,col);
    t_tmp1=(float*)malloc(col*row*sizeof(float));
    tmp1=(float*)malloc(row*col*sizeof(float));
    tmp=(float*)malloc(col*sizeof(float));

    memset(tmp,0,col*sizeof(float));
    memset(tmp1,0,row*col*sizeof(float));
    memset(t_tmp1,0,row*col*sizeof(float));
    //printf("tmp:%d, tmp1:%d, t_tmp1:%d\n",&tmp[0],&tmp1[0],&t_tmp1[0]);
    //printf("cov1\n");
    //calculate mean of each column
    for (i=0; i<col; i++)
    {
        sum = 0;
        for (j=0; j<row; j++)
        {
            sum+=A[j*col+i];
        }
        tmp[i]=sum/row;
		//printf("%f\n",tmp[i]);
    }

    //substract matrix A with mean
    for (i=0; i<col; i++)
    {
        for (j=0; j<row; j++)
        {
            tmp1[j*col+i]=A[j*col+i]-tmp[i];
            //float tmptmp = tmp1[j*n+i];
        }
    }
    //printf("cov2\n");
    //multiply tmp1 with transpose of tmp1
    Transpose(tmp1,t_tmp1,row,col);
    //printf("cov3\n");
    mulAB(t_tmp1,tmp1,B,col,row,col);
    //printf("cov4\n");
    //calculate mean of each element of B
    //printf("tmp:%d, tmp1:%d, t_tmp1:%d\n",&tmp[0],&tmp1[0],&t_tmp1[0]);
   // printf("tmp:%d, tmp1:%d, t_tmp1:%d\n",&tmp[col-1],&tmp1[row*col-1],&t_tmp1[row*col-1]);
    for (i=0; i<col; i++)
    {
        for (j=0; j<col; j++)
        {
            B[j*col+i]=B[j*col+i]/(row-1);
        }
    }

    free(t_tmp1);
    free(tmp1);
    //printf("cov5\n");
    free(tmp);

    return;
}
/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% TDFEATS	Compute four time domain features
%   1. mav: mean absolute value
%   2. len: waveform length
%   3. zero_count: number of zero crossings
%   4. turns: number of slope sign changes
%
%     Inputs:
%         DataSet_in: pointer to the matrix of the raw EMG data (just one window)
%         win_length: window length
%         channel: number of channels in DataSet_in
%         Nframe: the index of the window in the training data set.
%     Outputs:
%         Features: the output feature matrix (feature (mave, len, zero_count, turns) x window)
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/
#include <math.h>
#include <stdlib.h>

void tdfeats(
    float *DataSet_in,   // window data: [win_length * channel], sample-major [ch1,ch2,ch3,...]
    int   win_length,    // WL
    int   channel,       // number of channels
    int   Nframe,        // which window index (row) in Features
    float *Features,     // big feature matrix [num_windows * (channel*tdfeatureN)]
    float deadzone_zc,   // DEADZONE_ZC (e.g. 0.025)
    float deadzone_turn, // DEADZONE_TURN (e.g. 0.015)
    int   scale_mav,     // SCALE_MAV (e.g. 2)
    int   scale_zc,      // SCALE_ZC (e.g. 15)
    int   tdfeatureN     // number of TD features per channel (e.g. 4: MAV, WL, ZC, SSC)
)
{
    float ruler  = 1.0f / (float)win_length;
    float rulersq = ruler * ruler;
    float lscale  = (float)win_length / 40.0f;
    float tscale  = ((float)win_length / 40.0f) * 10.0f;

    int   Nsig = channel;

    int   i, j;
    float sum = 0.0f;
    float *mean;
    float *DataSet;

    float zero_count;
    float len;
    float mav;
    float turns;
    int   range;
    float sum_sig;
    int   flag1;
    int   flag2;
    int   idx;
    float fst;
    float mid;
    float lst;
    int   SigNum;

    /* allocate */
    mean    = (float*)malloc(channel * sizeof(float));
    DataSet = (float*)malloc(win_length * channel * sizeof(float));

    if (!mean || !DataSet) {
        if (mean) free(mean);
        if (DataSet) free(DataSet);
        return;
    }

    /* --- compute mean per channel --- */
    for (i = 0; i < channel; i++) {
        sum = 0.0f;
        for (j = 0; j < win_length; j++) {
            sum += DataSet_in[j * channel + i];
        }
        mean[i] = sum / (float)win_length;
    }

    /* --- mean-center the data --- */
    for (i = 0; i < win_length; i++) {
        for (j = 0; j < channel; j++) {
            DataSet[i * channel + j] = DataSet_in[i * channel + j] - mean[j];
        }
    }

    free(mean);

    /* --- extract features for each channel --- */
    for (SigNum = 0; SigNum < Nsig; SigNum++) {

        zero_count = 0.0f;
        len        = 0.0f;
        mav        = 0.0f;
        turns      = 0.0f;

        /* --- MAV --- */
        sum_sig = 0.0f;
        for (range = 0; range < win_length; range++) {
            sum_sig += (float)fabs(DataSet[range * channel + SigNum]);
        }
        mav = sum_sig / (float)win_length;

        /* --- ZC, WL, TURNS --- */
        flag1 = 1;
        flag2 = 1;

        for (i = 1; i < win_length - 1; i++) {
            idx = i;
            fst = (float)fabs(DataSet[(idx - 1) * channel + SigNum]);
            mid = (float)fabs(DataSet[(idx)     * channel + SigNum]);
            lst = (float)fabs(DataSet[(idx + 1) * channel + SigNum]);

            /* Zero Crossings */
            if (((DataSet[idx * channel + SigNum]     >= 0.0f) &&
                 (DataSet[(idx - 1) * channel + SigNum] >= 0.0f)) ||
                ((DataSet[idx * channel + SigNum]     <= 0.0f) &&
                 (DataSet[(idx - 1) * channel + SigNum] <= 0.0f)))
            {
                /* same sign → keep flag1 = flag2 */
                flag1 = flag2;
            } else {
                /* crossing; check if both are near zero */
                if ((mid < deadzone_zc) && (fst < deadzone_zc)) {
                    flag1 = flag2;
                } else {
                    flag1 = -flag2;
                }
            }

            if (flag1 != flag2) {
                zero_count += 1.0f;
            }

            /* Slope Sign Changes (turns) */
            if (((mid > fst) && (mid > lst)) ||
                ((mid < fst) && (mid < lst)))
            {
                /* threshold for turns */
                if (((fabsf(mid) - fabsf(fst)) > deadzone_turn) ||
                    ((fabsf(mid) - fabsf(lst)) > deadzone_turn))
                {
                    turns += 1.0f;
                }
            }

            /* Waveform length */
            len += (float)sqrt(((fst - mid) / 20.0f) * ((fst - mid) / 20.0f) + rulersq);
        }

        /* --- scale features --- */
        if (scale_zc != 0)
            zero_count = (zero_count / (float)scale_zc) * 40.0f / (float)win_length;
        if (scale_mav != 0)
            mav = mav / (float)scale_mav;

        len   = (len - 1.0f) / lscale;
        turns = turns / tscale;

        /* --- write into Features matrix --- */
        // feature_dim = channel * tdfeatureN
        // row index: Nframe
        int base = Nframe * (channel * tdfeatureN) + SigNum * tdfeatureN;

        Features[base + 0] = mav;
        Features[base + 1] = len;
        Features[base + 2] = zero_count;
        Features[base + 3] = turns;
        /* if tdfeatureN > 4, you can add more features at base+4, base+5, ... */
    }

    free(DataSet);
}

/*  Feature Normalization in the training phase
    mapstd in Matlab
    Input:
        features: the feature matrix of training data (FEATURE_DIM x num)
        num: number of feature vectors (windows) in the feature matrix
    Output:
        xmean: parameter of the normalization to be used in the testing phase (mean)
        xtd: parameter of the normalization to be used in the testing phase (std)
*/
void feature_normalization(float *features,
                           float *xmean,
                           float *xstd,
                           int    num_samples,   // "num" in your old code
                           int    feature_dim)   // replaces FEATURE_DIM
{
    int m, j;

    if (num_samples <= 0 || feature_dim <= 0) {
        printf("feature_normalization: invalid sizes (num=%d, feature_dim=%d)\n",
               num_samples, feature_dim);
        return;
    }

    for (m = 0; m < feature_dim; m++)
    {
        float sum = 0.0f;
        float xstd_sum = 0.0f;

        /* ---- 1) compute mean for feature m over all samples ---- */
        for (j = 0; j < num_samples; j++) {
            sum += features[m + feature_dim * j];
        }
        xmean[m] = sum / (float)num_samples;
        printf("sum[%d]: %f\n", m, sum);   // keep or comment out

        /* ---- 2) subtract mean & accumulate squared deviation ---- */
        for (j = 0; j < num_samples; j++) {
            float centered = features[m + feature_dim * j] - xmean[m];
            features[m + feature_dim * j] = centered;
            xstd_sum += centered * centered;
        }

        /* ---- 3) compute std ---- */
        if (num_samples > 1) {
            float var = xstd_sum / (float)(num_samples - 1);
            xstd[m] = (var > 0.0f) ? sqrtf(var) : 1.0f;
        } else {
            xstd[m] = 1.0f;
        }

        /* ---- 4) normalize to unit variance ---- */
        for (j = 0; j < num_samples; j++) {
            features[m + feature_dim * j] /= xstd[m];
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
void feature_normalization_apply(float *features,
                                 float *xmean,
                                 float *xstd,
                                 int    feature_dim)   // new argument
{
    int m;

    for (m = 0; m < feature_dim; m++)
    {
        float centered = features[m] - xmean[m];

        /* avoid division by zero */
        if (xstd[m] != 0.0f)
            features[m] = centered / xstd[m];
        else
            features[m] = centered;   // fallback
    }
}

/*
%%-------LDA training procedure---------%%
Inputs:
    TrainData   : feature matrix of training data
                  layout: all windows of class 0, then class 1, ...
                  each window is a row of length feature_dim
    TrainClass  : class labels for each window (length = num_class * trial_per_class * win_per_trial)
                  (not strictly needed if TrainData is already grouped by class)
    feature_dim : number of features per window (tdfeatureN * channel)
    num_class   : number of classes
    win_per_trial   : number of windows per trial
    trial_per_class : number of trials per class

Outputs:
    Wg : LDA weight matrix, shape [feature_dim x num_class]
    Cg : LDA bias vector, length [num_class]
*/
void LDA_train(float *TrainData,
               int   *TrainClass,
               float *Wg,
               float *Cg,
               int    feature_dim,
               int    num_class,
               int    win_per_trial,
               int    trial_per_class)
{
    int i, j, m;
    float sum;

    float *tmp_matrix = NULL;
    float *cov_matrix = NULL;
    float *Mi         = NULL;
    float *C          = NULL;
    float *Cinv       = NULL;
    float *Mi_i       = NULL;
    float *Wg_i       = NULL;
    float *tmp        = NULL;

    int per_class_win = win_per_trial * trial_per_class;

    /* TrainClass is not used here because TrainData is assumed grouped by class.
       Silence unused-parameter warning: */
    (void)TrainClass;

    /* -------- allocate memory -------- */
    tmp_matrix = (float*)malloc(feature_dim * per_class_win * sizeof(float));
    cov_matrix = (float*)malloc(feature_dim * feature_dim * sizeof(float));
    C          = (float*)malloc(feature_dim * feature_dim * sizeof(float));
    Mi         = (float*)malloc(feature_dim * num_class   * sizeof(float));
    Cinv       = (float*)malloc(feature_dim * feature_dim * sizeof(float));
    Mi_i       = (float*)malloc(feature_dim * sizeof(float));
    Wg_i       = (float*)malloc(feature_dim * sizeof(float));
    tmp        = (float*)malloc(sizeof(float));

    if (!tmp_matrix || !cov_matrix || !C || !Mi || !Cinv || !Mi_i || !Wg_i || !tmp) {
        printf("LDA_train: malloc failed\n");
        if (tmp_matrix) free(tmp_matrix);
        if (cov_matrix) free(cov_matrix);
        if (C)          free(C);
        if (Mi)         free(Mi);
        if (Cinv)       free(Cinv);
        if (Mi_i)       free(Mi_i);
        if (Wg_i)       free(Wg_i);
        if (tmp)        free(tmp);
        return;
    }

    memset(C,  0, feature_dim * feature_dim * sizeof(float));
    memset(Mi, 0, feature_dim * num_class   * sizeof(float));
    memset(tmp_matrix, 0, feature_dim * per_class_win * sizeof(float));

    /*
    %%-- Compute the means and the common covariance matrix --%%
       C : covariance matrix [feature_dim x feature_dim]
       Mi: mean vectors      [feature_dim x num_class]
    */
    for (i = 0; i < num_class; i++)
    {
        /* reset tmp_matrix for this class */
        memset(tmp_matrix, 0, feature_dim * per_class_win * sizeof(float));

        for (m = 0; m < feature_dim; m++)
        {
            sum = 0.0f;

            /* accumulate over all windows of this class */
            for (j = 0; j < per_class_win; j++)
            {
                int idx = m + j * feature_dim + i * per_class_win * feature_dim;
                sum += TrainData[idx];
            }

            /* mean for feature m, class i */
            Mi[m * num_class + i] = sum / (float)per_class_win;

            /* subtract mean to form tmp_matrix for covariance */
            for (j = 0; j < per_class_win; j++)
            {
                int idx_src = m + j * feature_dim + i * per_class_win * feature_dim;
                int idx_dst = m + j * feature_dim;
                tmp_matrix[idx_dst] = TrainData[idx_src] - Mi[m * num_class + i];
            }
        }

        /* covariance for this class: cov(tmp_matrix) */
        cov(tmp_matrix, cov_matrix, per_class_win, feature_dim);

        /* accumulate into common covariance C */
        addition(C, cov_matrix, C, feature_dim, feature_dim);
    }

    /* average covariance over classes */
    for (i = 0; i < feature_dim; i++)
    {
        for (j = 0; j < feature_dim; j++)
        {
            C[j * feature_dim + i] /= (float)num_class;
        }
    }

    /* Choleski decomposition of covariance */
    memcpy(Cinv, C, feature_dim * feature_dim * sizeof(float));
    Choleski_LU_Decomposition(Cinv, feature_dim);

    /* ---- Compute Wg and Cg for each class ---- */
    for (i = 0; i < num_class; i++)
    {
        /* Mi_i = mean vector for class i (size feature_dim) */
        for (j = 0; j < feature_dim; j++)
        {
            Mi_i[j] = Mi[j * num_class + i];
        }

        /* Solve Cinv * Wg_i = Mi_i (Choleski-based solver) */
        Choleski_LU_Solve(Cinv, Mi_i, Wg_i, feature_dim);

        /* Store Wg, shape [feature_dim x num_class], column-major per class */
        for (j = 0; j < feature_dim; j++)
        {
            Wg[j * num_class + i] = Wg_i[j];
        }

        /* Cg[i] = -0.5 * Mi_i^T * Wg_i */
        mulAB(Mi_i, Wg_i, tmp, 1, feature_dim, 1);
        Cg[i] = (float)(-0.5 * tmp[0]);
    }

    /* ---- cleanup ---- */
    free(tmp_matrix);
    free(cov_matrix);
    free(C);
    free(Cinv);
    free(Mi);
    free(Mi_i);
    free(Wg_i);
    free(tmp);

    return;
}
// New signature: matches Python argtypes
// float LDA_train_accuracy(float *TrainData, int *TrainClass,
//                          float *Wg, float *Cg,
//                          int feature_dim, int num_class,
//                          int win_per_trial, int trial_per_class);

float LDA_train_accuracy(float *TrainData,
                         int   *TrainClass,
                         float *Wg,
                         float *Cg,
                         int    feature_dim,
                         int    num_class,
                         int    win_per_trial,
                         int    trial_per_class)
{
    int   j, m;
    float *tmp  = NULL;
    float *tmp1 = NULL;
    float *test_tmp = NULL;
    int   num_correct = 0;
    float maxdata;
    float accuracy = 0.0f;
    int   total_num;

    // total number of training windows
    total_num = num_class * trial_per_class * win_per_trial;
    if (total_num <= 0) {
        printf("LDA_train_accuracy: total_num <= 0, returning 0.\n");
        return 0.0f;
    }

    tmp      = (float*)malloc(num_class   * sizeof(float));
    tmp1     = (float*)malloc(num_class   * sizeof(float));
    test_tmp = (float*)malloc(feature_dim * sizeof(float));

    if (!tmp || !tmp1 || !test_tmp) {
        printf("LDA_train_accuracy: malloc failed\n");
        if (tmp)      free(tmp);
        if (tmp1)     free(tmp1);
        if (test_tmp) free(test_tmp);
        return 0.0f;
    }

    for (m = 0; m < total_num; m++) {

        // copy the m-th feature row into test_tmp
        for (j = 0; j < feature_dim; j++) {
            test_tmp[j] = TrainData[m * feature_dim + j];
        }

        // 1 x feature_dim  *  feature_dim x num_class  ->  1 x num_class
        mulAB(test_tmp, Wg, tmp, 1, feature_dim, num_class);

        // add bias Cg
        addition(Cg, tmp, tmp1, 1, num_class);

        // argmax over classes
        maxdata = -9999.0f;
        int decision = 0;
        for (j = 0; j < num_class; j++) {
            if (tmp1[j] > maxdata) {
                maxdata  = tmp1[j];
                decision = j + 1;    // labels are 1..num_class
            }
        }

        if (decision == TrainClass[m]) {
            num_correct++;
        }
    }

    accuracy = (float)num_correct / (float)total_num;

    free(tmp);
    free(tmp1);
    free(test_tmp);

    return accuracy;
}


/*
%%-------LDA testing procedure---------%%
%   Integrate three steps:
%   1. feature extraction
%   2. feature normalization
%   3. classification
% Inputs:
%     TestData: the raw EMG data for one analysis window
%     Wg: parameter of the LDA classifier (feature vector dimension x # of classes)
%     Cg: parameter of the LDA classifier (1 x # of classes)
%     xmean: parameter for normalization
%     xstd: parameter for normalization
% return:
%     test_decision: the classification decision
%
%%% By Xiaorong Zhang, 7/28/2014  %%%%%%%%
*/
int LDA_test(
    float *TestData,      // raw EMG window [channel * wl]
    float *Wg,            // [num_class x feature_dim]
    float *Cg,            // [num_class]
    float *xmean,         // [feature_dim]
    float *xstd,          // [feature_dim]
    int    wl,            // window length (samples per channel)
    int    channel,       // number of channels
    int    feature_dim,   // tdfeatureN * channel
    int    num_class,     // number of classes
    float  deadzone_zc,   // same as tdfeats
    float  deadzone_turn, // same as tdfeats
    int    scale_mav,     // same as tdfeats
    int    scale_zc,      // same as tdfeats
    int    tdfeatureN     // number of TD features per channel
)
{
    int j;
    float *Feature_test = NULL;
    float *tmp          = NULL;
    float *tmp1         = NULL;
    float maxdata       = -9999.0f;
    int   test_decision = 0;

    /* --------- allocate buffers ---------- */
    Feature_test = (float*)malloc(feature_dim * sizeof(float));
    tmp          = (float*)malloc(num_class * sizeof(float));
    tmp1         = (float*)malloc(num_class * sizeof(float));

    if (!Feature_test || !tmp || !tmp1) {
        printf("LDA_test: malloc failed\n");
        if (Feature_test) free(Feature_test);
        if (tmp)          free(tmp);
        if (tmp1)         free(tmp1);
        return -1;
    }

    /* --------- 1) extract TD features for this single window ---------- */
    tdfeats(
        TestData,       // DataSet_in: one window of raw EMG (wl * channel samples)
        wl,             // win_length
        channel,        // channel count
        0,              // Nframe = 0 (only 1 frame)
        Feature_test,   // output feature row
        deadzone_zc,    // deadzone_zc
        deadzone_turn,  // deadzone_turn
        scale_mav,      // scale_mav
        scale_zc,       // scale_zc
        tdfeatureN      // number of TD features per channel
    );

    /* --------- 2) apply normalization ---------- */
    /* Original version: feature_normalization_apply(x, xmean, xstd); */
    feature_normalization_apply(
    Feature_test,
    xmean,
    xstd,
    feature_dim   // or FEATURE_DIM if you keep the macro
);

    /* If you ever change it to 4-arg: feature_normalization_apply(Feature_test, xmean, xstd, feature_dim); */

    /* --------- 3) linear score: 1 x feature_dim * feature_dim x num_class = 1 x num_class ---------- */
    mulAB(Feature_test, Wg, tmp, 1, feature_dim, num_class);

    /* --------- 4) add class bias Cg ---------- */
    addition(Cg, tmp, tmp1, 1, num_class);

    /* --------- 5) argmax over classes ---------- */
    for (j = 0; j < num_class; j++) {
        if (tmp1[j] > maxdata) {
            maxdata       = tmp1[j];
            test_decision = j + 1;   // labels are 1..num_class
        }
    }

    free(Feature_test);
    free(tmp);
    free(tmp1);

    return test_decision;
}
////////////////////////////////////////////////////////////////////////////////
//  int Lower_Triangular_Solve(double *L, double *B, double x[], int n)       //
//                                                                            //
//  Description:                                                              //
//     This routine solves the linear equation Lx = B, where L is an n x n    //
//     lower triangular matrix.  (The superdiagonal part of the matrix is     //
//     not addressed.)                                                        //
//     The algorithm follows:                                                 //
//                      x[0] = B[0]/L[0][0], and                              //
//     x[i] = [B[i] - (L[i][0] * x[0]  + ... + L[i][i-1] * x[i-1])] / L[i][i],//
//     for i = 1, ..., n-1.                                                   //
//                                                                            //
//  Arguments:                                                                //
//     double *L   Pointer to the first element of the lower triangular       //
//                 matrix.                                                    //
//     double *B   Pointer to the column vector, (n x 1) matrix, B.           //
//     double *x   Pointer to the column vector, (n x 1) matrix, x.           //
//     int     n   The number of rows or columns of the matrix L.             //
//                                                                            //
//  Return Values:                                                            //
//     0  Success                                                             //
//    -1  Failure - The matrix L is singular.                                 //
//                                                                            //
//  Example:                                                                  //
//     #define N                                                              //
//     double A[N][N], B[N], x[N];                                            //
//                                                                            //
//     (your code to create matrix A and column vector B)                     //
//     err = Lower_Triangular_Solve(&A[0][0], B, x, n);                       //
//     if (err < 0) printf(" Matrix A is singular\n");                        //
//     else printf(" The solution is \n");                                    //
//           ...                                                              //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
int Lower_Triangular_Solve(float *L, float B[], float x[], int n)
{
   int i, k;

//         Solve the linear equation Lx = B for x, where L is a lower
//         triangular matrix.

   for (k = 0; k < n; L += n, k++) {
      if (*(L + k) == 0.0) return -1;           // The matrix L is singular
      x[k] = B[k];
      for (i = 0; i < k; i++) x[k] -= x[i] * *(L + i);
      x[k] /= *(L + k);
   }

   return 0;
}
////////////////////////////////////////////////////////////////////////////////
//  int Upper_Triangular_Solve(double *U, double *B, double x[], int n)       //
//                                                                            //
//  Description:                                                              //
//     This routine solves the linear equation Ux = B, where U is an n x n    //
//     upper triangular matrix.  (The subdiagonal part of the matrix is       //
//     not addressed.)                                                        //
//     The algorithm follows:                                                 //
//                  x[n-1] = B[n-1]/U[n-1][n-1], and                          //
//     x[i] = [B[i] - (U[i][i+1] * x[i+1]  + ... + U[i][n-1] * x[n-1])]       //
//                                                                 / U[i][i], //
//     for i = n-2, ..., 0.                                                   //
//                                                                            //
//  Arguments:                                                                //
//     double *U   Pointer to the first element of the upper triangular       //
//                 matrix.                                                    //
//     double *B   Pointer to the column vector, (n x 1) matrix, B.           //
//     double *x   Pointer to the column vector, (n x 1) matrix, x.           //
//     int     n   The number of rows or columns of the matrix U.             //
//                                                                            //
//  Return Values:                                                            //
//     0  Success                                                             //
//    -1  Failure - The matrix U is singular.                                 //
//                                                                            //
//  Example:                                                                  //
//     #define N                                                              //
//     double A[N][N], B[N], x[N];                                            //
//                                                                            //
//     (your code to create matrix A and column vector B)                     //
//     err = Upper_Triangular_Solve(&A[0][0], B, x, n);                       //
//     if (err < 0) printf(" Matrix A is singular\n");                        //
//     else printf(" The solution is \n");                                    //
//           ...                                                              //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
int Upper_Triangular_Solve(float *U, float B[], float x[], int n)
{
   int i, k;

//         Solve the linear equation Ux = B for x, where U is an upper
//         triangular matrix.

   for (k = n-1, U += n * (n - 1); k >= 0; U -= n, k--) {
      if (*(U + k) == 0.0) return -1;           // The matrix U is singular
      x[k] = B[k];
      for (i = k + 1; i < n; i++) x[k] -= x[i] * *(U + i);
      x[k] /= *(U + k);
   }

   return 0;
}

////////////////////////////////////////////////////////////////////////////////
//  int Choleski_LU_Decomposition(double *A, int n)                           //
//                                                                            //
//  Description:                                                              //
//     This routine uses Choleski's method to decompose the n x n positive    //
//     definite symmetric matrix A into the product of a lower triangular     //
//     matrix L and an upper triangular matrix U equal to the transpose of L. //
//     The original matrix A is replaced by L and U with L stored in the      //
//     lower triangular part of A and the transpose U in the upper triangular //
//     part of A. The original matrix A is therefore destroyed.               //
//                                                                            //
//     Choleski's decomposition is performed by evaluating, in order, the     //
//     following pair of expressions for k = 0, ... ,n-1 :                    //
//       L[k][k] = sqrt( A[k][k] - ( L[k][0] ^ 2 + ... + L[k][k-1] ^ 2 ) )    //
//       L[i][k] = (A[i][k] - (L[i][0]*L[k][0] + ... + L[i][k-1]*L[k][k-1]))  //
//                          / L[k][k]                                         //
//     and subsequently setting                                               //
//       U[k][i] = L[i][k], for i = k+1, ... , n-1.                           //
//                                                                            //
//     After performing the LU decomposition for A, call Choleski_LU_Solve    //
//     to solve the equation Ax = B or call Choleski_LU_Inverse to calculate  //
//     the inverse of A.                                                      //
//                                                                            //
//  Arguments:                                                                //
//     double *A   On input, the pointer to the first element of the matrix   //
//                 A[n][n].  On output, the matrix A is replaced by the lower //
//                 and upper triangular Choleski factorizations of A.         //
//     int     n   The number of rows and/or columns of the matrix A.         //
//                                                                            //
//  Return Values:                                                            //
//     0  Success                                                             //
//    -1  Failure - The matrix A is not positive definite symmetric (within   //
//                  working accuracy).                                        //
//                                                                            //
//  Example:                                                                  //
//     #define N                                                              //
//     double A[N][N];                                                        //
//                                                                            //
//     (your code to initialize the matrix A)                                 //
//     err = Choleski_LU_Decomposition((double *) A, N);                      //
//     if (err < 0) printf(" Matrix A is singular\n");                        //
//     else { printf(" The LLt decomposition of A is \n");                    //
//           ...                                                              //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
int Choleski_LU_Decomposition(float *A, int n)
{
   int i, k, p;
   float *p_Lk0;                   // pointer to L[k][0]
   float *p_Lkp;                   // pointer to L[k][p]
   float *p_Lkk;                   // pointer to diagonal element on row k.
   float *p_Li0;                   // pointer to L[i][0]
   float reciprocal;

   for (k = 0, p_Lk0 = A; k < n; p_Lk0 += n, k++) {

//            Update pointer to row k diagonal element.

      p_Lkk = p_Lk0 + k;

//            Calculate the difference of the diagonal element in row k
//            from the sum of squares of elements row k from column 0 to
//            column k-1.

      for (p = 0, p_Lkp = p_Lk0; p < k; p_Lkp += 1,  p++)
         *p_Lkk -= *p_Lkp * *p_Lkp;

//            If diagonal element is not positive, return the error code,
//            the matrix is not positive definite symmetric.

      if ( *p_Lkk <= 0.0 ) return -1;

//            Otherwise take the square root of the diagonal element.

      *p_Lkk = sqrt( *p_Lkk );
      reciprocal = 1.0 / *p_Lkk;

//            For rows i = k+1 to n-1, column k, calculate the difference
//            between the i,k th element and the inner product of the first
//            k-1 columns of row i and row k, then divide the difference by
//            the diagonal element in row k.
//            Store the transposed element in the upper triangular matrix.

      p_Li0 = p_Lk0 + n;
      for (i = k + 1; i < n; p_Li0 += n, i++) {
         for (p = 0; p < k; p++)
            *(p_Li0 + k) -= *(p_Li0 + p) * *(p_Lk0 + p);
         *(p_Li0 + k) *= reciprocal;
         *(p_Lk0 + i) = *(p_Li0 + k);
      }
   }
   return 0;
}


////////////////////////////////////////////////////////////////////////////////
//  int Choleski_LU_Solve(double *LU, double *B, double *x,  int n)           //
//                                                                            //
//  Description:                                                              //
//     This routine uses Choleski's method to solve the linear equation       //
//     Ax = B.  This routine is called after the matrix A has been decomposed //
//     into a product of a lower triangular matrix L and an upper triangular  //
//     matrix U which is the transpose of L. The matrix A is the product LU.  //
//     The solution proceeds by solving the linear equation Ly = B for y and  //
//     subsequently solving the linear equation Ux = y for x.                 //
//                                                                            //
//  Arguments:                                                                //
//     double *LU  Pointer to the first element of the matrix whose elements  //
//                 form the lower and upper triangular matrix factors of A.   //
//     double *B   Pointer to the column vector, (n x 1) matrix, B            //
//     double *x   Solution to the equation Ax = B.                           //
//     int     n   The number of rows and/or columns of the matrix LU.        //
//                                                                            //
//  Return Values:                                                            //
//     0  Success                                                             //
//    -1  Failure - The matrix L is singular.                                 //
//                                                                            //
//  Example:                                                                  //
//     #define N                                                              //
//     double A[N][N], B[N], x[N];                                            //
//                                                                            //
//     (your code to create matrix A and column vector B)                     //
//     err = Choleski_LU_Decomposition(&A[0][0], N);                          //
//     if (err < 0) printf(" Matrix A is singular\n");                        //
//     else {                                                                 //
//        err = Choleski_LU_Solve(&A[0][0], B, x, n);                         //
//        if (err < 0) printf(" Matrix A is singular\n");                     //
//        else printf(" The solution is \n");                                 //
//           ...                                                              //
//     }                                                                      //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
int Choleski_LU_Solve(float *LU, float B[], float x[], int n)
{

//         Solve the linear equation Ly = B for y, where L is a lower
//         triangular matrix.

   if ( Lower_Triangular_Solve(LU, B, x, n) < 0 ) return -1;

//         Solve the linear equation Ux = y, where y is the solution
//         obtained above of Ly = B and U is an upper triangular matrix.

   return Upper_Triangular_Solve(LU, x, x, n);
}

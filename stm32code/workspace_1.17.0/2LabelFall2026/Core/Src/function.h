#pragma once

// pattern recognition parameter definitions
#define WL  100        //windlow length
#define WINC 50      //window increment
#define TD_FEATURES 4   //number of features
#define CHANNEL 3      //number of channels
#define CLASS   2      //number of classes
#define FEATURE_DIM (TD_FEATURES*CHANNEL) //feature vector dimension
#define TRAINDATA_ROW	Feature_DIM     //number of rows in the training feature matrix (i.e. the feature vector dimension)
#define	TRAINDATA_COLUMN	WINDOW_NUM  //number of columns in the training feature matrix (i.e. the total number of windows in the training data)
#define WL_DIV_WINC (WL/WINC-1)
#define MV_NUM 5    //majority vote windows

#define TRIAL_PER_CLASS 3   //number of data trials collected for each class
#define DATA_PER_TRIAL  1000 //number of data samples per trial per channel
#define WIN_PER_TRIAL   (DATA_PER_TRIAL/WINC-WL_DIV_WINC)


// feature extraction parameter definitions
#define DEADZONE_ZC    0.025    //estimated baseline noise level for calculating zero crossings
#define DEADZONE_TURN    0.015  //estimated noise level for calculating slope sign changes
#define SCALE_ZC	15          //parameter for zero crossing
#define SCALE_MAV	2           //parameter for mean absolute value

#define FEATURE_MAV_IDX     0      //feature index MAV: mean absolute value
#define FEATURE_LEN_IDX     1      //feature index LEN: waveform length
#define FEATURE_ZERO_IDX    2      //feature index ZERO: number of zero crossings
#define FEATURE_TURN_IDX    3      //feature index TURN: number of slope sign changes

void mulAB(const float *A, const float *B, float *C, int am, int an, int bn);

void addition(const float *A, const float *B, float *C, int m, int n);

void tdfeats(const float *DataSet_in,int win_length,int channel, int Nframe, float *Features);

void feature_normalization(float *features, float * xmean, float * xstd,int num);
void feature_normalization_apply(float *features, const float *xmean, const float *xstd);
void LDA_train(float *TrainData,int *TrainClass, float * Wg, float * Cg);

float LDA_train_accuracy(const float *TrainData, const int *TrainClass, const float *Wg, const float *Cg);
int LDA_test(const float TestData2[], const float Wg2[], const float Cg2[],
             const float xmean2[], const float xstd2[]);

int Lower_Triangular_Solve(const float *L, const float *B, float *x, int n);
int Upper_Triangular_Solve(const float *U, const float *B, float *x, int n);
int Choleski_LU_Decomposition(float *A, int n);
int Choleski_LU_Solve(const float *LU, const float *B, float *x, int n);

int majority_vote(const int *decision_buffer, int size);

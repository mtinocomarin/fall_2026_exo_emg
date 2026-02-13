#pragma once

/*  Matrix Multiply
    C=A*B
    A:(am x an)
    B:(an x bn)
    C:(am x bn)
*/
void mulAB(float *A,float *B,float *C,int am,int an,int bn);

/*  Matrix Addition
    C=A+B
    A,B,C:(m x n)
*/
void addition(float *A,float *B,float *C, int m,int n);
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
void tdfeats(float *DataSet_in,int win_length,int channel, int Nframe, float *Features);

/*  Feature Normalization
    mapstd in Matlab
    Input:
        features: the feature matrix of training data (TRANDATA_ROW x num)
        num: number of feature vectors (windows) in the feature matrix
    Output:
        xmean: parameter of the normalization to be used in the testing phase (mean)
        xtd: parameter of the normalization to be used in the testing phase (std)
*/
void feature_normalization(float *features, float * xmean, float * xstd,int num);

/*  Feature Normalization in the testing phase
    mapstd('apply') in Matlab
    Inputs:
        features: the feature vector to be normalized (Feature_DIM x 1)
        xmean: parameter of normalization obtained in the training phase
        xtd: parameter of normalization obtained in the training phase
    Output:
        features: the normalized feature vector
*/
void feature_normalization_apply(float *features, float * xmean, float * xstd);

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
void LDA_train(float *TrainData,int *TrainClass, float * Wg, float * Cg);

/*
%%-------calculate the LDA training accuracy---------%%
% Inputs:
%     TrainData: the feature matrix of the training data (feature vector dimension x # of windows)
%     TrainClass: the class label for the feature matrix (feature vector dimension x # of windows)
%     Wg: parameter of the LDA classifier (feature vector dimension x # of classes)
%     Cg: parameter of the LDA classifier (1 x # of classes)
% return:
%     accuracy: LDA training accuracy
%%% By Xiaorong Zhang, 7/28/2014  %%%%%%%%
*/
float LDA_train_accuracy(float *TrainData,int *TrainClass, float * Wg, float * Cg);


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
int LDA_test(float *TestData, float *Wg, float *Cg, float *xmean, float *xstd);

int Lower_Triangular_Solve(float *L, float B[], float x[], int n);
int Upper_Triangular_Solve(float *U, float B[], float x[], int n);
int Choleski_LU_Decomposition(float *A, int n);
int Choleski_LU_Solve(float *LU, float B[], float x[], int n);

int majority_vote(int * decision_buffer, int size);




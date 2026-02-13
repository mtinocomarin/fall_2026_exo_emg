#pragma once

/* ====== DLL export macro ====== */
#ifdef _WIN32
    #ifdef BUILD_EMG_DLL
        #define DLL_EXPORT __declspec(dllexport)
    #else
        #define DLL_EXPORT __declspec(dllimport)
    #endif
#else
    #define DLL_EXPORT
#endif


/*  Matrix Multiply
    C=A*B
    A:(am x an)
    B:(an x bn)
    C:(am x bn)
*/
DLL_EXPORT void mulAB(float *A,float *B,float *C,int am,int an,int bn);

/*  Matrix Addition
    C=A+B
    A,B,C:(m x n)
*/
DLL_EXPORT void addition(float *A,float *B,float *C, int m,int n);


/*
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% TDFEATS  Compute four time domain features
%   1. mav: mean absolute value
%   2. len: waveform length
%   3. zero_count: number of zero crossings
%   4. turns: number of slope sign changes
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/
DLL_EXPORT void tdfeats(
    float *DataSet_in,   // window data
    int   win_length,    // WL
    int   channel,       // number of channels
    int   Nframe,        // which window index
    float *Features,     // output feature buffer
    float deadzone_zc,   // zero-crossing deadzone
    float deadzone_turn, // turn (SSC) deadzone
    int   scale_mav,     // MAV scale
    int   scale_zc,      // ZC scale
    int   tdfeatureN     // number of features per channel
);


/*  Feature Normalization (training) */
DLL_EXPORT void feature_normalization(float *features,
                                      float *xmean,
                                      float *xstd,
                                      int    num_samples,   // #windows/rows
                                      int    feature_dim);  // features per window


/*  Feature Normalization in the testing phase */
DLL_EXPORT void feature_normalization_apply(float *features,
                                            float *xmean,
                                            float *xstd,
                                            int    feature_dim);


/* LDA training */
DLL_EXPORT void LDA_train(float *TrainData,
                          int   *TrainClass,
                          float *Wg,
                          float *Cg,
                          int    feature_dim,
                          int    num_class,
                          int    win_per_trial,
                          int    trial_per_class);


/* LDA training accuracy */
DLL_EXPORT float LDA_train_accuracy(float *TrainData,
                                    int   *TrainClass,
                                    float *Wg,
                                    float *Cg,
                                    int    feature_dim,
                                    int    num_class,
                                    int    win_per_trial,
                                    int    trial_per_class);


/* LDA testing (one window) */
DLL_EXPORT int LDA_test(
    float *TestData,      // raw EMG window [channel * wl]
    float *Wg,            // [num_class x feature_dim]
    float *Cg,            // [num_class]
    float *xmean,         // [feature_dim]
    float *xstd,          // [feature_dim]
    int    wl,            // window length
    int    channel,       // number of channels
    int    feature_dim,   // tdfeatureN * channel
    int    num_class,     // number of classes
    float  deadzone_zc,
    float  deadzone_turn,
    int    scale_mav,
    int    scale_zc,
    int    tdfeatureN
);


/* Cholesky / triangular solvers */
DLL_EXPORT int Lower_Triangular_Solve(float *L, float B[], float x[], int n);
DLL_EXPORT int Upper_Triangular_Solve(float *U, float B[], float x[], int n);
DLL_EXPORT int Choleski_LU_Decomposition(float *A, int n);
DLL_EXPORT int Choleski_LU_Solve(float *LU, float B[], float x[], int n);

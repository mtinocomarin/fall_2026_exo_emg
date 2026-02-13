
/****************************************************************************
 *
 *   Author: Milton Tinoco
 *   Last Updated: 12/30/2024
 *
 *   Description:
 *   This code is part of the project "EMG-based Hand Gesture Recognition."
 *   It is used to train and test the LDA classifier for hand gesture recognition.
 *   This version includes edits and updates based on the original implementation
 *   by Xiaorong Zhang.
 *
 ****************************************************************************/


/* ---- Include Files ---------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <assert.h>
#include <math.h>
#include "function.h"
#include "carray.h"


int main( int argc, char **argv )
{
	float *TrainData;
	float *TestData;
	int *TrainClass;
	float *Feature_matrix;
	FILE *TraindataFile=NULL;
	FILE *TestdataFile=NULL;
	FILE *PSFile=NULL;
	FILE *WgCgFile=NULL;
	FILE *FeatureMatrixFile=NULL;
	int i,j,m;
	float *Wg;
    float *Cg;
	float accuracy;
	float test_accuracy;
	int num_correct;
	int total_win_num;
	int test_decision;
	float *xmean;
	float *xstd;
	int trial_idx=0;
	int class_idx=0;
	int feature_matrix_idx=0;

	Wg=(float*)malloc(FEATURE_DIM*CLASS*sizeof(float));
    Cg=(float*)malloc(1*CLASS*sizeof(float));
	xmean=(float*)malloc(1*FEATURE_DIM*sizeof(float));
	xstd=(float*)malloc(1*FEATURE_DIM*sizeof(float));
	TrainData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
    TestData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
	TrainClass = (int*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*sizeof(int));     //class label for the training dataset
	Feature_matrix = (float*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*FEATURE_DIM*sizeof(float));

 // Initialize dynamically allocated memory
    float Wg_init[FEATURE_DIM * CLASS] = {
    -39.865700, 38.494923, 1.370464,
    9.822060, -5.708473, -4.113415,
    -18.450970, 12.169329, 6.281702,
    -53.120068, 30.987568, 22.132446,
    -29.518837, 22.895094, 6.623897,
    26.794121, -22.134504, -4.659643,
    10.020878, -1.226090, -8.794820,
    -30.046625, 22.034584, 8.012098,
    -20.616077, 21.666063, -1.050015,
    -7.809905, 12.735570, -4.925624,
    -22.981161, 15.353989, 7.627159,
    -9.838930, 4.600960, 5.238039
};

    float Cg_init[CLASS] = { -114.407043 ,-79.437294 ,-18.518524 };

    float xmean_init[FEATURE_DIM] = {0.028282, 0.016302, 0.281820, 0.597252, 0.009159, -0.000722, 0.163879, 0.506750, 0.038467, 0.031548, 0.411250, 0.871206};

    float xstd_init[FEATURE_DIM] = {0.026960, 0.022577, 0.206790, 0.364972, 0.005131, 0.002215, 0.159099, 0.324362, 0.038447, 0.043558, 0.198841, 0.211047};
	   // Copy values into dynamically allocated arrays
    for (i = 0; i < FEATURE_DIM * CLASS; i++) {
        Wg[i] = Wg_init[i];
    }
    for (i = 0; i < CLASS; i++) {
        Cg[i] = Cg_init[i];
    }
    for (i = 0; i < FEATURE_DIM; i++) {
        xmean[i] = xmean_init[i];
        xstd[i] = xstd_init[i];
    }

	for (i = 0; i < CHANNEL*DATA_PER_TRIAL; i++) 
	{
      TestData[i] = data[i];
    }

	class_idx=0;
	total_win_num=0;
	num_correct=0;
    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m,Wg,Cg,xmean,xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	test_accuracy=((float)num_correct)/total_win_num;
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

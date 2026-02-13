
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


	TrainData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
    TestData = (float*)malloc(CHANNEL*DATA_PER_TRIAL*sizeof(float));  //raw EMG data of the training dataset
	TrainClass = (int*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*sizeof(int));     //class label for the training dataset
	Feature_matrix = (float*)malloc(CLASS*WIN_PER_TRIAL*TRIAL_PER_CLASS*FEATURE_DIM*sizeof(float));
	Wg=(float*)malloc(FEATURE_DIM*CLASS*sizeof(float));
    Cg=(float*)malloc(1*CLASS*sizeof(float));
	xmean=(float*)malloc(1*FEATURE_DIM*sizeof(float));
	xstd=(float*)malloc(1*FEATURE_DIM*sizeof(float));



	printf("********************************************************\n");
	printf("*******      Training Session Starts      **************\n");
	printf("********************************************************\n\n");

	//class 1, trial 1
	TraindataFile=fopen("..\\data\\train\\NoMovement1.txt","r");
	if (TraindataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		
		i++;
	}
	
	fclose(TraindataFile);

	trial_idx++;
	feature_matrix_idx=0;
	m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 1, trial 2
	TraindataFile=fopen("..\\data\\train\\NoMovement3.txt","r");
	if (TraindataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;

	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		
		i++;
	}
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 1, trial 3
	TraindataFile=fopen("..\\data\\train\\NoMovement5.txt","r");
	if (TraindataFile == NULL) {
		perror("fopen");
		exit(0);
	}
	i=0;
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){

		i++;
	}
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    class_idx++; //class 2
	//class 2, trial 1
	TraindataFile=fopen("..\\data\\train\\HandClose1.txt","r");
	if (TraindataFile == NULL) {
	
		perror("fopen");
		exit(0);
	}
	i=0;
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){

		i++;
	}

	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 1, trial 2
	TraindataFile=fopen("..\\data\\train\\HandClose3.txt","r");
	if (TraindataFile == NULL) {
	
		perror("fopen");
		exit(0);
	}
	i=0;

	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){

		i++;
	}
	
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 2, trial 3
	TraindataFile=fopen("..\\data\\train\\HandClose5.txt","r");
	if (TraindataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		
		i++;
	}
	
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

	class_idx++; //class 3
	//class 3, trial 1
	TraindataFile=fopen("..\\data\\train\\HandOpen1.txt","r");
	if (TraindataFile == NULL) {
		perror("fopen");
		exit(0);
	}
	i=0;
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		i++;
	}
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 3, trial 2
	TraindataFile=fopen("..\\data\\train\\HandOpen3.txt","r");
	if (TraindataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		
		i++;
	}

	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 3, trial 3
	TraindataFile=fopen("..\\data\\train\\HandOpen5.txt","r");
	if (TraindataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		
		i++;
	}
	
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<WIN_PER_TRIAL)
	{
		tdfeats(TrainData+WINC*CHANNEL*m,WL,CHANNEL, feature_matrix_idx, Feature_matrix);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}
   

	j=0;

    FeatureMatrixFile=fopen("FeatureMatrix_before_norm.txt","w");
    for(i=0;i<feature_matrix_idx;i++){
        for(j=0;j<FEATURE_DIM;j++){
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j+i*FEATURE_DIM]);
        }
        fprintf(FeatureMatrixFile, "\n ");
    }
	fclose(FeatureMatrixFile);

	feature_normalization(Feature_matrix, xmean, xstd,feature_matrix_idx);
	printf("Feature normalization complete!!!\n\n");
	LDA_train(Feature_matrix,TrainClass, Wg, Cg);
	printf("training complete!!!\n\n");



	accuracy=LDA_train_accuracy(Feature_matrix,TrainClass, Wg, Cg);

	PSFile=fopen("PS.txt","w");
	for(j=0;j<FEATURE_DIM;j++){
		fprintf(PSFile, "%f ", xmean[j]);
		fprintf(PSFile, "%f\n", xstd[j]);
	}
	fclose(PSFile);

	WgCgFile=fopen("WgCg.txt","w");
	for(j=0;j<FEATURE_DIM;j++){
		for(i=0;i<CLASS;i++){
			fprintf(WgCgFile, "%f ", Wg[i+j*CLASS]);
		}
		fprintf(WgCgFile, "\n ");
	}
	for(i=0;i<CLASS;i++){
		fprintf(WgCgFile, "%f ", Cg[i]);
	}

	fclose(WgCgFile);

    FeatureMatrixFile=fopen("FeatureMatrix.txt","w");
    for(i=0;i<feature_matrix_idx;i++){
        for(j=0;j<FEATURE_DIM;j++){
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j+i*FEATURE_DIM]);
        }
        fprintf(FeatureMatrixFile, "\n ");
    }
	fclose(FeatureMatrixFile);

	/////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////   testing phase///////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////

    //class 1, trial 1
	TestdataFile=fopen("..\\data\\test\\NoMovement2.txt","r");
	if (TestdataFile == NULL) {
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}

	fclose(TestdataFile);


	class_idx=0;
	total_win_num=0;
	num_correct=0;
    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 1, trial 2
	TestdataFile=fopen("..\\data\\test\\NoMovement4.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}

	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

		test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 1, trial 3
	TestdataFile=fopen("..\\data\\test\\NoMovement6.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
	
		i++;
	}

	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}


    //class 2, trial 1
	TestdataFile=fopen("..\\data\\test\\HandClose2.txt","r");
	if (TestdataFile == NULL) {
	
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}

	fclose(TestdataFile);


	class_idx++;
    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 2, trial 2
	TestdataFile=fopen("..\\data\\test\\HandClose4.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}

	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 2, trial 3
	TestdataFile=fopen("..\\data\\test\\HandClose6.txt","r");
	if (TestdataFile == NULL) {
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}
	
	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}


    //class 3, trial 1
	TestdataFile=fopen("..\\data\\test\\HandOpen2.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}
	
	fclose(TestdataFile);


	class_idx++;
    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 3, trial 2
	TestdataFile=fopen("..\\data\\test\\HandOpen4.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}
	
	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

    //class 3, trial 3
	TestdataFile=fopen("..\\data\\test\\HandOpen6.txt","r");
	if (TestdataFile == NULL) {
		
		perror("fopen");
		exit(0);
	}
	i=0;
	
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		
		i++;
	}

	fclose(TestdataFile);

    m=0;
	while(m<WIN_PER_TRIAL)
	{

        test_decision = LDA_test(TestData+WINC*CHANNEL*m, Wg, Cg, xmean, xstd);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}
	test_accuracy=((float)num_correct)/total_win_num;
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////   testing phase end    ///////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////
	printf("\ntraining accuracy=%.4f\t\n",accuracy);
    printf("\ntesting accuracy=%.4f\t\n",test_accuracy);

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

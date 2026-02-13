

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <assert.h>
#include <math.h>
#include "EMG_PR.h"
#include <windows.h>


int main( int argc, char **argv )
{

	int class=3; //number of classes
	int channel=6; //number of channels
	int wl = 160; //window length
	int winc = 20; //window increment
	int tdfeatureN = 4; //number of time domain features
	float deadzone_zc = 0.025; //zero crossing deadzone
	float deadzone_turn = 0.015; //slope sign change deadzone
	int scale_zc = 15; //zero crossing scale
	int scale_mav = 2; //mean absolute value scale
	int feature_mav_idx = 0; //feature index MAV: mean absolute value
	int feature_len_idx = 1; //feature index LEN: waveform length
	int feature_zero_idx = 2; //feature index ZERO: number of zero crossings
	int feature_turn_idx = 3; //feature index TURN: number of slope sign changes
	int feature_dim = tdfeatureN * channel; //feature vector dimension
	int trial_per_class = 3;
	int data_per_trial = 2000; //number of data samples per trial per channel
	int win_per_trial = (data_per_trial / winc - (wl / winc - 1)); //number of windows per trial



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



	TrainData = (float*)malloc(channel*data_per_trial*sizeof(float));  //raw EMG data of the training dataset
    TestData = (float*)malloc(channel*data_per_trial*sizeof(float));  //raw EMG data of the training dataset
	TrainClass = (int*)malloc(class*win_per_trial*trial_per_class*sizeof(int));     //class label for the training dataset
	
	Feature_matrix = (float*)malloc(class*win_per_trial*trial_per_class*feature_dim*sizeof(float));
	Wg=(float*)malloc(feature_dim*class*sizeof(float));
    Cg=(float*)malloc(1*class*sizeof(float));
	xmean=(float*)malloc(1*feature_dim*sizeof(float));
	xstd=(float*)malloc(1*feature_dim*sizeof(float));


	printf("********************************************************\n");
	printf("*******      Training Session Starts      **************\n");
	printf("********************************************************\n\n");

	//class 1, trial 1
	TraindataFile=fopen("..\\data\\train\\NoMovement1.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class1 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}


	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	// === Analyze array properties ===
	int total_values = i;
	int inferred_rows = total_values / channel;
	int leftover = total_values % channel;

	printf("📊 Total values read: %d\n", total_values);
	printf("📐 Inferred matrix shape: %d rows x %d channels\n", inferred_rows, channel);
	if (leftover > 0) {
		printf("⚠️ Warning: %d leftover values that don't form a full row.\n", leftover);
	}

	// === Save to data_info.txt ===
	FILE *infoFile = fopen("data_info.txt", "w");
	if (infoFile == NULL) {
		printf("❌ Failed to open data_info.txt for writing.\n");
		exit(EXIT_FAILURE);
	}

	fprintf(infoFile, "Total values read: %d\n", total_values);
	fprintf(infoFile, "Inferred shape: %d rows x %d channels\n", inferred_rows, channel);
	if (leftover > 0) {
		fprintf(infoFile, "Warning: %d leftover values not forming a complete row.\n", leftover);
	}

	fprintf(infoFile, "First 12 values:\n");
	for (int k = 0; k < 12 && k < total_values; k++) {
		fprintf(infoFile, "%.5f ", TrainData[k]);
	}
	fprintf(infoFile, "\n");

	fclose(infoFile);
	printf("✅ Data properties saved to data_info.txt\n");
	

	trial_idx++;
	feature_matrix_idx=0;
	m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

	FILE *outfile = fopen("firstrialfeatures.txt", "w");
	if (outfile == NULL) {
		printf("❌ Unable to open firstrialfeatures.txt for writing.\n");
		exit(1);
	}

	for (int row = 0; row < feature_matrix_idx; row++) {
		for (int col = 0; col < tdfeatureN * channel; col++) {
			fprintf(outfile, "%.6f ", Feature_matrix[row * tdfeatureN * channel + col]);
		}
		fprintf(outfile, "\n");
	}

	fclose(outfile);
	printf("✅ Saved features from first trial to firstrialfeatures.txt\n");

    //class 1, trial 2
	TraindataFile=fopen("..\\data\\train\\NoMovement3.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class1 trial 2 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 1, trial 3
	TraindataFile=fopen("..\\data\\train\\NoMovement5.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class1 trial 3 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    class_idx++; //class 2
	//class 2, trial 1
	TraindataFile=fopen("..\\data\\train\\HandClose1.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class2 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 1, trial 2
	TraindataFile=fopen("..\\data\\train\\HandClose3.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class2 trial 2 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 2, trial 3
	TraindataFile=fopen("..\\data\\train\\HandClose5.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class1 trial 3 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

	class_idx++; //class 3
	//class 3, trial 1
	TraindataFile=fopen("..\\data\\train\\HandOpen1.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class3 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 3, trial 2
	TraindataFile=fopen("..\\data\\train\\HandOpen3.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class1 trial 2 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}

    //class 3, trial 3
	TraindataFile=fopen("..\\data\\train\\HandOpen5.txt","r");
	if (TraindataFile == NULL) {
		printf("Unable to open traindata file for class3 trial 3 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TraindataFile, "%f", &TrainData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TraindataFile);

	trial_idx++;

    m=0;
	while(m<win_per_trial)
	{
		tdfeats(TrainData+winc*channel*m,wl,channel, feature_matrix_idx, Feature_matrix, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
		TrainClass[feature_matrix_idx] = class_idx+1;
		feature_matrix_idx++;
		m++;
	}
    printf("feature_matrix_idx=%d,m=%d\n", feature_matrix_idx, m);

	j=0;

    FeatureMatrixFile=fopen("FeatureMatrix_before_norm.txt","w");
    for(i=0;i<feature_matrix_idx;i++){
        for(j=0;j<feature_dim;j++){
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j+i*feature_dim]);
        }
        fprintf(FeatureMatrixFile, "\n ");
    }
	fclose(FeatureMatrixFile);

	feature_normalization(Feature_matrix, xmean, xstd,feature_matrix_idx,feature_dim);
	printf("Feature normalization complete!!!\n\n");
	LDA_train(Feature_matrix,TrainClass, Wg, Cg, feature_dim, class, win_per_trial, trial_per_class);
	printf("training complete!!!\n\n");


	for(j=0;j<feature_dim;j++)
    {
        printf("\nxmean[%d]:%.4g\t,xstd:%.4g",j,xmean[j],xstd[j]);
    }
	for(i=0;i<class;i++){
		printf("\nWg[%d]=\n",i);
		for(j=0;j<feature_dim;j++)
        {
            printf("%.4g\t",Wg[i+j*class]);
        }
        printf("\nCg[%d]=%.4g\t",i,Cg[i]);
		printf("\n");
	}


	accuracy=LDA_train_accuracy(Feature_matrix,TrainClass, Wg, Cg, feature_dim, class, win_per_trial, trial_per_class);

	PSFile=fopen("PS.txt","w");
	for(j=0;j<feature_dim;j++){
		fprintf(PSFile, "%f ", xmean[j]);
		fprintf(PSFile, "%f\n", xstd[j]);
	}
	fclose(PSFile);

	WgCgFile=fopen("WgCg.txt","w");
	for(j=0;j<feature_dim;j++){
		for(i=0;i<class;i++){
			fprintf(WgCgFile, "%f ", Wg[i+j*class]);
		}
		fprintf(WgCgFile, "\n ");
	}
	for(i=0;i<class;i++){
		fprintf(WgCgFile, "%f ", Cg[i]);
	}

	fclose(WgCgFile);

    FeatureMatrixFile=fopen("FeatureMatrix.txt","w");
    for(i=0;i<feature_matrix_idx;i++){
        for(j=0;j<feature_dim;j++){
            fprintf(FeatureMatrixFile, "%f ", Feature_matrix[j+i*feature_dim]);
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
		printf("Unable to open testdata file for class1 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);


	class_idx=0;
	total_win_num=0;
	num_correct=0;
    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 1, trial 2
	TestdataFile=fopen("..\\data\\test\\NoMovement4.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class1 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

		test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel,	 deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 1, trial 3
	TestdataFile=fopen("..\\data\\test\\NoMovement6.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class1 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}


    //class 2, trial 1
	TestdataFile=fopen("..\\data\\test\\HandClose2.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class2 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);


	class_idx++;
    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 2, trial 2
	TestdataFile=fopen("..\\data\\test\\HandClose4.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class2 trial 2 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 2, trial 3
	TestdataFile=fopen("..\\data\\test\\HandClose6.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class2 trial 3 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}


    //class 3, trial 1
	TestdataFile=fopen("..\\data\\test\\HandOpen2.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class3 trial 1 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);


	class_idx++;
    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel,	 deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

	    //class 3, trial 2
	TestdataFile=fopen("..\\data\\test\\HandOpen4.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class3 trial 2 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
        if(test_decision==class_idx+1)
            num_correct++;
		m++;
		total_win_num++;
	}

    //class 3, trial 3
	TestdataFile=fopen("..\\data\\test\\HandOpen6.txt","r");
	if (TestdataFile == NULL) {
		printf("Unable to open testdata file for class3 trial 3 ... \n");
		perror("fopen");
		exit(0);
	}
	i=0;
	//printf("address0:%d, data:%f,address1:%d, data:%f\n", &TrainData[0], TrainData[0],&TrainData[1],TrainData[1]);
	while(fscanf(TestdataFile, "%f", &TestData[i])!=EOF){
		//printf("%d: %f\n",i,TrainData[i]);
		i++;
	}
	printf("fscanf complete!\n");
	fclose(TestdataFile);

    m=0;
	while(m<win_per_trial)
	{

        test_decision = LDA_test(TestData+winc*channel*m, Wg, Cg, xmean, xstd, feature_dim, class, wl, channel, deadzone_zc, deadzone_turn, scale_mav, scale_zc, tdfeatureN);
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

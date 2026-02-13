#ifndef CONFIG_H
#define CONFIG_H

// Define parameters

// pattern recognition parameter definitions
#define WL  160         //windlow length
#define WINC    20      //window increment
#define TD_FEATURES 4   //number of features
#define CHANNEL 6       //number of channels
#define CLASS   3       //number of classes
#define FEATURE_DIM (TD_FEATURES*CHANNEL) //feature vector dimension
#define TRAINDATA_ROW	Feature_DIM     //number of rows in the training feature matrix (i.e. the feature vector dimension)
#define	TRAINDATA_COLUMN	WINDOW_NUM  //number of columns in the training feature matrix (i.e. the total number of windows in the training data)
#define WL_DIV_WINC (WL/WINC-1)
#define MV_NUM 5    //majority vote windows

#define TRIAL_PER_CLASS 3   //number of data trials collected for each class
#define DATA_PER_TRIAL  2000 //number of data samples per trial per channel
#define WIN_PER_TRIAL   (DATA_PER_TRIAL/WINC-WL_DIV_WINC)


// feature extraction parameter definitions
#define DEADZONE_ZC	0.025       //estimated baseline noise level for calculating zero crossings
#define DEADZONE_TURN	0.015   //estimated noise level for calculating slope sign changes
#define SCALE_ZC	15          //parameter for zero crossing
#define SCALE_MAV	2           //parameter for mean absolute value

#define FEATURE_MAV_IDX     0      //feature index MAV: mean absolute value
#define FEATURE_LEN_IDX     1      //feature index LEN: waveform length
#define FEATURE_ZERO_IDX    2      //feature index ZERO: number of zero crossings
#define FEATURE_TURN_IDX    3      //feature index TURN: number of slope sign changes

// Define the training data file path

#define TRAIN_FILE_PATH1 "data\\train\\NoMovement1.txt"
#define TRAIN_FILE_PATH2 "data\\train\\NoMovement3.txt"
#define TRAIN_FILE_PATH3 "data\\train\\NoMovement5.txt"
#define TRAIN_FILE_PATH4 "data\\train\\HandClose1.txt"
#define TRAIN_FILE_PATH5 "data\\train\\HandClose3.txt"
#define TRAIN_FILE_PATH6 "data\\train\\HandClose5.txt"
#define TRAIN_FILE_PATH7 "data\\train\\HandOpen1.txt"
#define TRAIN_FILE_PATH8 "data\\train\\HandOpen3.txt"
#define TRAIN_FILE_PATH9 "data\\train\\HandOpen5.txt"

// TraindataFile=fopen(TRAIN_FILE_PATH5,"r");
// printf("load file: %s\n", TRAIN_FILE_PATH5);

// Define the testing data file path

#define TEST_FILE_PATH1 "data\\test\\NoMovement2.txt"
#define TEST_FILE_PATH2 "data\\test\\NoMovement4.txt"
#define TEST_FILE_PATH3 "data\\test\\NoMovement6.txt"
#define TEST_FILE_PATH4 "data\\test\\HandClose2.txt"
#define TEST_FILE_PATH5 "data\\test\\HandClose4.txt"
#define TEST_FILE_PATH6 "data\\test\\HandClose6.txt"
#define TEST_FILE_PATH7 "data\\test\\HandOpen2.txt"
#define TEST_FILE_PATH8 "data\\test\\HandOpen4.txt"
#define TEST_FILE_PATH9 "data\\test\\HandOpen6.txt"

//TestdataFile=fopen(TEST_FILE_PATH1,"r");
//printf("Load file: %s\n", TEST_FILE_PATH1);

#endif // CONFIG_H

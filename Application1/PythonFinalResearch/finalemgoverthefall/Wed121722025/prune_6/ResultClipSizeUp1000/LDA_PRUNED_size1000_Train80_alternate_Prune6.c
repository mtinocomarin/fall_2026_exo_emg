// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.02%
// test_accuracy: 54.93%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:44:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.281869, 0.281707,
    0.167783, -0.167387,
    -0.059291, 0.059247,
    -0.030557, 0.030342,
    -0.290854, 0.290935,
    -0.175648, 0.175596,
    -0.170660, 0.170624,
    0.380528, -0.380526,
    -0.441720, 0.441707,
    0.229513, -0.229476,
    0.018063, -0.018045,
    0.123643, -0.123686,
};

float Cg_init[2] = {
    -0.122007, -0.121979
};

float xstd_init[12] = {
    0.001042, 0.000082, 0.013502, 0.080256, 0.003140, 0.000856, 0.092435, 0.185513, 0.000868, 0.000111, 0.019960, 0.076394
};

float xmean_init[12] = {
    0.006537, -0.007683, 0.005560, 0.148017, 0.008489, -0.006872, 0.103293, 0.430729, 0.004336, -0.007717, 0.010931, 0.126843
};


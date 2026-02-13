// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.97%
// test_accuracy: 72.50%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:04:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.591013, 0.591040,
    -0.240114, 0.240055,
    0.383416, -0.383434,
    0.699595, -0.699569,
    0.775905, -0.775774,
    -0.846534, 0.846406,
    -0.019307, 0.019324,
    -0.069951, 0.069942,
    -0.415946, 0.415770,
    0.274472, -0.274131,
    -0.340809, 0.340710,
    0.198979, -0.199146,
};

float Cg_init[2] = {
    -0.302440, -0.302420
};

float xstd_init[12] = {
    0.003600, 0.001321, 0.101670, 0.167691, 0.001541, 0.000458, 0.026843, 0.075891, 0.001620, 0.000088, 0.016059, 0.066649
};

float xmean_init[12] = {
    0.009819, -0.006275, 0.172042, 0.581937, 0.003177, -0.007732, 0.006792, 0.048188, 0.003220, -0.007810, 0.004250, 0.066313
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.41%
// test_accuracy: 52.88%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 13:46:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.584491, 0.584417,
    0.446583, -0.446405,
    -0.055353, 0.055334,
    -0.256322, 0.256216,
    -0.363183, 0.363149,
    -0.288014, 0.288085,
    0.031787, -0.031807,
    0.288325, -0.288314,
    -0.588647, 0.588788,
    0.321187, -0.321474,
    0.027822, -0.027748,
    0.102156, -0.102072,
};

float Cg_init[2] = {
    -0.212634, -0.212639
};

float xstd_init[12] = {
    0.001063, 0.000081, 0.011442, 0.080300, 0.003238, 0.000889, 0.095400, 0.189734, 0.000880, 0.000117, 0.019091, 0.075649
};

float xmean_init[12] = {
    0.006519, -0.007687, 0.004236, 0.146021, 0.008478, -0.006864, 0.104170, 0.430769, 0.004386, -0.007711, 0.010346, 0.130435
};


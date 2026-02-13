// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.23%
// test_accuracy: 72.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:51:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.891171, 0.891183,
    -0.194747, 0.194755,
    0.591611, -0.591647,
    0.956669, -0.956652,
    1.257025, -1.257055,
    -0.991904, 0.991972,
    -0.239372, 0.239350,
    -0.199793, 0.199778,
    -0.667122, 0.667146,
    0.214432, -0.214463,
    -0.358548, 0.358562,
    0.289490, -0.289487,
};

float Cg_init[2] = {
    -0.480111, -0.480123
};

float xstd_init[12] = {
    0.003571, 0.001216, 0.103674, 0.177349, 0.001510, 0.000427, 0.022373, 0.073165, 0.001921, 0.000099, 0.018583, 0.067576
};

float xmean_init[12] = {
    0.009771, -0.006289, 0.176061, 0.585454, 0.003169, -0.007753, 0.005394, 0.048364, 0.003305, -0.007803, 0.005212, 0.069546
};


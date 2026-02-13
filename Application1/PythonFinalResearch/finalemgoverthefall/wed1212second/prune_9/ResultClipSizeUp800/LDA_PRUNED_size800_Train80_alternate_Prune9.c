// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.22%
// test_accuracy: 74.17%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 17:03:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.205839, 0.205670,
    -0.179570, 0.180017,
    -0.019202, 0.019136,
    0.121983, -0.122200,
    1.568392, -1.568646,
    -1.092194, 1.092473,
    -0.112720, 0.112672,
    0.109315, -0.109346,
    -0.579305, 0.579362,
    -0.393702, 0.393645,
    0.548489, -0.548531,
    1.116251, -1.116251,
};

float Cg_init[2] = {
    -0.558814, -0.558902
};

float xstd_init[12] = {
    0.000911, 0.000075, 0.008547, 0.065839, 0.000675, 0.000104, 0.014361, 0.049858, 0.003331, 0.001022, 0.118282, 0.212112
};

float xmean_init[12] = {
    0.005579, -0.007756, 0.002319, 0.093218, 0.002360, -0.007856, 0.004560, 0.045391, 0.008929, -0.006595, 0.134880, 0.471188
};


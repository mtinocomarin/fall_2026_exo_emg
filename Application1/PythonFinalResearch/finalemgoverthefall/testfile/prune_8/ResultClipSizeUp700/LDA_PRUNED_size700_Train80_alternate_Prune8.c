// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.38%
// test_accuracy: 73.56%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt']}
// generated: 2026-02-13 14:47:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.150889, 0.150882,
    -0.194463, 0.194592,
    0.009415, -0.009431,
    0.035756, -0.035822,
    1.634274, -1.634563,
    -1.242963, 1.243344,
    -0.072292, 0.072216,
    0.138485, -0.138560,
    -0.725495, 0.725545,
    -0.351421, 0.351394,
    0.420539, -0.420577,
    1.154475, -1.154482,
};

float Cg_init[2] = {
    -0.523826, -0.523929
};

float xstd_init[12] = {
    0.000892, 0.000075, 0.008333, 0.065037, 0.000661, 0.000102, 0.014334, 0.050232, 0.003496, 0.001059, 0.120391, 0.214387
};

float xmean_init[12] = {
    0.005548, -0.007756, 0.002179, 0.093013, 0.002362, -0.007856, 0.004530, 0.045192, 0.009191, -0.006534, 0.140642, 0.481346
};


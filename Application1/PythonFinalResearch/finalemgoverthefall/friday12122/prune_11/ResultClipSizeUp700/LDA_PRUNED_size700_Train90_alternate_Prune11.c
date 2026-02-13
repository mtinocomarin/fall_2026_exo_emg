// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.85%
// test_accuracy: 78.85%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:08:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.589693, 0.589662,
    -0.252015, 0.252028,
    0.416059, -0.416077,
    0.693144, -0.693115,
    0.909640, -0.909677,
    -0.932341, 0.932390,
    -0.196073, 0.196075,
    -0.083101, 0.083090,
    0.813152, -0.813296,
    -0.131279, 0.131694,
    -0.356329, 0.356184,
    0.024171, -0.024329,
};

float Cg_init[2] = {
    -0.526380, -0.526393
};

float xstd_init[12] = {
    0.003347, 0.001188, 0.103702, 0.166442, 0.001287, 0.000399, 0.020330, 0.069810, 0.000516, 0.000077, 0.015688, 0.061449
};

float xmean_init[12] = {
    0.009730, -0.006279, 0.175836, 0.592308, 0.003089, -0.007751, 0.005415, 0.047877, 0.003091, -0.007815, 0.004103, 0.061477
};


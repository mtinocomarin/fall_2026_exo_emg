// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.74%
// test_accuracy: 77.21%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:05:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.601893, 0.601866,
    -0.221222, 0.221236,
    0.389047, -0.389070,
    0.533631, -0.533610,
    0.807748, -0.807764,
    -0.941266, 0.941313,
    0.011619, -0.011621,
    -0.089428, 0.089399,
    0.619644, -0.619760,
    0.071188, -0.070864,
    -0.349420, 0.349318,
    -0.016900, 0.016755,
};

float Cg_init[2] = {
    -0.391417, -0.391428
};

float xstd_init[12] = {
    0.003304, 0.001299, 0.101276, 0.163553, 0.001274, 0.000388, 0.022251, 0.070690, 0.000499, 0.000070, 0.013546, 0.060184
};

float xmean_init[12] = {
    0.009502, -0.006337, 0.170494, 0.581217, 0.003062, -0.007756, 0.005517, 0.047505, 0.003076, -0.007816, 0.003272, 0.063286
};


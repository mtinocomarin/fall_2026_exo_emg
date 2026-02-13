// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.29%
// test_accuracy: 73.56%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:50:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.578123, 0.578073,
    -0.360419, 0.360475,
    0.395272, -0.395288,
    0.696630, -0.696619,
    0.976441, -0.976310,
    -0.838333, 0.838114,
    -0.307107, 0.307185,
    -0.075475, 0.075487,
    0.713793, -0.713871,
    -0.134450, 0.134613,
    -0.350314, 0.350259,
    0.048807, -0.048868,
};

float Cg_init[2] = {
    -0.497043, -0.497040
};

float xstd_init[12] = {
    0.003666, 0.001312, 0.107059, 0.170191, 0.001279, 0.000391, 0.020381, 0.070264, 0.000510, 0.000078, 0.016159, 0.059858
};

float xmean_init[12] = {
    0.009850, -0.006211, 0.181717, 0.597458, 0.003064, -0.007761, 0.005262, 0.047826, 0.003091, -0.007814, 0.004192, 0.061271
};


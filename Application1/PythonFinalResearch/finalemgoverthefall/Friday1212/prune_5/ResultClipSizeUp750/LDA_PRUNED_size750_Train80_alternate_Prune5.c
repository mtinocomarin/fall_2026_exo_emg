// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 75.45%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:48:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.589434, 0.589441,
    -0.401517, 0.401530,
    0.506438, -0.506472,
    0.640880, -0.640869,
    0.741594, -0.741497,
    -0.632093, 0.631987,
    -0.178426, 0.178448,
    -0.099722, 0.099714,
    -0.501625, 0.501575,
    0.479947, -0.479901,
    -0.322357, 0.322349,
    0.021396, -0.021434,
};

float Cg_init[2] = {
    -0.304508, -0.304509
};

float xstd_init[12] = {
    0.003687, 0.001366, 0.106707, 0.173368, 0.001346, 0.000382, 0.020593, 0.068688, 0.001613, 0.000087, 0.015088, 0.067656
};

float xmean_init[12] = {
    0.009756, -0.006240, 0.180318, 0.589206, 0.003093, -0.007763, 0.005291, 0.046931, 0.003234, -0.007810, 0.003668, 0.066350
};


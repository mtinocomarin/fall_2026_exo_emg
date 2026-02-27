// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.252005, 1.252005,
    0.200389, -0.200294,
    0.000000, 0.000000,
    -0.402937, -0.402937,
    -1.194887, -1.194887,
    -1.184365, -1.184365,
    -1.569067, -1.569067,
    -0.537988, -0.537988,
    1.744490, 1.744490,
    1.486693, 1.486693,
    1.387084, 1.387084,
    1.163808, 1.163808,
};

float Cg_init[2] = {
    -3.475102, 2.600450
};

float xstd_init[12] = {
    0.000383, 0.000016, 1.000000, 0.016801, 0.001903, 0.000654, 0.076026, 0.119508, 0.001810, 0.000583, 0.061001, 0.178813
};

float xmean_init[12] = {
    0.002552, -0.007911, 0.000000, 0.008750, 0.008322, -0.006643, 0.145833, 0.476250, 0.006349, -0.007013, 0.084167, 0.355000
};


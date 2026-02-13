// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.52%
// test_accuracy: 72.22%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:06:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.079050, 0.079039,
    -0.451367, 0.451266,
    0.060220, -0.060192,
    -0.025821, 0.025855,
    2.407637, -2.407291,
    -2.037584, 2.037135,
    -0.119653, 0.119737,
    0.285254, -0.285173,
    -0.739421, 0.739359,
    -0.576904, 0.576998,
    0.186042, -0.186112,
    1.734681, -1.734626,
};

float Cg_init[2] = {
    -0.826400, -0.826269
};

float xstd_init[12] = {
    0.000934, 0.000088, 0.008598, 0.070190, 0.000722, 0.000114, 0.016059, 0.056369, 0.003623, 0.001032, 0.115757, 0.215386
};

float xmean_init[12] = {
    0.005709, -0.007748, 0.002305, 0.098519, 0.002428, -0.007847, 0.005514, 0.051235, 0.009056, -0.006607, 0.130947, 0.469877
};


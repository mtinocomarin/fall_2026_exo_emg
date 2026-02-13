// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.97%
// test_accuracy: 73.30%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 12:38:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.713531, 0.713565,
    0.116533, -0.116578,
    0.373443, -0.373491,
    0.678977, -0.678953,
    -0.360826, 0.360692,
    0.186141, -0.185958,
    -0.109010, 0.109021,
    -0.104393, 0.104343,
    0.196800, -0.196645,
    -0.064605, 0.064288,
    -0.443838, 0.443922,
    -0.051258, 0.051367,
};

float Cg_init[2] = {
    -0.277598, -0.277598
};

float xstd_init[12] = {
    0.004420, 0.002024, 0.148264, 0.204771, 0.001140, 0.000204, 0.028984, 0.086478, 0.000678, 0.000169, 0.029189, 0.107311
};

float xmean_init[12] = {
    0.010462, -0.005663, 0.244490, 0.684108, 0.003421, -0.007756, 0.009877, 0.079057, 0.003533, -0.007731, 0.013513, 0.119866
};


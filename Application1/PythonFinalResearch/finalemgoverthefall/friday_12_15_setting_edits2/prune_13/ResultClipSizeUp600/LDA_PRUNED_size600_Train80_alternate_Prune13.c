// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.52%
// test_accuracy: 72.16%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_27.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 12:42:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.916179, 0.916159,
    0.301767, -0.301737,
    0.601065, -0.601089,
    0.919561, -0.919551,
    -0.649940, 0.649676,
    0.434775, -0.434482,
    -0.107917, 0.107926,
    -0.209937, 0.209903,
    0.389443, -0.389413,
    -0.228545, 0.228518,
    -0.657444, 0.657455,
    -0.045390, 0.045391,
};

float Cg_init[2] = {
    -0.508015, -0.508010
};

float xstd_init[12] = {
    0.004220, 0.001823, 0.148881, 0.206768, 0.001243, 0.000222, 0.032020, 0.087046, 0.000724, 0.000189, 0.031690, 0.113154
};

float xmean_init[12] = {
    0.010672, -0.005584, 0.258948, 0.700096, 0.003498, -0.007743, 0.010973, 0.084880, 0.003619, -0.007710, 0.014992, 0.133972
};


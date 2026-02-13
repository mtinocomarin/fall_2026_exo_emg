// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.65%
// test_accuracy: 85.42%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 12:41:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.123783, 1.123787,
    -0.240574, 0.240567,
    1.039518, -1.039511,
    1.561191, -1.561187,
    0.852843, -0.852768,
    -0.337178, 0.337086,
    0.100401, -0.100407,
    -1.629193, 1.629220,
    0.641229, -0.641266,
    -1.279792, 1.279860,
    -0.214668, 0.214653,
    0.006205, -0.006226,
};

float Cg_init[2] = {
    -1.006103, -1.006108
};

float xstd_init[12] = {
    0.004069, 0.001699, 0.140336, 0.183077, 0.001708, 0.000318, 0.041941, 0.107766, 0.000665, 0.000160, 0.023090, 0.100618
};

float xmean_init[12] = {
    0.010683, -0.005727, 0.246772, 0.707936, 0.003766, -0.007695, 0.014603, 0.092698, 0.003551, -0.007730, 0.010159, 0.120952
};


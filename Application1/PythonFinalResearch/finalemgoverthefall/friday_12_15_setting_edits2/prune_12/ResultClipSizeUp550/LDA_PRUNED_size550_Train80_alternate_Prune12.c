// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.50%
// test_accuracy: 72.50%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_1.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt']}
// generated: 2025-12-17 12:41:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.961368, 0.961363,
    0.148502, -0.148501,
    0.296225, -0.296235,
    1.222837, -1.222828,
    -0.461332, 0.461760,
    0.242330, -0.242798,
    -0.011237, 0.011216,
    -0.335073, 0.335127,
    0.301551, -0.301514,
    -0.188037, 0.187938,
    -0.559048, 0.559081,
    0.070454, -0.070442,
};

float Cg_init[2] = {
    -0.485974, -0.485978
};

float xstd_init[12] = {
    0.004190, 0.001807, 0.151205, 0.210027, 0.001311, 0.000225, 0.034648, 0.093373, 0.000629, 0.000152, 0.025762, 0.099158
};

float xmean_init[12] = {
    0.010428, -0.005691, 0.243200, 0.684800, 0.003542, -0.007738, 0.012467, 0.085600, 0.003518, -0.007735, 0.010800, 0.115500
};


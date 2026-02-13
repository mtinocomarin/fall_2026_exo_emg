// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 84.38%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 12:39:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.673287, 1.673321,
    0.781405, -0.781411,
    0.206147, -0.206171,
    1.681426, -1.681421,
    0.005277, -0.005469,
    -0.302755, 0.302940,
    0.210274, -0.210242,
    -0.639940, 0.639913,
    -0.305823, 0.305784,
    0.225906, -0.225860,
    -0.774588, 0.774577,
    0.082759, -0.082757,
};

float Cg_init[2] = {
    -0.778375, -0.778378
};

float xstd_init[12] = {
    0.004298, 0.001858, 0.147157, 0.190115, 0.001573, 0.000289, 0.039107, 0.103661, 0.000658, 0.000168, 0.031964, 0.106323
};

float xmean_init[12] = {
    0.011055, -0.005546, 0.249600, 0.704600, 0.003643, -0.007711, 0.013067, 0.089600, 0.003565, -0.007720, 0.013867, 0.128000
};


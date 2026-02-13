// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.78%
// test_accuracy: 80.21%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 12:38:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.196118, 1.196134,
    0.355635, -0.355628,
    0.081182, -0.081211,
    1.378579, -1.378561,
    -0.408161, 0.408009,
    -0.038075, 0.038241,
    0.066809, -0.066789,
    -0.171024, 0.170987,
    -0.143714, 0.143676,
    0.120529, -0.120472,
    -0.661617, 0.661609,
    0.150246, -0.150259,
};

float Cg_init[2] = {
    -0.529350, -0.529350
};

float xstd_init[12] = {
    0.004436, 0.001831, 0.145113, 0.201338, 0.001398, 0.000252, 0.035456, 0.096420, 0.000670, 0.000168, 0.030989, 0.104901
};

float xmean_init[12] = {
    0.010713, -0.005670, 0.241026, 0.684872, 0.003552, -0.007729, 0.012650, 0.087821, 0.003530, -0.007728, 0.013248, 0.117692
};


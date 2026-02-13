// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.30%
// test_accuracy: 79.17%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 12:38:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.955335, 0.955334,
    0.203375, -0.203346,
    0.318309, -0.318330,
    0.783501, -0.783500,
    -0.392948, 0.392969,
    0.163298, -0.163306,
    -0.069030, 0.069024,
    -0.088092, 0.088079,
    0.221752, -0.221773,
    0.045148, -0.045086,
    -0.509103, 0.509097,
    -0.178110, 0.178068,
};

float Cg_init[2] = {
    -0.326792, -0.326798
};

float xstd_init[12] = {
    0.004638, 0.002133, 0.147909, 0.201307, 0.001214, 0.000217, 0.030789, 0.091231, 0.000694, 0.000169, 0.029048, 0.106513
};

float xmean_init[12] = {
    0.010680, -0.005584, 0.244226, 0.683622, 0.003463, -0.007749, 0.010645, 0.080412, 0.003546, -0.007730, 0.013224, 0.120412
};


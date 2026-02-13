// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 71.35%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-17 12:38:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.652787, 0.652825,
    0.072407, -0.072440,
    0.345931, -0.345972,
    0.593156, -0.593133,
    -0.498519, 0.498319,
    0.215453, -0.215226,
    0.053195, -0.053171,
    -0.117073, 0.117018,
    0.267740, -0.267623,
    -0.170685, 0.170574,
    -0.465483, 0.465501,
    0.097057, -0.097059,
};

float Cg_init[2] = {
    -0.252264, -0.252259
};

float xstd_init[12] = {
    0.004443, 0.002036, 0.150684, 0.203122, 0.001122, 0.000198, 0.028903, 0.084233, 0.000667, 0.000165, 0.029837, 0.105691
};

float xmean_init[12] = {
    0.010455, -0.005643, 0.246585, 0.686481, 0.003400, -0.007758, 0.009424, 0.078519, 0.003534, -0.007731, 0.013169, 0.118519
};


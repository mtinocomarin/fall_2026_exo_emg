// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.03%
// test_accuracy: 68.23%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 13:15:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.596642, 0.596658,
    -0.095059, 0.095060,
    0.705444, -0.705433,
    0.357544, -0.357560,
    -0.447260, 0.447020,
    0.124425, -0.124166,
    0.002114, -0.002121,
    0.122827, -0.122849,
    0.326684, -0.326779,
    -0.479541, 0.479723,
    -0.228816, 0.228747,
    0.524786, -0.524810,
};

float Cg_init[2] = {
    -0.325981, -0.325988
};

float xstd_init[12] = {
    0.004560, 0.002154, 0.356789, 0.125543, 0.001100, 0.000200, 0.045778, 0.135189, 0.000672, 0.000167, 0.049545, 0.136294
};

float xmean_init[12] = {
    0.010602, -0.005576, 0.457985, 1.035625, 0.003420, -0.007757, 0.012384, 0.620209, 0.003553, -0.007728, 0.014005, 0.705833
};


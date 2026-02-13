// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 73.08%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:17:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.658603, 0.658583,
    0.246379, -0.246394,
    0.816292, -0.816264,
    0.507484, -0.507466,
    -0.788718, 0.788854,
    0.250874, -0.251016,
    0.027402, -0.027402,
    0.229966, -0.229949,
    0.377710, -0.377560,
    -0.609624, 0.609399,
    -0.351543, 0.351601,
    0.524983, -0.524966,
};

float Cg_init[2] = {
    -0.505782, -0.505756
};

float xstd_init[12] = {
    0.003982, 0.001653, 0.335195, 0.124130, 0.001193, 0.000215, 0.056434, 0.131558, 0.000683, 0.000179, 0.049403, 0.137369
};

float xmean_init[12] = {
    0.010040, -0.005880, 0.425255, 1.034461, 0.003468, -0.007746, 0.015769, 0.616538, 0.003517, -0.007730, 0.014615, 0.701692
};


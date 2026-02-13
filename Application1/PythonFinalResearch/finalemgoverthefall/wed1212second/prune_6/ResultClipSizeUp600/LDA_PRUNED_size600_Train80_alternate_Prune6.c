// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.31%
// test_accuracy: 74.43%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:01:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.015031, 0.014958,
    -0.206493, 0.206693,
    0.037688, -0.037716,
    -0.014457, 0.014356,
    1.631987, -1.632069,
    -1.332994, 1.333078,
    -0.136499, 0.136498,
    0.064552, -0.064565,
    -0.677548, 0.677548,
    -0.482443, 0.482463,
    0.403217, -0.403248,
    1.147920, -1.147927,
};

float Cg_init[2] = {
    -0.464352, -0.464386
};

float xstd_init[12] = {
    0.000875, 0.000076, 0.007781, 0.064725, 0.000734, 0.000123, 0.014542, 0.052453, 0.003575, 0.001069, 0.119354, 0.213281
};

float xmean_init[12] = {
    0.005520, -0.007758, 0.002051, 0.091818, 0.002394, -0.007850, 0.004755, 0.046923, 0.009262, -0.006536, 0.138602, 0.480699
};


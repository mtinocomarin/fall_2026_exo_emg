// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.92%
// test_accuracy: 63.54%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:42:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -5.548138, 5.548200,
    1.937353, -1.937457,
    -0.279351, 0.279371,
    0.799367, -0.799336,
    -1.311167, 1.311143,
    0.887008, -0.887035,
    -0.313005, 0.313041,
    0.697294, -0.697310,
    -0.615425, 0.615543,
    0.064457, -0.064634,
    0.917313, -0.917265,
    0.456336, -0.456297,
};

float Cg_init[2] = {
    -1.679504, -1.679526
};

float xstd_init[12] = {
    0.001239, 0.000220, 0.036279, 0.151052, 0.003828, 0.001123, 0.082101, 0.179003, 0.000851, 0.000133, 0.034277, 0.102922
};

float xmean_init[12] = {
    0.006160, -0.007581, 0.018889, 0.215417, 0.010513, -0.006341, 0.143333, 0.555000, 0.005119, -0.007567, 0.032778, 0.255833
};


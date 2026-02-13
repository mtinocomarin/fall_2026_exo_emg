// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.71%
// test_accuracy: 75.74%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.854973, 2.855056,
    1.573395, -1.573568,
    0.471127, -0.471085,
    -1.144207, 1.144282,
    -1.156370, 1.156392,
    0.052040, -0.052045,
    -0.492787, 0.492784,
    0.933333, -0.933349,
    0.815892, -0.815908,
    0.045371, -0.045345,
    -0.050479, 0.050475,
    -0.277190, 0.277180,
};

float Cg_init[2] = {
    -1.083774, -1.083793
};

float xstd_init[12] = {
    0.001318, 0.000232, 0.034945, 0.144718, 0.003997, 0.001173, 0.088529, 0.178250, 0.000871, 0.000169, 0.034227, 0.122087
};

float xmean_init[12] = {
    0.006135, -0.007589, 0.017569, 0.218118, 0.009894, -0.006445, 0.139608, 0.542117, 0.005201, -0.007532, 0.029961, 0.264471
};


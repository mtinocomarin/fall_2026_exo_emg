// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.55%
// test_accuracy: 72.73%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-17 18:10:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.013892, 1.013999,
    1.178060, -1.178340,
    -0.257112, 0.257235,
    0.104738, -0.104659,
    0.867576, -0.867518,
    0.074605, -0.074683,
    -1.751974, 1.752034,
    0.187545, -0.187570,
    -0.295043, 0.295058,
    -0.834466, 0.834461,
    0.405837, -0.405841,
    1.596191, -1.596195,
};

float Cg_init[2] = {
    -0.828284, -0.828323
};

float xstd_init[12] = {
    0.001114, 0.000123, 0.027275, 0.091788, 0.002742, 0.000912, 0.051859, 0.135707, 0.006263, 0.002648, 0.172261, 0.273144
};

float xmean_init[12] = {
    0.005519, -0.007716, 0.008970, 0.130727, 0.004283, -0.007519, 0.020242, 0.126182, 0.012282, -0.005447, 0.190424, 0.559273
};


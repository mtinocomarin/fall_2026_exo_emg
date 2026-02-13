// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 73.33%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 14:40:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.573791, 1.573826,
    0.675410, -0.675528,
    0.256382, -0.256354,
    -0.205650, 0.205703,
    -0.032656, 0.032641,
    -0.647555, 0.647576,
    -0.155916, 0.155906,
    0.466180, -0.466185,
    0.045736, -0.045695,
    0.236000, -0.236038,
    0.132112, -0.132105,
    -0.179558, 0.179560,
};

float Cg_init[2] = {
    -0.475778, -0.475784
};

float xstd_init[12] = {
    0.001010, 0.000177, 0.026550, 0.122370, 0.003697, 0.001094, 0.086071, 0.164696, 0.001013, 0.000159, 0.032562, 0.111217
};

float xmean_init[12] = {
    0.005918, -0.007622, 0.012815, 0.199334, 0.010396, -0.006363, 0.154371, 0.562889, 0.004975, -0.007568, 0.027852, 0.246889
};


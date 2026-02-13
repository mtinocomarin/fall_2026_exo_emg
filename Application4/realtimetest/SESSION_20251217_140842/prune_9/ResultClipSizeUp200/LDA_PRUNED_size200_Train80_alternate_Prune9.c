// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.24%
// test_accuracy: 66.67%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:41:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.064099, 2.064070,
    -0.402935, 0.403145,
    -0.704404, 0.704384,
    -0.246463, 0.246376,
    -0.052110, 0.052012,
    -1.078508, 1.078548,
    0.271472, -0.271447,
    -0.599542, 0.599584,
    -0.623743, 0.623733,
    0.624900, -0.625034,
    0.246913, -0.246915,
    1.198215, -1.198128,
};

float Cg_init[2] = {
    -1.311862, -1.311882
};

float xstd_init[12] = {
    0.000791, 0.000113, 0.010059, 0.094720, 0.003341, 0.001235, 0.107001, 0.155787, 0.001335, 0.000174, 0.027774, 0.104620
};

float xmean_init[12] = {
    0.005716, -0.007664, 0.004444, 0.175238, 0.010776, -0.006120, 0.170794, 0.615238, 0.004979, -0.007585, 0.021587, 0.232381
};


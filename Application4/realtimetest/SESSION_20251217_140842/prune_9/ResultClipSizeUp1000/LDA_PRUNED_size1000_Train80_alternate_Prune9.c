// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.60%
// test_accuracy: 72.37%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_19.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 14:42:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.677863, 2.677895,
    1.268074, -1.268148,
    0.508522, -0.508492,
    -0.701885, 0.701905,
    -0.072443, 0.072483,
    -0.975904, 0.975848,
    -0.030957, 0.030963,
    0.881402, -0.881404,
    0.653733, -0.653715,
    -0.206001, 0.205982,
    0.023405, -0.023402,
    0.158713, -0.158709,
};

float Cg_init[2] = {
    -0.872161, -0.872160
};

float xstd_init[12] = {
    0.001169, 0.000210, 0.034945, 0.137275, 0.003698, 0.001094, 0.093130, 0.179418, 0.000876, 0.000169, 0.034725, 0.121111
};

float xmean_init[12] = {
    0.006034, -0.007602, 0.017143, 0.212481, 0.009797, -0.006475, 0.143258, 0.534586, 0.005168, -0.007530, 0.032481, 0.271278
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.57%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_19.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:10:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.485087, 0.485058,
    0.040236, -0.040176,
    0.620216, -0.620233,
    0.350891, -0.350906,
    1.415653, -1.415673,
    -1.657954, 1.657965,
    -1.005646, 1.005662,
    0.375453, -0.375467,
    -0.396250, 0.396262,
    -0.617136, 0.617135,
    0.443934, -0.443958,
    1.615113, -1.615094,
};

float Cg_init[2] = {
    -0.771815, -0.771812
};

float xstd_init[12] = {
    0.001254, 0.000217, 0.027757, 0.097381, 0.002949, 0.000924, 0.053595, 0.139754, 0.005756, 0.002326, 0.166567, 0.278358
};

float xmean_init[12] = {
    0.005635, -0.007691, 0.009524, 0.135000, 0.004385, -0.007472, 0.020286, 0.133143, 0.011715, -0.005669, 0.181238, 0.548571
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.86%
// test_accuracy: 68.57%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_13.txt', 'act1\\trial_18.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:10:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.766557, 0.766789,
    1.679462, -1.680185,
    -0.493950, 0.494205,
    -0.462940, 0.463117,
    0.990877, -0.990829,
    -0.567295, 0.567259,
    -1.710195, 1.710364,
    0.369679, -0.369689,
    0.580567, -0.580575,
    -1.769690, 1.769719,
    1.102599, -1.102559,
    1.234777, -1.234833,
};

float Cg_init[2] = {
    -0.890811, -0.890894
};

float xstd_init[12] = {
    0.001077, 0.000147, 0.031737, 0.098903, 0.002989, 0.000873, 0.058565, 0.151158, 0.006356, 0.002518, 0.175482, 0.266934
};

float xmean_init[12] = {
    0.005392, -0.007710, 0.012571, 0.136286, 0.004559, -0.007483, 0.024952, 0.139429, 0.012433, -0.005421, 0.195619, 0.547429
};


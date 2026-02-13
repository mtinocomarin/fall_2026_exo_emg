// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.53%
// test_accuracy: 69.41%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:08:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.158520, 0.158448,
    0.189729, -0.189590,
    -0.023641, 0.023614,
    0.135042, -0.135087,
    0.329683, -0.329723,
    -0.528421, 0.528435,
    -0.771722, 0.771741,
    0.219949, -0.219969,
    0.389179, -0.389137,
    -0.694177, 0.694172,
    0.342039, -0.342083,
    0.677716, -0.677699,
};

float Cg_init[2] = {
    -0.377503, -0.377497
};

float xstd_init[12] = {
    0.001089, 0.000171, 0.022310, 0.091408, 0.003086, 0.000955, 0.058582, 0.147543, 0.005526, 0.002159, 0.149507, 0.238401
};

float xmean_init[12] = {
    0.005636, -0.007697, 0.008157, 0.136706, 0.004509, -0.007434, 0.025203, 0.137334, 0.011822, -0.005781, 0.175059, 0.545255
};


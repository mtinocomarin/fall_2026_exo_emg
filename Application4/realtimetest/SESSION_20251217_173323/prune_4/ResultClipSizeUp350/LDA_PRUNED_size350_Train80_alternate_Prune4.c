// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 68.33%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:08:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.709850, 0.709763,
    0.887837, -0.887569,
    0.016385, -0.016440,
    -0.244422, 0.244334,
    0.562996, -0.562976,
    -0.194715, 0.194590,
    -1.338205, 1.338223,
    0.195720, -0.195712,
    0.407291, -0.407270,
    -1.091818, 1.091767,
    0.477632, -0.477607,
    0.992535, -0.992542,
};

float Cg_init[2] = {
    -0.553986, -0.553960
};

float xstd_init[12] = {
    0.001081, 0.000139, 0.024970, 0.097568, 0.002832, 0.000766, 0.056665, 0.141619, 0.005539, 0.002151, 0.157367, 0.241528
};

float xmean_init[12] = {
    0.005544, -0.007705, 0.008444, 0.135778, 0.004253, -0.007534, 0.022815, 0.123333, 0.011564, -0.005830, 0.168741, 0.535111
};


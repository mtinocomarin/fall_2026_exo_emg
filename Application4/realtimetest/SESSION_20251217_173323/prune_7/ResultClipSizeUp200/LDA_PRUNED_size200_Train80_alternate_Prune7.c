// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.61%
// test_accuracy: 70.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_22.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 18:09:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.521814, 1.521819,
    1.765559, -1.765587,
    0.029802, -0.029801,
    0.186610, -0.186599,
    3.857492, -3.857500,
    -0.742860, 0.742871,
    -2.171251, 2.171257,
    -3.118421, 3.118425,
    1.325709, -1.325698,
    -3.764892, 3.764886,
    1.607361, -1.607355,
    2.646667, -2.646680,
};

float Cg_init[2] = {
    -1.414677, -1.414682
};

float xstd_init[12] = {
    0.001056, 0.000134, 0.023777, 0.092401, 0.002376, 0.000719, 0.046391, 0.139077, 0.004323, 0.001641, 0.175008, 0.256198
};

float xmean_init[12] = {
    0.005565, -0.007716, 0.007407, 0.131667, 0.003922, -0.007589, 0.018889, 0.116111, 0.011086, -0.006122, 0.177778, 0.527222
};


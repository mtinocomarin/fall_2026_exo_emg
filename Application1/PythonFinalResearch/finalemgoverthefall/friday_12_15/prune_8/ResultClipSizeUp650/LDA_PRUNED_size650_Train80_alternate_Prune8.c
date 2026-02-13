// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.51%
// test_accuracy: 69.79%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 12:43:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.722177, 0.722203,
    0.161772, -0.161804,
    0.395654, -0.395689,
    0.720905, -0.720884,
    -0.493205, 0.493221,
    0.205801, -0.205806,
    0.038298, -0.038287,
    -0.195030, 0.195013,
    0.240236, -0.240110,
    -0.083296, 0.083079,
    -0.600671, 0.600731,
    0.042457, -0.042411,
};

float Cg_init[2] = {
    -0.329175, -0.329175
};

float xstd_init[12] = {
    0.004129, 0.001778, 0.148548, 0.204090, 0.001170, 0.000207, 0.030016, 0.086612, 0.000669, 0.000169, 0.029959, 0.105621
};

float xmean_init[12] = {
    0.010250, -0.005753, 0.242269, 0.684097, 0.003438, -0.007752, 0.009907, 0.081736, 0.003523, -0.007732, 0.012778, 0.117709
};


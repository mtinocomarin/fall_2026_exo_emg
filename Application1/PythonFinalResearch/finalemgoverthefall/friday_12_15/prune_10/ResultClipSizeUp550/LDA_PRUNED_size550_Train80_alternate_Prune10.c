// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 73.12%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 12:44:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.978654, 0.978646,
    0.216785, -0.216780,
    0.358907, -0.358929,
    1.140200, -1.140175,
    -0.392306, 0.392594,
    0.200799, -0.201107,
    -0.067196, 0.067180,
    -0.286805, 0.286834,
    0.266538, -0.266503,
    -0.111722, 0.111657,
    -0.643577, 0.643604,
    0.000596, -0.000602,
};

float Cg_init[2] = {
    -0.474150, -0.474150
};

float xstd_init[12] = {
    0.004238, 0.001827, 0.153420, 0.207936, 0.001260, 0.000216, 0.033233, 0.091053, 0.000697, 0.000179, 0.031793, 0.107671
};

float xmean_init[12] = {
    0.010533, -0.005639, 0.248728, 0.690909, 0.003504, -0.007744, 0.011455, 0.084364, 0.003562, -0.007723, 0.013333, 0.122818
};


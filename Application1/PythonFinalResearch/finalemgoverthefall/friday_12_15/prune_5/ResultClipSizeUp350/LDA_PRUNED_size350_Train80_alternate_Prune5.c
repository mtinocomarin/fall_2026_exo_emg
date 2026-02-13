// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.96%
// test_accuracy: 80.21%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 12:41:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.154620, 1.154623,
    0.252199, -0.252190,
    0.116916, -0.116949,
    1.245862, -1.245844,
    -0.253322, 0.253165,
    -0.131471, 0.131657,
    0.004215, -0.004193,
    -0.088612, 0.088563,
    -0.048302, 0.048320,
    0.051710, -0.051776,
    -0.606185, 0.606210,
    0.135452, -0.135419,
};

float Cg_init[2] = {
    -0.471173, -0.471176
};

float xstd_init[12] = {
    0.004566, 0.002006, 0.144795, 0.199974, 0.001377, 0.000248, 0.034873, 0.095459, 0.000663, 0.000166, 0.030586, 0.104158
};

float xmean_init[12] = {
    0.010823, -0.005591, 0.244692, 0.687407, 0.003534, -0.007732, 0.012181, 0.086049, 0.003535, -0.007730, 0.012922, 0.117901
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 62.00%
// test_accuracy: 51.67%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.463683, 0.463683,
    0.109807, -0.109795,
    0.000000, 0.000000,
    -0.401169, -0.401169,
    2.163888, 2.163888,
    2.407062, 2.407062,
    1.518556, 1.518556,
    1.554461, 1.554461,
    0.679277, 0.679277,
    0.297680, 0.297680,
    -0.061056, -0.061056,
    1.369977, 1.369977,
};

float Cg_init[2] = {
    -0.552581, 0.367516
};

float xstd_init[12] = {
    0.000283, 0.000017, 1.000000, 0.016546, 0.001915, 0.000612, 0.068158, 0.120617, 0.001841, 0.000532, 0.070819, 0.167396
};

float xmean_init[12] = {
    0.002596, -0.007911, 0.000000, 0.006933, 0.008185, -0.006699, 0.138489, 0.446667, 0.006429, -0.007028, 0.099733, 0.366934
};


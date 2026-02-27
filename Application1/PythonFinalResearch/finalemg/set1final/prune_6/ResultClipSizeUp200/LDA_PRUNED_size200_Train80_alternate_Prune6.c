// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.67%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.916215, 0.916215,
    -0.420464, 0.420434,
    0.000000, 0.000000,
    -0.381417, -0.381417,
    2.571995, 2.571995,
    3.411812, 3.411812,
    1.621057, 1.621057,
    1.298759, 1.298759,
    -0.100274, -0.100274,
    -0.244914, -0.244914,
    -0.406065, -0.406065,
    0.482887, 0.482887,
};

float Cg_init[2] = {
    0.604040, -1.477987
};

float xstd_init[12] = {
    0.000186, 0.000014, 1.000000, 0.011547, 0.002791, 0.000918, 0.071426, 0.175982, 0.002224, 0.000565, 0.074851, 0.204050
};

float xmean_init[12] = {
    0.002728, -0.007918, 0.000000, 0.003333, 0.008493, -0.006464, 0.131111, 0.536667, 0.006096, -0.007142, 0.088889, 0.310000
};


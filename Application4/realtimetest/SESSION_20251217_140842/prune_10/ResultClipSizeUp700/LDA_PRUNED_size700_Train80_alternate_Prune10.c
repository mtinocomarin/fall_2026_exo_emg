// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.79%
// test_accuracy: 69.23%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_20.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 14:42:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.466356, 3.466444,
    1.057291, -1.057446,
    0.503741, -0.503703,
    -0.132045, 0.132105,
    -1.230536, 1.230522,
    0.148671, -0.148657,
    -0.085572, 0.085575,
    0.553212, -0.553224,
    0.559502, -0.559501,
    0.080530, -0.080537,
    0.142898, -0.142897,
    -0.381051, 0.381052,
};

float Cg_init[2] = {
    -1.156533, -1.156555
};

float xstd_init[12] = {
    0.001274, 0.000217, 0.033440, 0.137042, 0.004020, 0.001159, 0.083596, 0.165969, 0.000899, 0.000171, 0.032092, 0.117542
};

float xmean_init[12] = {
    0.006076, -0.007606, 0.015726, 0.197436, 0.010272, -0.006374, 0.141538, 0.557692, 0.005093, -0.007552, 0.028205, 0.254872
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.58%
// test_accuracy: 73.61%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-12 12:47:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.375714, 1.375734,
    0.530110, -0.530097,
    0.577932, -0.577958,
    1.425438, -1.425441,
    -0.742363, 0.742325,
    0.316725, -0.316680,
    -0.011700, 0.011699,
    -0.270371, 0.270358,
    0.460585, -0.460646,
    -0.497833, 0.497962,
    -0.309969, 0.309942,
    0.106388, -0.106437,
};

float Cg_init[2] = {
    -0.705664, -0.705678
};

float xstd_init[12] = {
    0.004398, 0.001928, 0.155510, 0.211648, 0.001408, 0.000254, 0.036596, 0.101551, 0.000666, 0.000166, 0.025375, 0.100367
};

float xmean_init[12] = {
    0.010548, -0.005654, 0.241811, 0.680124, 0.003635, -0.007720, 0.014568, 0.091358, 0.003514, -0.007735, 0.009547, 0.116543
};


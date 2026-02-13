// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.79%
// test_accuracy: 73.57%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:09:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.220546, 0.220490,
    0.071655, -0.071531,
    0.368010, -0.368032,
    0.340996, -0.341027,
    0.906790, -0.906783,
    -1.083508, 1.083458,
    -0.826276, 0.826314,
    0.125644, -0.125670,
    -0.203675, 0.203690,
    -0.585556, 0.585570,
    0.284515, -0.284553,
    1.244784, -1.244763,
};

float Cg_init[2] = {
    -0.504078, -0.504068
};

float xstd_init[12] = {
    0.001176, 0.000195, 0.025205, 0.091654, 0.002876, 0.000870, 0.054353, 0.139167, 0.005604, 0.002229, 0.154713, 0.256298
};

float xmean_init[12] = {
    0.005621, -0.007698, 0.008352, 0.131319, 0.004356, -0.007485, 0.021831, 0.131868, 0.011730, -0.005752, 0.174140, 0.542857
};


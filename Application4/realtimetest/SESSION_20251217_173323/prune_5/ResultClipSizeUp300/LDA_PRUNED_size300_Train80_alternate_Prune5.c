// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.43%
// test_accuracy: 66.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 18:08:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.368243, 0.368329,
    0.564665, -0.564931,
    -0.304547, 0.304632,
    -0.194746, 0.194808,
    1.790860, -1.790794,
    -0.372865, 0.372914,
    -0.868611, 0.868635,
    -1.432460, 1.432394,
    1.154966, -1.154953,
    -1.667085, 1.667061,
    0.694508, -0.694506,
    0.772980, -0.772976,
};

float Cg_init[2] = {
    -0.577489, -0.577502
};

float xstd_init[12] = {
    0.001103, 0.000136, 0.027316, 0.089901, 0.002621, 0.000676, 0.061101, 0.148960, 0.004873, 0.001724, 0.134767, 0.228216
};

float xmean_init[12] = {
    0.005564, -0.007713, 0.009333, 0.131143, 0.004191, -0.007569, 0.025524, 0.125143, 0.011643, -0.005993, 0.169524, 0.534857
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.40%
// test_accuracy: 67.78%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt']}
// generated: 2025-12-17 18:09:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.871647, 0.871729,
    1.337751, -1.337989,
    -0.444564, 0.444667,
    -0.035846, 0.035915,
    0.389400, -0.389341,
    0.300842, -0.300898,
    -1.667767, 1.667813,
    0.276402, -0.276427,
    -0.270783, 0.270799,
    -0.826487, 0.826479,
    0.397433, -0.397431,
    1.521345, -1.521358,
};

float Cg_init[2] = {
    -0.738927, -0.738962
};

float xstd_init[12] = {
    0.001096, 0.000125, 0.027356, 0.091455, 0.002855, 0.000921, 0.057914, 0.149004, 0.006457, 0.002703, 0.170746, 0.264899
};

float xmean_init[12] = {
    0.005502, -0.007713, 0.008620, 0.134545, 0.004350, -0.007507, 0.024108, 0.133131, 0.012737, -0.005328, 0.195017, 0.563030
};


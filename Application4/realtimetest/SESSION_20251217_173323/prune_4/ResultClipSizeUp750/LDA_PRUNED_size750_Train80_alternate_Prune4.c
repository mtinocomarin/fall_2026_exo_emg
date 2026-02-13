// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.14%
// test_accuracy: 73.57%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 18:08:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.176481, 0.176455,
    0.141713, -0.141642,
    0.146924, -0.146938,
    0.132745, -0.132769,
    0.749256, -0.749226,
    -0.849740, 0.849688,
    -0.761377, 0.761402,
    0.087468, -0.087488,
    -0.007490, 0.007493,
    -0.546812, 0.546829,
    0.306161, -0.306197,
    0.919783, -0.919758,
};

float Cg_init[2] = {
    -0.404411, -0.404403
};

float xstd_init[12] = {
    0.001165, 0.000189, 0.024603, 0.094501, 0.003172, 0.000946, 0.060833, 0.146892, 0.005506, 0.002152, 0.146823, 0.243710
};

float xmean_init[12] = {
    0.005623, -0.007697, 0.008762, 0.133143, 0.004538, -0.007432, 0.025714, 0.135048, 0.011695, -0.005800, 0.170985, 0.546476
};


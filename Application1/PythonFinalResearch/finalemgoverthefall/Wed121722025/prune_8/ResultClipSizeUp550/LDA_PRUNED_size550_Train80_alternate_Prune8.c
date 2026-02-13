// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.83%
// test_accuracy: 54.37%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:45:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.599374, 0.599360,
    0.294039, -0.293975,
    0.030739, -0.030746,
    -0.188699, 0.188654,
    -0.621726, 0.621748,
    -0.223686, 0.223664,
    0.306193, -0.306198,
    0.266325, -0.266308,
    -0.579787, 0.579861,
    0.264335, -0.264457,
    -0.006719, 0.006755,
    0.203568, -0.203544,
};

float Cg_init[2] = {
    -0.245981, -0.245991
};

float xstd_init[12] = {
    0.001039, 0.000080, 0.012305, 0.081565, 0.003040, 0.000816, 0.087597, 0.178220, 0.000836, 0.000108, 0.019207, 0.070388
};

float xmean_init[12] = {
    0.006463, -0.007687, 0.004556, 0.144584, 0.008606, -0.006865, 0.101889, 0.438000, 0.004398, -0.007713, 0.010000, 0.130917
};


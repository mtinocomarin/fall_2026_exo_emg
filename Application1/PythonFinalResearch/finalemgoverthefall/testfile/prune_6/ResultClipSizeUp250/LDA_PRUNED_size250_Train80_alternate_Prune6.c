// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.94%
// test_accuracy: 70.31%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2026-02-13 14:45:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.297151, -0.297247,
    0.117687, -0.117446,
    -0.099595, 0.099551,
    -0.433376, 0.433246,
    1.493467, -1.493513,
    -1.388977, 1.389015,
    -0.225740, 0.225743,
    0.348801, -0.348798,
    -0.817682, 0.817699,
    -0.418506, 0.418471,
    0.395976, -0.395962,
    1.652904, -1.652905,
};

float Cg_init[2] = {
    -0.646730, -0.646727
};

float xstd_init[12] = {
    0.000882, 0.000064, 0.007758, 0.066546, 0.000777, 0.000136, 0.015362, 0.058259, 0.003205, 0.000988, 0.120424, 0.212694
};

float xmean_init[12] = {
    0.005551, -0.007762, 0.001282, 0.089231, 0.002377, -0.007849, 0.005641, 0.051731, 0.008960, -0.006609, 0.139615, 0.478654
};


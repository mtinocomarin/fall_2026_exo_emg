// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_2\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.44%
// test_accuracy: 55.21%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-17 13:42:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.299758, 0.299737,
    0.185260, -0.185184,
    0.093174, -0.093178,
    -0.090006, 0.089955,
    -0.527582, 0.527606,
    -0.101491, 0.101470,
    0.220492, -0.220491,
    0.185975, -0.185979,
    -0.311278, 0.311283,
    0.071262, -0.071251,
    -0.013891, 0.013890,
    0.173100, -0.173116,
};

float Cg_init[2] = {
    -0.121775, -0.121774
};

float xstd_init[12] = {
    0.001005, 0.000081, 0.011606, 0.080774, 0.002692, 0.000739, 0.077930, 0.168327, 0.000860, 0.000114, 0.018205, 0.070771
};

float xmean_init[12] = {
    0.006380, -0.007694, 0.004444, 0.139334, 0.008669, -0.006860, 0.102444, 0.450445, 0.004307, -0.007717, 0.008741, 0.127667
};


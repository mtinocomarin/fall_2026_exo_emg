// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.77%
// test_accuracy: 81.25%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:03:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.699659, 0.699650,
    -0.110141, 0.110150,
    0.378677, -0.378688,
    0.602373, -0.602362,
    0.824240, -0.824417,
    -1.253423, 1.253694,
    0.336660, -0.336738,
    -0.145317, 0.145303,
    0.793032, -0.793026,
    -0.340639, 0.340668,
    -0.335082, 0.335070,
    0.263691, -0.263701,
};

float Cg_init[2] = {
    -0.471186, -0.471204
};

float xstd_init[12] = {
    0.003778, 0.001365, 0.094420, 0.166049, 0.001677, 0.000515, 0.031871, 0.085681, 0.000557, 0.000090, 0.018426, 0.065905
};

float xmean_init[12] = {
    0.009787, -0.006274, 0.162917, 0.565937, 0.003244, -0.007700, 0.008125, 0.050000, 0.003102, -0.007810, 0.004167, 0.064844
};


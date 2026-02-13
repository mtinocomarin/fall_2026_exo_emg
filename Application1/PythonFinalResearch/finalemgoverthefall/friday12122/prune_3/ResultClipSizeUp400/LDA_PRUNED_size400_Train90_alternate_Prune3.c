// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.00%
// test_accuracy: 76.79%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt']}
// generated: 2025-12-12 16:03:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.750781, 0.750768,
    -0.134904, 0.134917,
    0.437355, -0.437369,
    0.653798, -0.653788,
    0.890163, -0.890015,
    -1.210206, 1.209999,
    0.045962, -0.045923,
    0.074209, -0.074187,
    -0.331896, 0.331867,
    0.502097, -0.502090,
    -0.436800, 0.436803,
    0.114629, -0.114638,
};

float Cg_init[2] = {
    -0.325083, -0.325071
};

float xstd_init[12] = {
    0.003660, 0.001382, 0.099575, 0.164917, 0.001640, 0.000500, 0.029157, 0.082104, 0.001114, 0.000089, 0.017542, 0.066077
};

float xmean_init[12] = {
    0.009749, -0.006268, 0.165715, 0.574372, 0.003233, -0.007711, 0.007734, 0.050649, 0.003198, -0.007808, 0.004560, 0.066840
};


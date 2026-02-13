// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.24%
// test_accuracy: 74.52%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2026-02-13 14:48:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.153773, 0.153764,
    -0.235055, 0.235163,
    -0.004427, 0.004413,
    0.094224, -0.094280,
    1.689633, -1.689885,
    -1.301818, 1.302156,
    -0.099751, 0.099684,
    0.191989, -0.192058,
    -0.748543, 0.748578,
    -0.401604, 0.401601,
    0.506634, -0.506675,
    1.367803, -1.367819,
};

float Cg_init[2] = {
    -0.626250, -0.626346
};

float xstd_init[12] = {
    0.000921, 0.000078, 0.008677, 0.066147, 0.000684, 0.000106, 0.014904, 0.051428, 0.003456, 0.001061, 0.121082, 0.218916
};

float xmean_init[12] = {
    0.005569, -0.007755, 0.002378, 0.093846, 0.002379, -0.007853, 0.004942, 0.046923, 0.009138, -0.006530, 0.140886, 0.480210
};


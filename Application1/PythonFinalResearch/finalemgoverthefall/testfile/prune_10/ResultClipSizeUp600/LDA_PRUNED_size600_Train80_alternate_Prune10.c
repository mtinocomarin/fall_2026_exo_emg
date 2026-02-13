// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.22%
// test_accuracy: 74.43%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2026-02-13 14:48:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.014983, 0.014838,
    -0.281616, 0.281949,
    0.016430, -0.016481,
    0.018481, -0.018637,
    1.836366, -1.836416,
    -1.603940, 1.603960,
    -0.174874, 0.174892,
    0.194253, -0.194243,
    -0.739176, 0.739133,
    -0.425669, 0.425727,
    0.445004, -0.445036,
    1.575693, -1.575713,
};

float Cg_init[2] = {
    -0.660915, -0.660946
};

float xstd_init[12] = {
    0.000930, 0.000080, 0.008187, 0.066597, 0.000786, 0.000133, 0.015657, 0.054632, 0.003459, 0.001052, 0.121853, 0.219832
};

float xmean_init[12] = {
    0.005552, -0.007756, 0.002259, 0.094215, 0.002428, -0.007845, 0.005620, 0.049091, 0.009140, -0.006541, 0.139835, 0.478595
};


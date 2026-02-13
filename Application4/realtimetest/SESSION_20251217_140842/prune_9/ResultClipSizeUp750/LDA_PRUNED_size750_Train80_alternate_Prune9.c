// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.35%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_20.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 14:42:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.410537, 2.410602,
    0.953015, -0.953124,
    0.254912, -0.254893,
    -0.339823, 0.339864,
    -0.542649, 0.542721,
    -0.372687, 0.372629,
    -0.538924, 0.538924,
    0.503002, -0.503008,
    0.581279, -0.581308,
    0.168023, -0.167967,
    -0.057100, 0.057093,
    -0.072144, 0.072122,
};

float Cg_init[2] = {
    -0.864533, -0.864544
};

float xstd_init[12] = {
    0.001210, 0.000195, 0.030194, 0.132638, 0.004030, 0.001184, 0.088405, 0.169647, 0.000841, 0.000157, 0.030742, 0.116253
};

float xmean_init[12] = {
    0.005990, -0.007606, 0.015238, 0.202653, 0.010543, -0.006314, 0.152653, 0.568775, 0.005153, -0.007546, 0.029252, 0.266939
};


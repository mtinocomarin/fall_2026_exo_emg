// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.37%
// test_accuracy: 53.12%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_30.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 13:48:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.952764, 0.952838,
    0.625954, -0.626054,
    -0.043560, 0.043569,
    -0.353132, 0.353177,
    -0.570739, 0.570672,
    -0.185979, 0.186023,
    0.286603, -0.286588,
    0.146367, -0.146331,
    -0.897200, 0.897322,
    0.423472, -0.423681,
    -0.013955, 0.013998,
    0.199234, -0.199183,
};

float Cg_init[2] = {
    -0.380439, -0.380483
};

float xstd_init[12] = {
    0.001107, 0.000079, 0.011770, 0.080520, 0.003095, 0.000835, 0.091498, 0.180288, 0.000880, 0.000113, 0.018180, 0.069356
};

float xmean_init[12] = {
    0.006474, -0.007687, 0.004140, 0.143684, 0.008572, -0.006855, 0.104702, 0.442632, 0.004382, -0.007717, 0.009263, 0.125263
};


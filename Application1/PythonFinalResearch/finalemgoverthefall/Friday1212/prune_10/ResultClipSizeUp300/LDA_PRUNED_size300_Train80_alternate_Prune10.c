// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.45%
// test_accuracy: 72.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:51:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.371963, 1.371963,
    -0.251520, 0.251545,
    1.248871, -1.248873,
    1.013378, -1.013386,
    1.478457, -1.478404,
    -2.104868, 2.104794,
    0.319393, -0.319385,
    -0.015285, 0.015299,
    -0.407593, 0.407607,
    0.682106, -0.682223,
    -0.737476, 0.737517,
    0.302171, -0.302116,
};

float Cg_init[2] = {
    -0.779657, -0.779660
};

float xstd_init[12] = {
    0.003824, 0.001388, 0.102628, 0.174171, 0.001838, 0.000571, 0.034743, 0.094886, 0.001027, 0.000108, 0.022696, 0.068122
};

float xmean_init[12] = {
    0.009972, -0.006181, 0.175394, 0.575455, 0.003393, -0.007680, 0.009212, 0.057818, 0.003283, -0.007799, 0.006061, 0.069273
};


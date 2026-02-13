// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 73.12%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 12:43:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.716570, 0.716572,
    0.140462, -0.140446,
    0.286822, -0.286842,
    0.921242, -0.921230,
    -0.569023, 0.569325,
    0.244595, -0.244921,
    0.072475, -0.072513,
    -0.264758, 0.264803,
    0.167435, -0.167452,
    -0.138854, 0.138910,
    -0.549418, 0.549411,
    0.100840, -0.100894,
};

float Cg_init[2] = {
    -0.389829, -0.389835
};

float xstd_init[12] = {
    0.004329, 0.001840, 0.150048, 0.206508, 0.001254, 0.000222, 0.032492, 0.092535, 0.000700, 0.000178, 0.031489, 0.107660
};

float xmean_init[12] = {
    0.010418, -0.005695, 0.242834, 0.679916, 0.003491, -0.007743, 0.011278, 0.085333, 0.003542, -0.007728, 0.012944, 0.119500
};


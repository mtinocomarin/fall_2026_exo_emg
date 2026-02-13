// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.26%
// test_accuracy: 78.57%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:51:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.924351, 0.924308,
    -0.424965, 0.424954,
    0.766199, -0.766211,
    0.899513, -0.899464,
    1.332254, -1.332236,
    -1.925996, 1.925971,
    0.146056, -0.146026,
    0.058453, -0.058469,
    0.901982, -0.902139,
    -0.006471, 0.006875,
    -0.642753, 0.642620,
    0.115918, -0.116059,
};

float Cg_init[2] = {
    -0.766216, -0.766221
};

float xstd_init[12] = {
    0.003796, 0.001399, 0.102614, 0.174521, 0.001785, 0.000560, 0.033359, 0.092559, 0.000537, 0.000094, 0.019978, 0.062833
};

float xmean_init[12] = {
    0.009861, -0.006216, 0.169264, 0.583896, 0.003334, -0.007685, 0.009437, 0.057532, 0.003124, -0.007807, 0.005195, 0.067013
};


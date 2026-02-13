// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.25%
// test_accuracy: 72.50%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:49:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.090696, 1.090718,
    -0.310446, 0.310468,
    1.137093, -1.137106,
    0.719607, -0.719620,
    1.250812, -1.250764,
    -1.906202, 1.906146,
    0.292785, -0.292785,
    0.117074, -0.117068,
    -0.356690, 0.356717,
    0.773369, -0.773525,
    -0.740196, 0.740253,
    0.242462, -0.242394,
};

float Cg_init[2] = {
    -0.621975, -0.621989
};

float xstd_init[12] = {
    0.003717, 0.001346, 0.101688, 0.174603, 0.001775, 0.000549, 0.033355, 0.091715, 0.000998, 0.000105, 0.021790, 0.069643
};

float xmean_init[12] = {
    0.009841, -0.006239, 0.170556, 0.569000, 0.003328, -0.007696, 0.008444, 0.055167, 0.003256, -0.007800, 0.005556, 0.070167
};


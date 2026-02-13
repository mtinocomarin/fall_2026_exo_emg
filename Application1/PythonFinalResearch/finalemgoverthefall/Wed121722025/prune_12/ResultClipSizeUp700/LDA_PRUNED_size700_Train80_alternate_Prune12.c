// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.42%
// test_accuracy: 56.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 13:47:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.873961, 0.874047,
    0.459651, -0.459843,
    -0.119975, 0.119998,
    -0.227250, 0.227348,
    -0.223315, 0.223343,
    -0.419927, 0.419925,
    0.101795, -0.101819,
    0.305029, -0.305019,
    -0.854878, 0.854901,
    0.396665, -0.396682,
    0.025653, -0.025658,
    0.099525, -0.099538,
};

float Cg_init[2] = {
    -0.317725, -0.317750
};

float xstd_init[12] = {
    0.001070, 0.000081, 0.010867, 0.080462, 0.003206, 0.000889, 0.095360, 0.189040, 0.000902, 0.000120, 0.018424, 0.074678
};

float xmean_init[12] = {
    0.006573, -0.007685, 0.003846, 0.145539, 0.008525, -0.006853, 0.106308, 0.435308, 0.004390, -0.007710, 0.009590, 0.129923
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 94.17%
// test_accuracy: 87.50%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 16:08:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.045237, 1.045244,
    -0.591134, 0.591123,
    1.222914, -1.222926,
    0.867434, -0.867425,
    1.864834, -1.864799,
    -2.779877, 2.779833,
    0.604573, -0.604562,
    -0.086460, 0.086463,
    1.208280, -1.208310,
    -0.378190, 0.378225,
    -0.680990, 0.680980,
    0.282346, -0.282348,
};

float Cg_init[2] = {
    -1.031932, -1.031937
};

float xstd_init[12] = {
    0.003967, 0.001464, 0.100946, 0.171509, 0.001824, 0.000572, 0.032725, 0.090823, 0.000577, 0.000104, 0.022116, 0.066822
};

float xmean_init[12] = {
    0.010067, -0.006155, 0.175222, 0.580667, 0.003389, -0.007667, 0.008444, 0.056500, 0.003164, -0.007804, 0.006111, 0.066833
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.27%
// test_accuracy: 72.16%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_27.txt', 'act2\\trial_28.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 12:41:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.891042, 0.891033,
    0.296117, -0.296090,
    0.565070, -0.565098,
    0.904320, -0.904313,
    -0.551757, 0.551643,
    0.359198, -0.359060,
    -0.135579, 0.135579,
    -0.175929, 0.175904,
    0.433748, -0.433721,
    -0.246467, 0.246442,
    -0.650787, 0.650796,
    -0.049898, 0.049893,
};

float Cg_init[2] = {
    -0.485376, -0.485377
};

float xstd_init[12] = {
    0.004177, 0.001797, 0.147668, 0.206176, 0.001226, 0.000218, 0.031321, 0.085871, 0.000714, 0.000186, 0.031056, 0.112571
};

float xmean_init[12] = {
    0.010554, -0.005635, 0.254001, 0.694364, 0.003491, -0.007745, 0.010667, 0.083727, 0.003601, -0.007715, 0.014303, 0.129728
};


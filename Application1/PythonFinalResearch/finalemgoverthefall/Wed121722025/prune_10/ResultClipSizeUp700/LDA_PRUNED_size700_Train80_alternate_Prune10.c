// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.52%
// test_accuracy: 53.85%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 13:46:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.625649, 0.625663,
    0.425458, -0.425473,
    -0.074492, 0.074497,
    -0.252837, 0.252836,
    -0.414081, 0.414071,
    -0.265154, 0.265194,
    0.080810, -0.080825,
    0.261281, -0.261254,
    -0.646725, 0.646891,
    0.344363, -0.344687,
    0.026770, -0.026702,
    0.093373, -0.093273,
};

float Cg_init[2] = {
    -0.233769, -0.233800
};

float xstd_init[12] = {
    0.001076, 0.000080, 0.011300, 0.080817, 0.003225, 0.000888, 0.094567, 0.188495, 0.000890, 0.000118, 0.019076, 0.075596
};

float xmean_init[12] = {
    0.006516, -0.007687, 0.004242, 0.145315, 0.008495, -0.006859, 0.104382, 0.431958, 0.004395, -0.007711, 0.010023, 0.130910
};


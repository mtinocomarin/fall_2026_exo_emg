// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.24%
// test_accuracy: 64.71%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 12:43:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.614885, 0.614899,
    0.269077, -0.269070,
    0.500878, -0.500912,
    0.497082, -0.497074,
    -0.352319, 0.352090,
    0.099529, -0.099216,
    -0.106379, 0.106361,
    0.029038, -0.029107,
    0.259952, -0.259927,
    -0.057153, 0.057128,
    -0.533865, 0.533875,
    -0.038052, 0.038052,
};

float Cg_init[2] = {
    -0.278445, -0.278449
};

float xstd_init[12] = {
    0.003797, 0.001625, 0.147334, 0.206018, 0.000991, 0.000177, 0.025305, 0.078524, 0.000643, 0.000159, 0.030164, 0.104390
};

float xmean_init[12] = {
    0.009942, -0.005901, 0.239279, 0.678965, 0.003331, -0.007771, 0.008000, 0.072471, 0.003499, -0.007738, 0.012894, 0.115530
};


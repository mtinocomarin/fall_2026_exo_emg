// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.03%
// test_accuracy: 51.79%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:43:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.392858, 0.393027,
    0.244265, -0.244619,
    -0.022977, 0.023010,
    -0.140505, 0.140682,
    -0.287735, 0.287758,
    -0.229480, 0.229460,
    -0.015596, 0.015578,
    0.314150, -0.314097,
    -0.465606, 0.465829,
    0.247096, -0.247488,
    -0.040262, 0.040343,
    0.111907, -0.111791,
};

float Cg_init[2] = {
    -0.131273, -0.131325
};

float xstd_init[12] = {
    0.001007, 0.000080, 0.013515, 0.081123, 0.003109, 0.000841, 0.089859, 0.182832, 0.000864, 0.000112, 0.019698, 0.073874
};

float xmean_init[12] = {
    0.006495, -0.007686, 0.005544, 0.145970, 0.008603, -0.006851, 0.104150, 0.440969, 0.004327, -0.007716, 0.010510, 0.127603
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.68%
// test_accuracy: 79.17%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:07:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.053414, 1.053399,
    -0.001664, 0.001723,
    0.545264, -0.545285,
    0.959862, -0.959868,
    0.935095, -0.935010,
    -1.166379, 1.166258,
    0.022338, -0.022319,
    -0.040462, 0.040488,
    -0.551718, 0.551823,
    0.636027, -0.636365,
    -0.496697, 0.496830,
    0.149842, -0.149711,
};

float Cg_init[2] = {
    -0.484839, -0.484870
};

float xstd_init[12] = {
    0.003647, 0.001315, 0.101439, 0.167420, 0.001698, 0.000510, 0.029090, 0.083618, 0.001626, 0.000090, 0.017432, 0.066690
};

float xmean_init[12] = {
    0.009876, -0.006254, 0.169972, 0.585812, 0.003315, -0.007703, 0.007920, 0.054701, 0.003270, -0.007808, 0.004843, 0.068034
};


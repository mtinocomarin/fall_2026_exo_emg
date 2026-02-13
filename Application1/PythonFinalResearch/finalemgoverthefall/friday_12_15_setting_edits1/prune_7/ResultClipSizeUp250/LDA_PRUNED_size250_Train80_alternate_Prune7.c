// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.00%
// test_accuracy: 71.88%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:14:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.604743, 1.604747,
    0.495859, -0.495861,
    1.144813, -1.144809,
    0.247155, -0.247158,
    0.216552, -0.216634,
    -0.290268, 0.290350,
    -0.191278, 0.191282,
    0.197879, -0.197881,
    -0.120001, 0.119996,
    -0.345410, 0.345406,
    -0.012608, 0.012615,
    0.318040, -0.318033,
};

float Cg_init[2] = {
    -0.446580, -0.446579
};

float xstd_init[12] = {
    0.004554, 0.002042, 0.338937, 0.116787, 0.001560, 0.000285, 0.071026, 0.143264, 0.000659, 0.000165, 0.050529, 0.145837
};

float xmean_init[12] = {
    0.011064, -0.005533, 0.464000, 1.043600, 0.003637, -0.007717, 0.021667, 0.638600, 0.003561, -0.007730, 0.014667, 0.702400
};


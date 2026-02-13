// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.61%
// test_accuracy: 81.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:08:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.495129, 0.495081,
    -0.462515, 0.462542,
    0.478222, -0.478239,
    0.751579, -0.751556,
    1.255995, -1.255945,
    -1.077644, 1.077597,
    -0.272617, 0.272633,
    -0.224579, 0.224569,
    0.842875, -0.843017,
    -0.109293, 0.109672,
    -0.386637, 0.386524,
    -0.083471, 0.083305,
};

float Cg_init[2] = {
    -0.568720, -0.568727
};

float xstd_init[12] = {
    0.003387, 0.001178, 0.102422, 0.170747, 0.001355, 0.000420, 0.022092, 0.072346, 0.000534, 0.000077, 0.015814, 0.065915
};

float xmean_init[12] = {
    0.009600, -0.006323, 0.172104, 0.581786, 0.003126, -0.007743, 0.005952, 0.049881, 0.003111, -0.007811, 0.004246, 0.067857
};


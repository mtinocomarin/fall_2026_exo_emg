// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.81%
// test_accuracy: 58.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:48:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.903160, 0.903185,
    -0.066236, 0.066184,
    0.274926, -0.274921,
    0.387468, -0.387444,
    -1.103019, 1.102995,
    0.340093, -0.340073,
    0.266345, -0.266344,
    -0.131325, 0.131337,
    -1.328877, 1.328913,
    0.394750, -0.394836,
    -0.624172, 0.624204,
    0.931842, -0.931824,
};

float Cg_init[2] = {
    -0.622655, -0.622655
};

float xstd_init[12] = {
    0.001059, 0.000077, 0.010629, 0.079119, 0.002455, 0.000680, 0.077942, 0.163436, 0.001005, 0.000130, 0.021030, 0.079123
};

float xmean_init[12] = {
    0.006553, -0.007680, 0.004444, 0.145926, 0.008631, -0.006916, 0.100988, 0.453704, 0.004368, -0.007713, 0.011605, 0.137778
};


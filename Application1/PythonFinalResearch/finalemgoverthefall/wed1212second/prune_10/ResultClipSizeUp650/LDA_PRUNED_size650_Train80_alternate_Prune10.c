// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.02%
// test_accuracy: 76.04%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 17:04:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.306751, 0.306771,
    -0.157091, 0.157139,
    -0.128774, 0.128768,
    0.159675, -0.159707,
    1.822838, -1.823082,
    -1.499472, 1.499790,
    -0.011584, 0.011524,
    0.094335, -0.094390,
    -0.421717, 0.421754,
    -0.720542, 0.720499,
    0.458449, -0.458473,
    1.349358, -1.349340,
};

float Cg_init[2] = {
    -0.632290, -0.632367
};

float xstd_init[12] = {
    0.000912, 0.000079, 0.008173, 0.064587, 0.000709, 0.000115, 0.014130, 0.051222, 0.003376, 0.000975, 0.113548, 0.207748
};

float xmean_init[12] = {
    0.005587, -0.007756, 0.002172, 0.093485, 0.002378, -0.007854, 0.004646, 0.045455, 0.008841, -0.006661, 0.127778, 0.458864
};


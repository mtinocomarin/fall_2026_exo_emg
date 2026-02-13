// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.15%
// test_accuracy: 67.28%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 12:41:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.755053, 0.755097,
    0.322476, -0.322482,
    0.604362, -0.604404,
    0.678477, -0.678467,
    -0.495844, 0.495794,
    0.234769, -0.234696,
    -0.130796, 0.130794,
    0.025494, -0.025528,
    0.382634, -0.382652,
    -0.349446, 0.349494,
    -0.377946, 0.377945,
    0.099611, -0.099648,
};

float Cg_init[2] = {
    -0.381827, -0.381839
};

float xstd_init[12] = {
    0.003848, 0.001653, 0.151587, 0.209831, 0.001035, 0.000185, 0.026740, 0.080961, 0.000654, 0.000163, 0.028913, 0.102934
};

float xmean_init[12] = {
    0.009937, -0.005885, 0.240892, 0.676738, 0.003371, -0.007766, 0.008770, 0.074974, 0.003490, -0.007739, 0.011194, 0.113263
};


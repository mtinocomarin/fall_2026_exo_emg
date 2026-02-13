// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.46%
// test_accuracy: 53.57%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 13:47:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.752333, 0.752335,
    0.272526, -0.272529,
    0.330316, -0.330313,
    -0.174690, 0.174689,
    -0.538581, 0.538591,
    -0.105011, 0.104986,
    0.229483, -0.229469,
    -0.013181, 0.013172,
    -1.013537, 1.013498,
    0.522100, -0.522007,
    -0.282674, 0.282650,
    0.401104, -0.401147,
};

float Cg_init[2] = {
    -0.429449, -0.429441
};

float xstd_init[12] = {
    0.001016, 0.000075, 0.010505, 0.076546, 0.002955, 0.000800, 0.085208, 0.168648, 0.000802, 0.000084, 0.014961, 0.070099
};

float xmean_init[12] = {
    0.006446, -0.007690, 0.003609, 0.139399, 0.008498, -0.006910, 0.096942, 0.433383, 0.004304, -0.007730, 0.007419, 0.125564
};


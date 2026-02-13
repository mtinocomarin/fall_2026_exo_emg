// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.58%
// test_accuracy: 70.31%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:13:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.613140, 1.613157,
    0.604804, -0.604811,
    1.008485, -1.008487,
    0.265353, -0.265354,
    0.159190, -0.159300,
    -0.241365, 0.241467,
    -0.153113, 0.153123,
    0.178431, -0.178431,
    -0.137060, 0.137032,
    -0.283665, 0.283700,
    -0.035803, 0.035793,
    0.370533, -0.370528,
};

float Cg_init[2] = {
    -0.406055, -0.406056
};

float xstd_init[12] = {
    0.004547, 0.002074, 0.350173, 0.118175, 0.001534, 0.000280, 0.069765, 0.143394, 0.000651, 0.000163, 0.049869, 0.145567
};

float xmean_init[12] = {
    0.011192, -0.005444, 0.476923, 1.045000, 0.003617, -0.007721, 0.020833, 0.637500, 0.003559, -0.007730, 0.014744, 0.702115
};


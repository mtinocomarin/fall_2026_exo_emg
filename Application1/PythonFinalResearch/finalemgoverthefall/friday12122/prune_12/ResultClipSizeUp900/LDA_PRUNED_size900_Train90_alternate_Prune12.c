// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.03%
// test_accuracy: 77.21%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 16:08:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.614140, 0.614102,
    -0.338774, 0.338800,
    0.591008, -0.591033,
    0.586421, -0.586394,
    0.956128, -0.956178,
    -0.973648, 0.973732,
    -0.123335, 0.123327,
    -0.137846, 0.137823,
    0.618913, -0.619042,
    0.098315, -0.098005,
    -0.292925, 0.292844,
    0.051044, -0.051179,
};

float Cg_init[2] = {
    -0.509399, -0.509415
};

float xstd_init[12] = {
    0.003154, 0.001230, 0.100193, 0.164308, 0.001195, 0.000365, 0.018741, 0.066209, 0.000511, 0.000064, 0.011396, 0.057702
};

float xmean_init[12] = {
    0.009512, -0.006335, 0.172484, 0.586618, 0.003028, -0.007765, 0.004804, 0.045784, 0.003073, -0.007819, 0.002974, 0.060245
};


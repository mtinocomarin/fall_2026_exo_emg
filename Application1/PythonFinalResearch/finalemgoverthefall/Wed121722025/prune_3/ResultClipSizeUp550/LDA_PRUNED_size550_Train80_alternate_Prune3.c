// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.17%
// test_accuracy: 53.75%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:42:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.326919, 0.327016,
    0.160062, -0.160259,
    0.036382, -0.036364,
    -0.150824, 0.150919,
    -0.547438, 0.547448,
    -0.105007, 0.104995,
    0.203806, -0.203829,
    0.261224, -0.261195,
    -0.380321, 0.380421,
    0.131253, -0.131414,
    -0.012181, 0.012214,
    0.199701, -0.199666,
};

float Cg_init[2] = {
    -0.131618, -0.131641
};

float xstd_init[12] = {
    0.001004, 0.000078, 0.012506, 0.078587, 0.002937, 0.000787, 0.086582, 0.175147, 0.000833, 0.000107, 0.018760, 0.069884
};

float xmean_init[12] = {
    0.006417, -0.007692, 0.004782, 0.140483, 0.008646, -0.006859, 0.104690, 0.440069, 0.004343, -0.007720, 0.009425, 0.125173
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.89%
// test_accuracy: 73.75%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 12:38:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.794577, 0.794595,
    0.137658, -0.137682,
    0.232343, -0.232359,
    0.761610, -0.761603,
    -0.489878, 0.490264,
    0.204903, -0.205317,
    -0.000481, 0.000458,
    -0.087006, 0.087054,
    0.153296, -0.153221,
    -0.008015, 0.007862,
    -0.530781, 0.530836,
    0.042390, -0.042379,
};

float Cg_init[2] = {
    -0.292544, -0.292554
};

float xstd_init[12] = {
    0.004562, 0.002050, 0.148569, 0.203501, 0.001195, 0.000211, 0.030846, 0.089360, 0.000687, 0.000170, 0.030882, 0.105611
};

float xmean_init[12] = {
    0.010481, -0.005656, 0.241828, 0.680518, 0.003443, -0.007751, 0.010123, 0.081704, 0.003525, -0.007733, 0.012938, 0.115926
};


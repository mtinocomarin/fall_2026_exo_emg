// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.29%
// test_accuracy: 64.58%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:16:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.177038, 1.177058,
    0.226737, -0.226741,
    0.984982, -0.984980,
    0.557570, -0.557580,
    -0.535585, 0.535413,
    -0.024385, 0.024554,
    0.177472, -0.177460,
    0.155619, -0.155625,
    -0.202974, 0.202893,
    -0.434852, 0.434979,
    -0.120960, 0.120923,
    0.723921, -0.723930,
};

float Cg_init[2] = {
    -0.544439, -0.544445
};

float xstd_init[12] = {
    0.004700, 0.002032, 0.361588, 0.123915, 0.001397, 0.000248, 0.066570, 0.138317, 0.000695, 0.000176, 0.056101, 0.138598
};

float xmean_init[12] = {
    0.011156, -0.005467, 0.485979, 1.041111, 0.003567, -0.007730, 0.019577, 0.630000, 0.003590, -0.007723, 0.016931, 0.707778
};


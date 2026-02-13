// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.83%
// test_accuracy: 67.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:15:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.705796, 0.705782,
    0.001829, -0.001810,
    0.781888, -0.781880,
    0.415849, -0.415851,
    -0.620323, 0.620459,
    0.203561, -0.203704,
    0.019239, -0.019239,
    0.248067, -0.248059,
    0.198185, -0.198318,
    -0.322614, 0.322796,
    -0.282967, 0.282908,
    0.425522, -0.425537,
};

float Cg_init[2] = {
    -0.380542, -0.380547
};

float xstd_init[12] = {
    0.004638, 0.002155, 0.352489, 0.124888, 0.001186, 0.000216, 0.049171, 0.137000, 0.000702, 0.000175, 0.053498, 0.137132
};

float xmean_init[12] = {
    0.010726, -0.005540, 0.462028, 1.034522, 0.003471, -0.007747, 0.014348, 0.623043, 0.003561, -0.007726, 0.015362, 0.702783
};


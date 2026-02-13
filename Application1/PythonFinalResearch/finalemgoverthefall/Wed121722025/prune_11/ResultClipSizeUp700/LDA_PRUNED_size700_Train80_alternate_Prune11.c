// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.11%
// test_accuracy: 54.33%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:47:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.785442, 0.785526,
    0.524719, -0.524866,
    -0.090209, 0.090231,
    -0.290467, 0.290535,
    -0.334972, 0.334961,
    -0.339660, 0.339709,
    0.136577, -0.136605,
    0.234517, -0.234477,
    -0.730476, 0.730667,
    0.393440, -0.393796,
    -0.009830, 0.009894,
    0.119016, -0.118906,
};

float Cg_init[2] = {
    -0.273657, -0.273712
};

float xstd_init[12] = {
    0.001081, 0.000081, 0.010938, 0.080226, 0.003184, 0.000876, 0.094037, 0.187730, 0.000900, 0.000119, 0.018804, 0.075348
};

float xmean_init[12] = {
    0.006512, -0.007687, 0.004005, 0.144249, 0.008504, -0.006860, 0.105153, 0.433700, 0.004397, -0.007712, 0.009817, 0.129085
};


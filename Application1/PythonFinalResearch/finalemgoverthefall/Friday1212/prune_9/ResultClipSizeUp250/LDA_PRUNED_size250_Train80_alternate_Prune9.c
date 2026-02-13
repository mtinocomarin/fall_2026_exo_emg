// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.30%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt']}
// generated: 2025-12-12 15:50:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.595880, 1.595901,
    0.275885, -0.275964,
    0.817430, -0.817437,
    1.141938, -1.141913,
    1.283027, -1.283026,
    -1.056063, 1.055959,
    0.009972, -0.009872,
    -0.419148, 0.419168,
    -0.191244, 0.191176,
    0.051331, -0.051067,
    -0.427007, 0.426923,
    0.547775, -0.547899,
};

float Cg_init[2] = {
    -0.651531, -0.651526
};

float xstd_init[12] = {
    0.003829, 0.001397, 0.100192, 0.171874, 0.001780, 0.000545, 0.036288, 0.093525, 0.000918, 0.000098, 0.021021, 0.066392
};

float xmean_init[12] = {
    0.009970, -0.006197, 0.171739, 0.568478, 0.003337, -0.007696, 0.009855, 0.053043, 0.003266, -0.007802, 0.004928, 0.068261
};


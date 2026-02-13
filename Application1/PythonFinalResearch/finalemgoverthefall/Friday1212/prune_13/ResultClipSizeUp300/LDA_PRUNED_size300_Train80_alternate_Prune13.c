// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.68%
// test_accuracy: 75.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt', 'act2\\trial_31.txt']}
// generated: 2025-12-12 15:52:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.512889, 1.512905,
    -0.225201, 0.225246,
    1.297465, -1.297465,
    1.227513, -1.227544,
    2.082510, -2.082546,
    -2.718893, 2.718951,
    0.348022, -0.348054,
    -0.083906, 0.083918,
    -0.645863, 0.645931,
    0.734806, -0.735038,
    -0.468787, 0.468850,
    0.356080, -0.355971,
};

float Cg_init[2] = {
    -0.931146, -0.931175
};

float xstd_init[12] = {
    0.003742, 0.001380, 0.098542, 0.175695, 0.001846, 0.000576, 0.034340, 0.094862, 0.001066, 0.000092, 0.016663, 0.061157
};

float xmean_init[12] = {
    0.009841, -0.006237, 0.166456, 0.570316, 0.003390, -0.007685, 0.008561, 0.057895, 0.003316, -0.007799, 0.005193, 0.070737
};


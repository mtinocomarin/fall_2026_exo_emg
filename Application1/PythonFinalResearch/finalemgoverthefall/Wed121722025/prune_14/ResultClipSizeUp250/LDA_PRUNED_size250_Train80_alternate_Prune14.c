// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.06%
// test_accuracy: 60.94%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:48:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.765438, 1.765267,
    0.342188, -0.341931,
    -0.006478, 0.006450,
    -0.043684, 0.043564,
    -1.188747, 1.188792,
    0.114620, -0.114588,
    0.265874, -0.265923,
    -0.261872, 0.261846,
    -1.727087, 1.726985,
    1.081916, -1.081768,
    -0.709279, 0.709209,
    0.761513, -0.761524,
};

float Cg_init[2] = {
    -1.004633, -1.004579
};

float xstd_init[12] = {
    0.001062, 0.000074, 0.009718, 0.074421, 0.002458, 0.000694, 0.075423, 0.156026, 0.000926, 0.000135, 0.020516, 0.071095
};

float xmean_init[12] = {
    0.006450, -0.007688, 0.003148, 0.136667, 0.008362, -0.006946, 0.093889, 0.431667, 0.004471, -0.007702, 0.010741, 0.141667
};


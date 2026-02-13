// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.64%
// test_accuracy: 76.56%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:15:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.640584, 1.640625,
    0.477007, -0.477021,
    1.215482, -1.215499,
    0.390333, -0.390332,
    -0.092514, 0.092438,
    -0.090307, 0.090367,
    -0.140013, 0.140024,
    0.298444, -0.298441,
    -0.286533, 0.286431,
    -0.281624, 0.281794,
    0.011482, -0.011545,
    0.347803, -0.347814,
};

float Cg_init[2] = {
    -0.535404, -0.535411
};

float xstd_init[12] = {
    0.004604, 0.002118, 0.351210, 0.119954, 0.001520, 0.000291, 0.063153, 0.146160, 0.000692, 0.000174, 0.052850, 0.148125
};

float xmean_init[12] = {
    0.011096, -0.005507, 0.468560, 1.041364, 0.003652, -0.007712, 0.020076, 0.636364, 0.003572, -0.007727, 0.015909, 0.701363
};


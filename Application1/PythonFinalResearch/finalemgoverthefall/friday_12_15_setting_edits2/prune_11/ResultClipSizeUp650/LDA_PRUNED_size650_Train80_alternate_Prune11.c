// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.33%
// test_accuracy: 70.31%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 12:41:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.879120, 0.879123,
    0.173620, -0.173590,
    0.521428, -0.521450,
    0.770584, -0.770568,
    -0.461142, 0.461215,
    0.215281, -0.215351,
    -0.026907, 0.026873,
    -0.151128, 0.151133,
    0.347456, -0.347575,
    -0.108689, 0.108950,
    -0.609970, 0.609919,
    0.043630, -0.043747,
};

float Cg_init[2] = {
    -0.384533, -0.384542
};

float xstd_init[12] = {
    0.004152, 0.001812, 0.151062, 0.206664, 0.001198, 0.000207, 0.031652, 0.086130, 0.000604, 0.000143, 0.025688, 0.098832
};

float xmean_init[12] = {
    0.010514, -0.005639, 0.252381, 0.696032, 0.003470, -0.007749, 0.010582, 0.083492, 0.003532, -0.007734, 0.012011, 0.120873
};


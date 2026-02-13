// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.74%
// test_accuracy: 55.59%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 13:45:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.356232, 0.356010,
    0.204013, -0.203487,
    -0.009742, 0.009692,
    -0.045151, 0.044865,
    -0.328609, 0.328637,
    -0.206597, 0.206605,
    -0.171535, 0.171517,
    0.401618, -0.401628,
    -0.460422, 0.460423,
    0.251408, -0.251435,
    0.030429, -0.030390,
    0.080113, -0.080133,
};

float Cg_init[2] = {
    -0.150512, -0.150478
};

float xstd_init[12] = {
    0.001062, 0.000082, 0.013284, 0.080881, 0.003143, 0.000855, 0.091298, 0.186391, 0.000867, 0.000110, 0.020053, 0.075881
};

float xmean_init[12] = {
    0.006560, -0.007683, 0.005439, 0.149299, 0.008395, -0.006894, 0.100264, 0.425132, 0.004366, -0.007715, 0.011023, 0.128334
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.21%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:47:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712414, 0.712430,
    -0.210015, 0.210047,
    0.714416, -0.714438,
    0.635999, -0.636005,
    1.074763, -1.074856,
    -1.534523, 1.534671,
    0.091404, -0.091455,
    0.149304, -0.149310,
    -0.243987, 0.244044,
    0.467412, -0.467580,
    -0.486602, 0.486662,
    0.109628, -0.109559,
};

float Cg_init[2] = {
    -0.410917, -0.410942
};

float xstd_init[12] = {
    0.003546, 0.001268, 0.098316, 0.168655, 0.001670, 0.000513, 0.031284, 0.086522, 0.000941, 0.000100, 0.020466, 0.067648
};

float xmean_init[12] = {
    0.009665, -0.006297, 0.167905, 0.569857, 0.003238, -0.007715, 0.007810, 0.050857, 0.003206, -0.007803, 0.004952, 0.068286
};


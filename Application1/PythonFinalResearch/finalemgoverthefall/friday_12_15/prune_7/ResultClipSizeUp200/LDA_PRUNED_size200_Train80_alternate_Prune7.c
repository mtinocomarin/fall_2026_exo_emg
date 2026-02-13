// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.33%
// test_accuracy: 87.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-12 12:42:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.243181, 1.243225,
    -0.120644, 0.120638,
    0.897192, -0.897210,
    1.127351, -1.127349,
    0.190063, -0.190014,
    -0.036638, 0.036510,
    0.163720, -0.163707,
    -0.908771, 0.908837,
    0.405573, -0.405704,
    -0.899676, 0.899923,
    -0.270367, 0.270311,
    0.126442, -0.126520,
};

float Cg_init[2] = {
    -0.708736, -0.708760
};

float xstd_init[12] = {
    0.004185, 0.001735, 0.137892, 0.177681, 0.001596, 0.000295, 0.039049, 0.102628, 0.000680, 0.000161, 0.022368, 0.103150
};

float xmean_init[12] = {
    0.010723, -0.005727, 0.243733, 0.704000, 0.003655, -0.007713, 0.013156, 0.086667, 0.003559, -0.007732, 0.009778, 0.121333
};


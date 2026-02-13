// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.18%
// test_accuracy: 85.42%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-17 12:40:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.944419, 0.944416,
    -0.357951, 0.357934,
    1.085656, -1.085647,
    1.474337, -1.474321,
    0.575505, -0.575355,
    -0.231971, 0.231806,
    0.123471, -0.123482,
    -1.439165, 1.439193,
    0.516044, -0.516056,
    -1.154390, 1.154413,
    -0.300090, 0.300080,
    0.045052, -0.045060,
};

float Cg_init[2] = {
    -0.987206, -0.987205
};

float xstd_init[12] = {
    0.003996, 0.001667, 0.139394, 0.180552, 0.001681, 0.000311, 0.041083, 0.105898, 0.000677, 0.000167, 0.023498, 0.103441
};

float xmean_init[12] = {
    0.010648, -0.005749, 0.245454, 0.708485, 0.003727, -0.007700, 0.013939, 0.090909, 0.003570, -0.007725, 0.010707, 0.124848
};


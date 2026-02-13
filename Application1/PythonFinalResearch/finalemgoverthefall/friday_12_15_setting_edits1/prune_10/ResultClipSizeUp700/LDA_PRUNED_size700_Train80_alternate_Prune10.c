// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.52%
// test_accuracy: 74.04%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:16:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.601484, 0.601482,
    0.076964, -0.077010,
    0.773331, -0.773300,
    0.449857, -0.449841,
    -0.831622, 0.831632,
    0.377352, -0.377352,
    0.043990, -0.043994,
    0.223771, -0.223763,
    0.212121, -0.211955,
    -0.392074, 0.391819,
    -0.305375, 0.305450,
    0.404430, -0.404407,
};

float Cg_init[2] = {
    -0.394227, -0.394204
};

float xstd_init[12] = {
    0.004056, 0.001706, 0.333970, 0.121424, 0.001147, 0.000206, 0.054035, 0.130538, 0.000676, 0.000173, 0.047741, 0.138576
};

float xmean_init[12] = {
    0.010120, -0.005843, 0.430069, 1.034895, 0.003437, -0.007752, 0.014452, 0.614755, 0.003519, -0.007732, 0.013986, 0.697762
};


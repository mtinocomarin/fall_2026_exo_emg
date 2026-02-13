// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.91%
// test_accuracy: 73.30%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:43:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712726, 0.712759,
    0.181549, -0.181604,
    0.413981, -0.414022,
    0.827982, -0.827956,
    -0.398722, 0.398635,
    0.229174, -0.229033,
    -0.059604, 0.059611,
    -0.258413, 0.258360,
    0.229543, -0.229355,
    -0.132996, 0.132593,
    -0.452435, 0.452543,
    -0.063588, 0.063728,
};

float Cg_init[2] = {
    -0.358575, -0.358570
};

float xstd_init[12] = {
    0.004189, 0.001819, 0.148916, 0.205034, 0.001176, 0.000211, 0.029973, 0.087957, 0.000684, 0.000173, 0.029580, 0.108455
};

float xmean_init[12] = {
    0.010416, -0.005702, 0.244898, 0.684655, 0.003453, -0.007750, 0.010570, 0.082037, 0.003545, -0.007727, 0.013333, 0.121673
};


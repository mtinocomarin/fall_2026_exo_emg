// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.41%
// test_accuracy: 71.53%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:14:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.536148, 0.536131,
    0.035779, -0.035766,
    0.607891, -0.607881,
    0.461632, -0.461634,
    -0.639113, 0.639063,
    0.116418, -0.116370,
    0.063152, -0.063149,
    0.280193, -0.280184,
    0.196555, -0.196605,
    -0.280165, 0.280227,
    -0.444634, 0.444620,
    0.235449, -0.235445,
};

float Cg_init[2] = {
    -0.366721, -0.366717
};

float xstd_init[12] = {
    0.004286, 0.001822, 0.331031, 0.122323, 0.001278, 0.000229, 0.057973, 0.136074, 0.000683, 0.000175, 0.052982, 0.145942
};

float xmean_init[12] = {
    0.010419, -0.005740, 0.440740, 1.028889, 0.003507, -0.007738, 0.015741, 0.617129, 0.003546, -0.007728, 0.018364, 0.696944
};


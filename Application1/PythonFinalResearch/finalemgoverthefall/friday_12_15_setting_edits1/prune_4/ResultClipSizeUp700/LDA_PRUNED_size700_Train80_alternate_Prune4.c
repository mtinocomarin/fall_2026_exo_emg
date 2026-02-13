// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.10%
// test_accuracy: 71.63%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:13:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.575604, 0.575625,
    -0.041504, 0.041471,
    0.511772, -0.511779,
    0.326943, -0.326931,
    -0.460212, 0.460110,
    0.181174, -0.181065,
    -0.004304, 0.004305,
    0.206608, -0.206608,
    0.188131, -0.188018,
    -0.237752, 0.237594,
    -0.330659, 0.330705,
    0.311562, -0.311549,
};

float Cg_init[2] = {
    -0.236275, -0.236268
};

float xstd_init[12] = {
    0.004562, 0.002137, 0.347423, 0.119428, 0.001051, 0.000188, 0.048420, 0.131407, 0.000658, 0.000161, 0.046302, 0.139374
};

float xmean_init[12] = {
    0.010501, -0.005610, 0.448169, 1.040714, 0.003378, -0.007763, 0.011722, 0.617967, 0.003536, -0.007731, 0.015293, 0.701923
};


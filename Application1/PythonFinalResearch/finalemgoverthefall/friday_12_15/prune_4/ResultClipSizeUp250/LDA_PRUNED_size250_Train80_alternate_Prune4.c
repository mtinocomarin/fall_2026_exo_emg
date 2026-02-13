// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.84%
// test_accuracy: 87.50%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 12:40:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.586651, 1.586681,
    0.538117, -0.538129,
    0.327262, -0.327281,
    1.234350, -1.234340,
    0.148996, -0.149039,
    -0.295360, 0.295394,
    0.016274, -0.016267,
    -0.321022, 0.321019,
    -0.149219, 0.149186,
    0.208471, -0.208430,
    -0.434767, 0.434760,
    -0.193178, 0.193167,
};

float Cg_init[2] = {
    -0.533975, -0.533977
};

float xstd_init[12] = {
    0.004655, 0.002177, 0.145447, 0.189059, 0.001500, 0.000275, 0.037186, 0.099799, 0.000649, 0.000161, 0.030722, 0.105339
};

float xmean_init[12] = {
    0.011322, -0.005374, 0.255834, 0.711428, 0.003586, -0.007722, 0.012262, 0.085893, 0.003575, -0.007723, 0.013095, 0.128214
};


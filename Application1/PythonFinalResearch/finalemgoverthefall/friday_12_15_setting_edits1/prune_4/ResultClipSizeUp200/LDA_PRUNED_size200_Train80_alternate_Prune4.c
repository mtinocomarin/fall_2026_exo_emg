// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.10%
// test_accuracy: 89.58%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:12:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.955363, 0.955374,
    0.013023, -0.013028,
    0.801616, -0.801610,
    0.511726, -0.511730,
    -0.247912, 0.248004,
    -0.058937, 0.058844,
    -0.082956, 0.082956,
    0.350036, -0.350031,
    0.015808, -0.015886,
    -0.089955, 0.090060,
    -0.456288, 0.456262,
    0.104199, -0.104205,
};

float Cg_init[2] = {
    -0.445641, -0.445644
};

float xstd_init[12] = {
    0.004532, 0.002172, 0.332253, 0.111246, 0.001520, 0.000280, 0.071242, 0.143166, 0.000667, 0.000155, 0.044228, 0.152780
};

float xmean_init[12] = {
    0.011189, -0.005389, 0.467460, 1.048334, 0.003603, -0.007720, 0.019444, 0.626667, 0.003579, -0.007729, 0.016667, 0.694047
};


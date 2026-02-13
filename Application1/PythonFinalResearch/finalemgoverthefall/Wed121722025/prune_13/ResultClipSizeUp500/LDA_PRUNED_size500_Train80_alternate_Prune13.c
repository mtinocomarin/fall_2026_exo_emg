// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.21%
// test_accuracy: 52.08%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:48:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.940192, 0.940190,
    0.377580, -0.377568,
    0.155196, -0.155197,
    -0.244152, 0.244140,
    -0.457132, 0.457107,
    -0.084948, 0.084983,
    0.087261, -0.087267,
    0.035150, -0.035156,
    -0.780271, 0.780266,
    0.279536, -0.279505,
    0.014663, -0.014670,
    0.246535, -0.246558,
};

float Cg_init[2] = {
    -0.399865, -0.399864
};

float xstd_init[12] = {
    0.001073, 0.000082, 0.010859, 0.082271, 0.003065, 0.000842, 0.088047, 0.174530, 0.000853, 0.000109, 0.015788, 0.072238
};

float xmean_init[12] = {
    0.006543, -0.007681, 0.003665, 0.151228, 0.008608, -0.006862, 0.102456, 0.440468, 0.004333, -0.007718, 0.008343, 0.130994
};


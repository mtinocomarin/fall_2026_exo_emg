// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.60%
// test_accuracy: 76.25%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 16:07:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.839446, 0.839478,
    -0.168928, 0.168940,
    0.498560, -0.498589,
    0.958994, -0.958994,
    1.104646, -1.104692,
    -0.957376, 0.957402,
    -0.188370, 0.188376,
    -0.179737, 0.179751,
    -0.604017, 0.604227,
    0.301752, -0.302222,
    -0.406145, 0.406304,
    0.257335, -0.257140,
};

float Cg_init[2] = {
    -0.456438, -0.456471
};

float xstd_init[12] = {
    0.003559, 0.001218, 0.101617, 0.172127, 0.001538, 0.000444, 0.023036, 0.073388, 0.001813, 0.000093, 0.017898, 0.067701
};

float xmean_init[12] = {
    0.009792, -0.006315, 0.170667, 0.583040, 0.003214, -0.007736, 0.005920, 0.049680, 0.003282, -0.007807, 0.005227, 0.069040
};


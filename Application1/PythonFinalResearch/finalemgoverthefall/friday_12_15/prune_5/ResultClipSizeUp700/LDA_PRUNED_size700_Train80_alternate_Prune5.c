// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.78%
// test_accuracy: 71.15%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:41:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.682781, 0.682815,
    0.131674, -0.131698,
    0.352447, -0.352489,
    0.631998, -0.631985,
    -0.487021, 0.486866,
    0.231711, -0.231501,
    -0.072201, 0.072203,
    -0.007491, 0.007434,
    0.251792, -0.251698,
    -0.122992, 0.122826,
    -0.458649, 0.458697,
    0.053302, -0.053260,
};

float Cg_init[2] = {
    -0.253118, -0.253119
};

float xstd_init[12] = {
    0.004245, 0.001933, 0.147818, 0.202846, 0.001071, 0.000192, 0.027440, 0.081464, 0.000660, 0.000163, 0.028580, 0.106214
};

float xmean_init[12] = {
    0.010263, -0.005747, 0.240761, 0.682508, 0.003375, -0.007764, 0.009155, 0.074473, 0.003513, -0.007735, 0.012764, 0.117265
};


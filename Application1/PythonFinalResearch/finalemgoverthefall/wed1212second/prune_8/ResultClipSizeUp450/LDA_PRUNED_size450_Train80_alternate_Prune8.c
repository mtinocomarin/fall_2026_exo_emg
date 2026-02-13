// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.58%
// test_accuracy: 72.66%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:02:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.065677, -0.065766,
    -0.154069, 0.154281,
    0.027092, -0.027133,
    -0.155533, 0.155446,
    1.878905, -1.879027,
    -1.756322, 1.756453,
    -0.129751, 0.129739,
    0.202775, -0.202779,
    -0.733546, 0.733594,
    -0.619040, 0.618978,
    0.338078, -0.338073,
    1.676343, -1.676355,
};

float Cg_init[2] = {
    -0.637107, -0.637141
};

float xstd_init[12] = {
    0.000883, 0.000083, 0.008171, 0.066811, 0.000820, 0.000147, 0.014620, 0.056400, 0.003516, 0.001050, 0.121000, 0.211842
};

float xmean_init[12] = {
    0.005582, -0.007756, 0.001944, 0.092500, 0.002431, -0.007841, 0.005069, 0.049479, 0.009107, -0.006582, 0.136806, 0.474375
};


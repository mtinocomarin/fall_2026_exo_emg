// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.50%
// test_accuracy: 77.88%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:07:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.599691, 0.599693,
    -0.311702, 0.311686,
    0.432158, -0.432173,
    0.645496, -0.645475,
    0.907421, -0.907383,
    -0.913232, 0.913165,
    -0.190379, 0.190411,
    -0.098874, 0.098872,
    0.855237, -0.855336,
    -0.139540, 0.139812,
    -0.353652, 0.353557,
    0.036427, -0.036534,
};

float Cg_init[2] = {
    -0.522870, -0.522872
};

float xstd_init[12] = {
    0.003508, 0.001317, 0.104264, 0.167540, 0.001266, 0.000392, 0.019977, 0.068774, 0.000519, 0.000077, 0.015634, 0.061958
};

float xmean_init[12] = {
    0.009773, -0.006249, 0.176253, 0.592603, 0.003072, -0.007756, 0.005247, 0.046982, 0.003092, -0.007815, 0.004103, 0.061894
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.62%
// test_accuracy: 73.44%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-12 16:05:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.819815, 0.819868,
    -0.188756, 0.188770,
    0.364994, -0.365039,
    0.905858, -0.905866,
    0.885181, -0.885307,
    -1.013252, 1.013392,
    0.007893, -0.007904,
    -0.025578, 0.025579,
    -0.502289, 0.502438,
    0.543454, -0.543800,
    -0.554720, 0.554842,
    0.251061, -0.250912,
};

float Cg_init[2] = {
    -0.413025, -0.413074
};

float xstd_init[12] = {
    0.003719, 0.001382, 0.100881, 0.171789, 0.001618, 0.000495, 0.028620, 0.080591, 0.001438, 0.000087, 0.018047, 0.066418
};

float xmean_init[12] = {
    0.009825, -0.006277, 0.168104, 0.579310, 0.003219, -0.007722, 0.007184, 0.049741, 0.003245, -0.007807, 0.004943, 0.068190
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 93.33%
// test_accuracy: 87.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 16:07:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.120073, 1.120086,
    -0.463869, 0.463867,
    1.323223, -1.323213,
    0.813998, -0.814013,
    2.330853, -2.330868,
    -2.701587, 2.701597,
    0.368738, -0.368745,
    -0.194935, 0.194946,
    1.329306, -1.329244,
    -0.584107, 0.583958,
    -0.636042, 0.636081,
    0.496276, -0.496218,
};

float Cg_init[2] = {
    -1.146245, -1.146232
};

float xstd_init[12] = {
    0.003498, 0.001235, 0.095029, 0.159902, 0.001684, 0.000544, 0.028204, 0.082337, 0.000572, 0.000104, 0.018868, 0.068748
};

float xmean_init[12] = {
    0.009858, -0.006235, 0.161955, 0.574933, 0.003311, -0.007682, 0.007644, 0.053333, 0.003211, -0.007797, 0.005511, 0.072800
};


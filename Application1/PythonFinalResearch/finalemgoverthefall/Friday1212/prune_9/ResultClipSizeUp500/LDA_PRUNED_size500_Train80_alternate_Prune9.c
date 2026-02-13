// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.65%
// test_accuracy: 73.61%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:50:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.735589, 0.735606,
    -0.256856, 0.256869,
    0.439903, -0.439927,
    0.793354, -0.793361,
    0.926978, -0.926899,
    -1.248640, 1.248537,
    -0.077306, 0.077317,
    0.064276, -0.064267,
    0.982772, -0.982663,
    -0.129085, 0.128862,
    -0.635384, 0.635462,
    0.194858, -0.194803,
};

float Cg_init[2] = {
    -0.651514, -0.651496
};

float xstd_init[12] = {
    0.003741, 0.001409, 0.105050, 0.173307, 0.001607, 0.000504, 0.029352, 0.084818, 0.000507, 0.000085, 0.018496, 0.061710
};

float xmean_init[12] = {
    0.009815, -0.006223, 0.172625, 0.588019, 0.003221, -0.007716, 0.007601, 0.053623, 0.003090, -0.007812, 0.004960, 0.065024
};


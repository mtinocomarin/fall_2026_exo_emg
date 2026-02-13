// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.53%
// test_accuracy: 69.64%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 12:41:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.511168, 0.511186,
    -0.053911, 0.053938,
    0.363350, -0.363379,
    0.492749, -0.492739,
    -0.381809, 0.381751,
    0.137262, -0.137185,
    -0.020019, 0.020002,
    -0.026012, 0.025981,
    0.256850, -0.256961,
    -0.107628, 0.107979,
    -0.429891, 0.429790,
    0.008646, -0.008801,
};

float Cg_init[2] = {
    -0.202870, -0.202876
};

float xstd_init[12] = {
    0.004470, 0.002105, 0.152366, 0.206151, 0.001039, 0.000183, 0.026904, 0.080067, 0.000645, 0.000159, 0.029617, 0.105112
};

float xmean_init[12] = {
    0.010371, -0.005657, 0.246770, 0.688010, 0.003352, -0.007766, 0.008571, 0.074898, 0.003507, -0.007736, 0.012993, 0.117092
};


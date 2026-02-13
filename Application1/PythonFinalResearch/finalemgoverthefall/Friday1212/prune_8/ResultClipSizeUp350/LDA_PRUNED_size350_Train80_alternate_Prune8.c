// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.46%
// test_accuracy: 76.04%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 15:49:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.890854, 0.890841,
    -0.361018, 0.361003,
    0.600953, -0.600974,
    0.980922, -0.980888,
    1.139350, -1.139366,
    -1.466359, 1.466376,
    0.237663, -0.237655,
    -0.028947, 0.028945,
    -0.460613, 0.460581,
    0.592754, -0.592615,
    -0.596743, 0.596696,
    0.235953, -0.236020,
};

float Cg_init[2] = {
    -0.497062, -0.497053
};

float xstd_init[12] = {
    0.003852, 0.001432, 0.101270, 0.175854, 0.001689, 0.000513, 0.032530, 0.088108, 0.001083, 0.000095, 0.020937, 0.066006
};

float xmean_init[12] = {
    0.009837, -0.006243, 0.165185, 0.571527, 0.003228, -0.007724, 0.007685, 0.050139, 0.003239, -0.007803, 0.005463, 0.068333
};


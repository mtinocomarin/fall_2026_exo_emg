// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.255784, 0.255786,
    -0.316409, 0.316449,
    0.000000, 0.000000,
    -0.401169, -0.401169,
    -0.417257, -0.417257,
    -0.781134, -0.781134,
    0.128838, 0.128838,
    -0.500217, -0.500217,
    1.414289, 1.414289,
    1.339618, 1.339618,
    2.168843, 2.168843,
    1.154797, 1.154797,
};

float Cg_init[2] = {
    -2.842424, 2.657342
};

float xstd_init[12] = {
    0.000198, 0.000012, 1.000000, 0.017991, 0.002077, 0.000754, 0.058319, 0.163187, 0.001752, 0.000512, 0.074470, 0.148364
};

float xmean_init[12] = {
    0.002752, -0.007912, 0.000000, 0.010667, 0.008173, -0.006664, 0.109333, 0.413333, 0.006396, -0.007041, 0.102222, 0.345333
};


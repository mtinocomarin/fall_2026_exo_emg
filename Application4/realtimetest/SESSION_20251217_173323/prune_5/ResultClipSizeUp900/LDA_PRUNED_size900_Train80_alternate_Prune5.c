// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.45%
// test_accuracy: 67.06%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:09:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.231989, 0.231899,
    0.181099, -0.180937,
    0.012686, -0.012725,
    0.081488, -0.081531,
    0.380956, -0.381035,
    -0.467802, 0.467846,
    -0.866202, 0.866232,
    0.147619, -0.147637,
    0.526040, -0.526013,
    -0.804912, 0.804918,
    0.371567, -0.371607,
    0.675991, -0.675982,
};

float Cg_init[2] = {
    -0.408789, -0.408785
};

float xstd_init[12] = {
    0.001081, 0.000141, 0.021998, 0.086477, 0.003069, 0.000948, 0.058451, 0.147509, 0.005565, 0.002205, 0.152074, 0.239193
};

float xmean_init[12] = {
    0.005591, -0.007705, 0.007899, 0.134538, 0.004511, -0.007443, 0.024986, 0.136639, 0.012058, -0.005691, 0.179944, 0.553950
};


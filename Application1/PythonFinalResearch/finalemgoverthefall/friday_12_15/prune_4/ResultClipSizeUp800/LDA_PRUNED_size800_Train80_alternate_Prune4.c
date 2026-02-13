// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.71%
// test_accuracy: 69.58%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:41:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.630611, 0.630677,
    0.075123, -0.075208,
    0.367288, -0.367339,
    0.530639, -0.530624,
    -0.335045, 0.334930,
    0.178741, -0.178553,
    -0.099862, 0.099864,
    -0.037179, 0.037111,
    0.255537, -0.255261,
    -0.090175, 0.089632,
    -0.455756, 0.455886,
    0.020921, -0.020743,
};

float Cg_init[2] = {
    -0.211831, -0.211828
};

float xstd_init[12] = {
    0.004166, 0.001889, 0.148910, 0.203924, 0.000995, 0.000178, 0.025434, 0.078959, 0.000646, 0.000157, 0.028486, 0.104467
};

float xmean_init[12] = {
    0.010208, -0.005770, 0.240922, 0.682334, 0.003334, -0.007771, 0.008063, 0.072096, 0.003504, -0.007738, 0.012635, 0.116524
};


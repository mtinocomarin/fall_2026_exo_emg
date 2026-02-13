// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.19%
// test_accuracy: 54.86%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:43:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.408100, 0.408141,
    0.236749, -0.236870,
    0.096901, -0.096884,
    -0.168790, 0.168856,
    -0.529701, 0.529765,
    -0.150204, 0.150171,
    0.161676, -0.161710,
    0.295434, -0.295448,
    -0.490232, 0.490176,
    0.187553, -0.187406,
    -0.017321, 0.017281,
    0.185742, -0.185805,
};

float Cg_init[2] = {
    -0.169755, -0.169761
};

float xstd_init[12] = {
    0.001006, 0.000079, 0.011045, 0.079791, 0.002981, 0.000814, 0.087112, 0.178520, 0.000823, 0.000106, 0.017350, 0.072543
};

float xmean_init[12] = {
    0.006433, -0.007691, 0.003786, 0.143457, 0.008635, -0.006858, 0.103155, 0.441399, 0.004349, -0.007718, 0.009108, 0.127655
};


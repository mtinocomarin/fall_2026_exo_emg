// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.53%
// test_accuracy: 52.27%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:43:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.398941, 0.398931,
    0.253002, -0.252979,
    0.015157, -0.015159,
    -0.161929, 0.161907,
    -0.517559, 0.517561,
    -0.086660, 0.086687,
    0.092737, -0.092758,
    0.285347, -0.285344,
    -0.484305, 0.484359,
    0.206064, -0.206150,
    0.003050, -0.003028,
    0.144196, -0.144186,
};

float Cg_init[2] = {
    -0.149907, -0.149915
};

float xstd_init[12] = {
    0.001013, 0.000079, 0.011112, 0.079370, 0.003025, 0.000839, 0.091416, 0.181296, 0.000838, 0.000108, 0.018817, 0.073448
};

float xmean_init[12] = {
    0.006456, -0.007691, 0.003951, 0.143165, 0.008619, -0.006850, 0.106263, 0.439192, 0.004354, -0.007716, 0.010011, 0.129226
};


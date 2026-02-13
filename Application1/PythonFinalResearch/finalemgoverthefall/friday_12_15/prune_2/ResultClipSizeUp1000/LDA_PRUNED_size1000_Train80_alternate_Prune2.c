// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.11%
// test_accuracy: 69.08%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 12:40:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.642763, 0.642830,
    0.137359, -0.137380,
    0.340124, -0.340162,
    0.376530, -0.376526,
    -0.323583, 0.324156,
    0.198027, -0.198781,
    -0.090721, 0.090776,
    0.033995, -0.033893,
    0.201309, -0.201367,
    -0.055906, 0.056122,
    -0.365761, 0.365728,
    0.015869, -0.016035,
};

float Cg_init[2] = {
    -0.143932, -0.143958
};

float xstd_init[12] = {
    0.003962, 0.001796, 0.148670, 0.202702, 0.000878, 0.000156, 0.022365, 0.073478, 0.000622, 0.000148, 0.027805, 0.099089
};

float xmean_init[12] = {
    0.009987, -0.005851, 0.237685, 0.678702, 0.003269, -0.007783, 0.006456, 0.068176, 0.003470, -0.007747, 0.011626, 0.108492
};


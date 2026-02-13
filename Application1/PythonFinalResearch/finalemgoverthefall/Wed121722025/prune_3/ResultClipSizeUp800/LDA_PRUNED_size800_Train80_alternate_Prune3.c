// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 65.52%
// test_accuracy: 55.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 13:42:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.263090, 0.263083,
    0.136424, -0.136403,
    -0.043116, 0.043120,
    -0.057480, 0.057454,
    -0.363066, 0.363176,
    -0.156432, 0.156333,
    0.012042, -0.012060,
    0.307366, -0.307388,
    -0.328661, 0.328584,
    0.161108, -0.160924,
    0.020016, -0.020046,
    0.067722, -0.067812,
};

float Cg_init[2] = {
    -0.091197, -0.091189
};

float xstd_init[12] = {
    0.001013, 0.000081, 0.012857, 0.080920, 0.003078, 0.000838, 0.090305, 0.181940, 0.000856, 0.000111, 0.020008, 0.075696
};

float xmean_init[12] = {
    0.006495, -0.007688, 0.005272, 0.144093, 0.008618, -0.006849, 0.106177, 0.441564, 0.004322, -0.007716, 0.011065, 0.127173
};


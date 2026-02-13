// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:01:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.090304, -0.090354,
    0.076175, -0.076119,
    -0.085646, 0.085647,
    -0.248940, 0.248912,
    1.414274, -1.414015,
    -1.295491, 1.295143,
    -0.210276, 0.210335,
    0.194700, -0.194652,
    -0.647811, 0.647796,
    -0.648517, 0.648517,
    0.421892, -0.421911,
    1.593993, -1.593960,
};

float Cg_init[2] = {
    -0.567565, -0.567498
};

float xstd_init[12] = {
    0.000861, 0.000078, 0.007419, 0.066919, 0.000804, 0.000147, 0.015944, 0.058379, 0.003346, 0.001005, 0.121914, 0.214729
};

float xmean_init[12] = {
    0.005546, -0.007761, 0.001453, 0.090513, 0.002425, -0.007840, 0.005812, 0.052308, 0.009003, -0.006609, 0.136240, 0.474615
};


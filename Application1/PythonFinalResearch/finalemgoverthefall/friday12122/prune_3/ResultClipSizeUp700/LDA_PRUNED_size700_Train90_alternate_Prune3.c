// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.92%
// test_accuracy: 76.92%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:03:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.551792, 0.551738,
    -0.247052, 0.247082,
    0.327377, -0.327391,
    0.564331, -0.564323,
    0.542469, -0.542424,
    -0.676452, 0.676434,
    0.026373, -0.026381,
    -0.034080, 0.034059,
    -0.314918, 0.314748,
    0.331115, -0.330676,
    -0.262143, 0.262003,
    0.083607, -0.083815,
};

float Cg_init[2] = {
    -0.227108, -0.227089
};

float xstd_init[12] = {
    0.003763, 0.001439, 0.104720, 0.166193, 0.001397, 0.000405, 0.023074, 0.071581, 0.001497, 0.000084, 0.014380, 0.065809
};

float xmean_init[12] = {
    0.009762, -0.006251, 0.171904, 0.584429, 0.003097, -0.007753, 0.005563, 0.046900, 0.003206, -0.007811, 0.003730, 0.065595
};


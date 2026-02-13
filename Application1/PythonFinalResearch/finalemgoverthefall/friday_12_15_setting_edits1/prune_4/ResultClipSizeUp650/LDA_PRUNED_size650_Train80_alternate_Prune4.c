// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.93%
// test_accuracy: 68.23%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 13:13:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.507217, 0.507234,
    -0.133189, 0.133152,
    0.501330, -0.501330,
    0.273542, -0.273541,
    -0.279799, 0.279959,
    0.045285, -0.045452,
    -0.042125, 0.042124,
    0.129927, -0.129927,
    0.258380, -0.258232,
    -0.358537, 0.358310,
    -0.213610, 0.213683,
    0.341674, -0.341655,
};

float Cg_init[2] = {
    -0.212863, -0.212858
};

float xstd_init[12] = {
    0.004716, 0.002249, 0.354707, 0.124003, 0.001038, 0.000189, 0.043219, 0.135968, 0.000653, 0.000161, 0.049562, 0.139813
};

float xmean_init[12] = {
    0.010645, -0.005544, 0.454663, 1.036429, 0.003381, -0.007762, 0.011210, 0.621429, 0.003550, -0.007729, 0.015675, 0.704405
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.69%
// test_accuracy: 66.67%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:13:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.051260, 1.051299,
    0.201417, -0.201410,
    0.764263, -0.764276,
    0.422201, -0.422210,
    -0.095880, 0.095747,
    -0.182395, 0.182498,
    -0.031070, 0.031094,
    0.145452, -0.145452,
    -0.078046, 0.077872,
    -0.313759, 0.314031,
    -0.138941, 0.138851,
    0.532458, -0.532482,
};

float Cg_init[2] = {
    -0.378401, -0.378411
};

float xstd_init[12] = {
    0.004808, 0.002202, 0.354551, 0.121983, 0.001427, 0.000254, 0.064385, 0.136972, 0.000679, 0.000167, 0.053912, 0.136772
};

float xmean_init[12] = {
    0.011078, -0.005443, 0.472863, 1.038077, 0.003593, -0.007727, 0.020299, 0.628846, 0.003557, -0.007727, 0.015385, 0.707820
};


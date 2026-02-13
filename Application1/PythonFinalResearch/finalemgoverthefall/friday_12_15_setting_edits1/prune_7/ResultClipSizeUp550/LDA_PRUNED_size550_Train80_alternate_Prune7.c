// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.60%
// test_accuracy: 66.88%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-12 13:14:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.738581, 0.738577,
    0.021849, -0.021836,
    0.629446, -0.629430,
    0.381892, -0.381906,
    -0.518442, 0.518391,
    0.163241, -0.163191,
    0.025047, -0.025044,
    0.198654, -0.198658,
    0.192265, -0.192368,
    -0.309934, 0.310099,
    -0.246110, 0.246059,
    0.396795, -0.396820,
};

float Cg_init[2] = {
    -0.301916, -0.301922
};

float xstd_init[12] = {
    0.004727, 0.002203, 0.360286, 0.124531, 0.001146, 0.000208, 0.047319, 0.137016, 0.000690, 0.000171, 0.051817, 0.136074
};

float xmean_init[12] = {
    0.010813, -0.005500, 0.467199, 1.033440, 0.003439, -0.007752, 0.013200, 0.624400, 0.003560, -0.007729, 0.015067, 0.700960
};


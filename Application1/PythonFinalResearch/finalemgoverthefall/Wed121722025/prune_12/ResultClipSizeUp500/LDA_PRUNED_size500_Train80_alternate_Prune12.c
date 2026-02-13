// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.94%
// test_accuracy: 52.08%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:47:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.869434, 0.869439,
    0.353518, -0.353522,
    0.180761, -0.180758,
    -0.231216, 0.231212,
    -0.475091, 0.475082,
    -0.172327, 0.172349,
    0.092884, -0.092896,
    0.197697, -0.197705,
    -0.624143, 0.624120,
    0.201016, -0.200947,
    -0.006399, 0.006381,
    0.233156, -0.233192,
};

float Cg_init[2] = {
    -0.347536, -0.347537
};

float xstd_init[12] = {
    0.001065, 0.000082, 0.011425, 0.081980, 0.003107, 0.000862, 0.087814, 0.175891, 0.000870, 0.000109, 0.015570, 0.073789
};

float xmean_init[12] = {
    0.006499, -0.007684, 0.004000, 0.150334, 0.008696, -0.006838, 0.104667, 0.443889, 0.004370, -0.007716, 0.008148, 0.133222
};


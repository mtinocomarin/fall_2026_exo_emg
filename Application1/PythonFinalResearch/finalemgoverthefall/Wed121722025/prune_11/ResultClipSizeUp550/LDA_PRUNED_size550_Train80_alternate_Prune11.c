// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.57%
// test_accuracy: 50.62%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 13:47:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.877389, 0.877447,
    0.508981, -0.509050,
    0.051747, -0.051749,
    -0.328315, 0.328347,
    -0.521439, 0.521390,
    -0.344942, 0.344981,
    0.324963, -0.324958,
    0.279176, -0.279147,
    -0.735018, 0.735138,
    0.376250, -0.376462,
    -0.004762, 0.004810,
    0.166063, -0.166009,
};

float Cg_init[2] = {
    -0.335870, -0.335906
};

float xstd_init[12] = {
    0.001082, 0.000079, 0.012472, 0.081247, 0.003095, 0.000823, 0.089924, 0.182977, 0.000872, 0.000111, 0.017950, 0.070063
};

float xmean_init[12] = {
    0.006485, -0.007685, 0.004571, 0.146857, 0.008627, -0.006851, 0.105143, 0.444476, 0.004413, -0.007713, 0.009397, 0.129048
};


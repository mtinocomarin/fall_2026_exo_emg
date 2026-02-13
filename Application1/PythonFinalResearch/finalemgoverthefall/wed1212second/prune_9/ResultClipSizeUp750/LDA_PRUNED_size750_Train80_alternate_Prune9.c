// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.71%
// test_accuracy: 75.45%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:03:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.406053, 0.406219,
    -0.068510, 0.068331,
    -0.052897, 0.052916,
    0.179193, -0.179129,
    1.720698, -1.721110,
    -1.368784, 1.369380,
    0.013455, -0.013585,
    0.174626, -0.174758,
    -0.580860, 0.580847,
    -0.567476, 0.567515,
    0.579770, -0.579827,
    1.196306, -1.196294,
};

float Cg_init[2] = {
    -0.597101, -0.597244
};

float xstd_init[12] = {
    0.000924, 0.000077, 0.008669, 0.063865, 0.000684, 0.000107, 0.013515, 0.050266, 0.003382, 0.001031, 0.119912, 0.213061
};

float xmean_init[12] = {
    0.005546, -0.007757, 0.002360, 0.091988, 0.002355, -0.007856, 0.004182, 0.045590, 0.008970, -0.006582, 0.135280, 0.471987
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.03%
// test_accuracy: 75.45%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:00:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.199359, 0.199524,
    -0.064013, 0.063763,
    -0.045839, 0.045868,
    0.099169, -0.099076,
    1.243617, -1.243898,
    -0.878903, 0.879347,
    -0.133383, 0.133306,
    0.076679, -0.076797,
    -0.346647, 0.346586,
    -0.472611, 0.472718,
    0.379721, -0.379775,
    0.725417, -0.725409,
};

float Cg_init[2] = {
    -0.329933, -0.330021
};

float xstd_init[12] = {
    0.000864, 0.000071, 0.008631, 0.061539, 0.000636, 0.000097, 0.013188, 0.048794, 0.003306, 0.001004, 0.115238, 0.205241
};

float xmean_init[12] = {
    0.005479, -0.007762, 0.002102, 0.088473, 0.002322, -0.007861, 0.004039, 0.043498, 0.008910, -0.006633, 0.130904, 0.465517
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2026-02-13 17:10:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.626787, 0.626787,
    -0.318214, 0.318211,
    -0.000000, -0.000000,
    0.000000, 0.000000,
    0.508164, 0.508164,
    0.258315, 0.258315,
    0.050748, 0.050748,
    0.218308, 0.218308,
    -0.068603, -0.068603,
    0.110649, 0.110649,
    0.000000, 0.000000,
    0.313084, 0.313084,
};

float Cg_init[2] = {
    -0.354693, -0.100525
};

float xstd_init[12] = {
    0.000241, 0.000014, 1.000000, 0.013369, 0.002347, 0.000865, 0.068228, 0.134678, 0.002171, 0.000532, 0.072762, 0.200651
};

float xmean_init[12] = {
    0.002598, -0.007914, 0.000000, 0.005000, 0.008266, -0.006580, 0.148889, 0.482500, 0.006155, -0.007132, 0.085556, 0.326667
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.77%
// test_accuracy: 76.47%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:04:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.403296, 0.403297,
    -0.316137, 0.316161,
    0.232329, -0.232378,
    0.515642, -0.515622,
    0.691247, -0.691415,
    -0.821406, 0.821652,
    0.007407, -0.007459,
    -0.052943, 0.052915,
    0.551698, -0.551678,
    -0.100559, 0.100588,
    -0.228675, 0.228674,
    0.049017, -0.049058,
};

float Cg_init[2] = {
    -0.301613, -0.301637
};

float xstd_init[12] = {
    0.003339, 0.001321, 0.101919, 0.164063, 0.001225, 0.000372, 0.021410, 0.068246, 0.000494, 0.000069, 0.012930, 0.059196
};

float xmean_init[12] = {
    0.009567, -0.006316, 0.171741, 0.583309, 0.003026, -0.007765, 0.005196, 0.045662, 0.003064, -0.007817, 0.002966, 0.062206
};


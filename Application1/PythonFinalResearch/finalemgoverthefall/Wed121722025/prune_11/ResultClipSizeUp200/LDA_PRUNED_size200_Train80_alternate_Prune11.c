// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.30%
// test_accuracy: 62.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 13:46:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.654759, 0.654820,
    0.030574, -0.030695,
    0.233805, -0.233788,
    0.160755, -0.160702,
    -0.921376, 0.921368,
    0.036803, -0.036803,
    0.414192, -0.414197,
    -0.003663, 0.003678,
    -1.134614, 1.134647,
    0.295712, -0.295781,
    -0.426538, 0.426564,
    0.969373, -0.969366,
};

float Cg_init[2] = {
    -0.471670, -0.471673
};

float xstd_init[12] = {
    0.001010, 0.000078, 0.010532, 0.079531, 0.002384, 0.000660, 0.075474, 0.159072, 0.000952, 0.000124, 0.020697, 0.078101
};

float xmean_init[12] = {
    0.006466, -0.007688, 0.004444, 0.144127, 0.008591, -0.006920, 0.098201, 0.443809, 0.004345, -0.007716, 0.012275, 0.136508
};


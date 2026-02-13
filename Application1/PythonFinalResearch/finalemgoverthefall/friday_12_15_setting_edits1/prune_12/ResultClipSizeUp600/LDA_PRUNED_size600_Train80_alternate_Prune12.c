// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.86%
// test_accuracy: 72.73%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:17:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.890233, 0.890188,
    0.382225, -0.382216,
    0.808419, -0.808391,
    0.501564, -0.501549,
    -0.613138, 0.613302,
    0.007837, -0.008019,
    0.109432, -0.109419,
    0.421426, -0.421406,
    0.233305, -0.233165,
    -0.438668, 0.438459,
    -0.379391, 0.379444,
    0.449808, -0.449794,
};

float Cg_init[2] = {
    -0.488218, -0.488193
};

float xstd_init[12] = {
    0.004160, 0.001732, 0.338836, 0.122856, 0.001210, 0.000214, 0.058235, 0.136507, 0.000697, 0.000184, 0.051649, 0.141960
};

float xmean_init[12] = {
    0.010126, -0.005826, 0.427272, 1.030909, 0.003483, -0.007745, 0.016212, 0.615636, 0.003524, -0.007728, 0.016364, 0.698545
};


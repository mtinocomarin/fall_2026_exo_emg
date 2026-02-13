// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.33%
// test_accuracy: 53.68%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-17 13:46:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.368769, 0.368685,
    0.229016, -0.228823,
    -0.026363, 0.026346,
    -0.094599, 0.094484,
    -0.313842, 0.313912,
    -0.237759, 0.237718,
    -0.138778, 0.138772,
    0.328427, -0.328429,
    -0.554779, 0.554886,
    0.324416, -0.324634,
    0.021186, -0.021124,
    0.112160, -0.112098,
};

float Cg_init[2] = {
    -0.174251, -0.174256
};

float xstd_init[12] = {
    0.001056, 0.000081, 0.012619, 0.080049, 0.003232, 0.000883, 0.093608, 0.185479, 0.000874, 0.000115, 0.019845, 0.077088
};

float xmean_init[12] = {
    0.006541, -0.007686, 0.004848, 0.147648, 0.008483, -0.006873, 0.102068, 0.429626, 0.004369, -0.007712, 0.011087, 0.127541
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.41%
// test_accuracy: 63.54%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:13:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.098912, 1.098913,
    0.270656, -0.270643,
    0.752466, -0.752465,
    0.381667, -0.381675,
    -0.143541, 0.143522,
    -0.131579, 0.131587,
    -0.019376, 0.019381,
    0.161859, -0.161851,
    -0.112579, 0.112499,
    -0.267553, 0.267656,
    -0.111337, 0.111308,
    0.477836, -0.477839,
};

float Cg_init[2] = {
    -0.353694, -0.353694
};

float xstd_init[12] = {
    0.004787, 0.002176, 0.350253, 0.120904, 0.001407, 0.000250, 0.063294, 0.136729, 0.000672, 0.000165, 0.052981, 0.136711
};

float xmean_init[12] = {
    0.011060, -0.005452, 0.469135, 1.039630, 0.003567, -0.007731, 0.019547, 0.626666, 0.003546, -0.007730, 0.014815, 0.705432
};


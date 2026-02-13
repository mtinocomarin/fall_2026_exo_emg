// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.76%
// test_accuracy: 56.25%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:43:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.426095, 0.425965,
    0.218916, -0.218590,
    0.152056, -0.152082,
    -0.109539, 0.109353,
    -0.593519, 0.593560,
    -0.217910, 0.217888,
    0.304323, -0.304323,
    0.309775, -0.309776,
    -0.468186, 0.468216,
    0.120881, -0.120938,
    -0.016272, 0.016299,
    0.173758, -0.173762,
};

float Cg_init[2] = {
    -0.187127, -0.187108
};

float xstd_init[12] = {
    0.001008, 0.000080, 0.011912, 0.081703, 0.002948, 0.000793, 0.082142, 0.177222, 0.000841, 0.000111, 0.017628, 0.070800
};

float xmean_init[12] = {
    0.006432, -0.007690, 0.004444, 0.142593, 0.008682, -0.006851, 0.100185, 0.443056, 0.004334, -0.007716, 0.008951, 0.127871
};


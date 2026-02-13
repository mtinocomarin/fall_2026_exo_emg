// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.92%
// test_accuracy: 70.62%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt']}
// generated: 2026-02-13 14:47:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.174661, 0.174725,
    -0.094515, 0.094353,
    -0.002639, 0.002670,
    -0.028296, 0.028358,
    1.831726, -1.831668,
    -1.679685, 1.679617,
    -0.075905, 0.075919,
    0.220975, -0.220974,
    -0.682451, 0.682456,
    -0.472673, 0.472692,
    0.261993, -0.262032,
    1.492165, -1.492142,
};

float Cg_init[2] = {
    -0.581894, -0.581882
};

float xstd_init[12] = {
    0.000907, 0.000080, 0.008744, 0.064997, 0.000779, 0.000135, 0.014506, 0.053500, 0.003479, 0.001042, 0.121765, 0.213319
};

float xmean_init[12] = {
    0.005530, -0.007757, 0.002278, 0.092417, 0.002411, -0.007845, 0.005056, 0.048583, 0.009107, -0.006567, 0.138889, 0.476833
};


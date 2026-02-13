// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.71%
// test_accuracy: 72.32%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:01:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.089187, -0.089207,
    -0.151665, 0.151733,
    -0.031169, 0.031162,
    -0.055962, 0.055918,
    1.444416, -1.444398,
    -1.220891, 1.220858,
    -0.288991, 0.289003,
    0.081411, -0.081406,
    -0.481463, 0.481427,
    -0.654023, 0.654078,
    0.351736, -0.351761,
    1.513300, -1.513302,
};

float Cg_init[2] = {
    -0.544644, -0.544648
};

float xstd_init[12] = {
    0.000856, 0.000074, 0.006981, 0.066305, 0.000759, 0.000134, 0.015702, 0.056736, 0.003408, 0.001039, 0.119768, 0.211923
};

float xmean_init[12] = {
    0.005533, -0.007761, 0.001481, 0.088995, 0.002420, -0.007844, 0.005362, 0.050794, 0.009032, -0.006616, 0.134886, 0.468783
};


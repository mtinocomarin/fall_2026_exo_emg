// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.25%
// test_accuracy: 75.00%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:02:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.703632, 0.703636,
    -0.169732, 0.169750,
    0.301052, -0.301063,
    0.575366, -0.575367,
    0.788869, -0.789075,
    -1.156775, 1.157076,
    0.331593, -0.331681,
    -0.111567, 0.111554,
    0.631238, -0.631185,
    -0.143207, 0.143122,
    -0.319124, 0.319144,
    0.192508, -0.192476,
};

float Cg_init[2] = {
    -0.395874, -0.395891
};

float xstd_init[12] = {
    0.003894, 0.001395, 0.096975, 0.164943, 0.001633, 0.000501, 0.030975, 0.083443, 0.000549, 0.000088, 0.017901, 0.065054
};

float xmean_init[12] = {
    0.009844, -0.006252, 0.168726, 0.567647, 0.003215, -0.007709, 0.007647, 0.048971, 0.003088, -0.007813, 0.003922, 0.062647
};


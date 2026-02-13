// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.22%
// test_accuracy: 76.04%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt']}
// generated: 2026-02-13 14:47:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.058143, -0.058191,
    -0.016233, 0.016323,
    -0.060000, 0.059990,
    -0.191038, 0.190996,
    1.783194, -1.783109,
    -1.629319, 1.629190,
    -0.177137, 0.177161,
    0.249154, -0.249125,
    -0.419813, 0.419816,
    -1.019531, 1.019513,
    0.324357, -0.324361,
    1.691423, -1.691411,
};

float Cg_init[2] = {
    -0.651310, -0.651282
};

float xstd_init[12] = {
    0.000895, 0.000081, 0.007870, 0.067934, 0.000792, 0.000140, 0.016202, 0.059961, 0.003305, 0.000951, 0.115948, 0.209951
};

float xmean_init[12] = {
    0.005584, -0.007758, 0.001643, 0.094203, 0.002408, -0.007844, 0.005894, 0.052754, 0.008983, -0.006655, 0.130145, 0.469276
};


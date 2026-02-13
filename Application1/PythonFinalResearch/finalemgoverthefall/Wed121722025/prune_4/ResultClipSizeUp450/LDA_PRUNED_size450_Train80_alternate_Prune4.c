// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.21%
// test_accuracy: 55.47%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:43:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.373999, 0.373861,
    0.186534, -0.186196,
    0.151392, -0.151416,
    -0.105314, 0.105125,
    -0.481663, 0.481735,
    -0.237804, 0.237759,
    0.254355, -0.254361,
    0.257158, -0.257166,
    -0.451010, 0.451015,
    0.130980, -0.130974,
    0.001334, -0.001325,
    0.186023, -0.186050,
};

float Cg_init[2] = {
    -0.164933, -0.164915
};

float xstd_init[12] = {
    0.001000, 0.000079, 0.011726, 0.081148, 0.002903, 0.000779, 0.081359, 0.175389, 0.000828, 0.000110, 0.018250, 0.070529
};

float xmean_init[12] = {
    0.006408, -0.007692, 0.004286, 0.141072, 0.008701, -0.006851, 0.101012, 0.445357, 0.004335, -0.007717, 0.009226, 0.127143
};


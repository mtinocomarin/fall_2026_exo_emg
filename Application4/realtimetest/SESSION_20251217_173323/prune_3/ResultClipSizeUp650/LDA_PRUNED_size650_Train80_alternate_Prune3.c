// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.77%
// test_accuracy: 73.33%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.171593, 0.171560,
    0.119866, -0.119770,
    0.164669, -0.164695,
    0.074615, -0.074647,
    0.627422, -0.627406,
    -0.725584, 0.725534,
    -0.833256, 0.833295,
    0.226192, -0.226215,
    -0.121562, 0.121572,
    -0.446545, 0.446560,
    0.299670, -0.299701,
    0.856285, -0.856270,
};

float Cg_init[2] = {
    -0.370557, -0.370553
};

float xstd_init[12] = {
    0.001144, 0.000180, 0.024711, 0.094924, 0.003212, 0.000968, 0.061467, 0.147871, 0.005528, 0.002198, 0.147157, 0.239131
};

float xmean_init[12] = {
    0.005576, -0.007703, 0.008403, 0.129375, 0.004546, -0.007428, 0.026319, 0.134271, 0.011604, -0.005817, 0.169306, 0.549062
};


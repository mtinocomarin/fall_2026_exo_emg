// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.74%
// test_accuracy: 71.67%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:08:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.446415, 0.446445,
    0.081708, -0.081776,
    0.398524, -0.398488,
    0.188749, -0.188741,
    0.746096, -0.746021,
    -0.695075, 0.695015,
    -1.054828, 1.054826,
    0.299994, -0.300007,
    -0.192033, 0.192001,
    -0.620520, 0.620533,
    0.382420, -0.382429,
    1.050877, -1.050855,
};

float Cg_init[2] = {
    -0.482955, -0.482953
};

float xstd_init[12] = {
    0.001184, 0.000188, 0.025311, 0.095917, 0.003078, 0.000950, 0.056984, 0.141184, 0.005649, 0.002270, 0.153271, 0.249878
};

float xmean_init[12] = {
    0.005609, -0.007697, 0.008254, 0.133929, 0.004454, -0.007451, 0.023651, 0.129643, 0.011693, -0.005761, 0.171826, 0.545714
};


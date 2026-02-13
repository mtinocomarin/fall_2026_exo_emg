// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.84%
// test_accuracy: 69.41%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt']}
// generated: 2025-12-17 18:09:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.370800, 0.370728,
    0.362866, -0.362736,
    -0.012146, 0.012114,
    0.138488, -0.138522,
    0.318272, -0.318340,
    -0.458498, 0.458542,
    -0.905814, 0.905824,
    0.201577, -0.201586,
    0.544772, -0.544748,
    -0.876686, 0.876688,
    0.430965, -0.431006,
    0.731303, -0.731283,
};

float Cg_init[2] = {
    -0.470082, -0.470072
};

float xstd_init[12] = {
    0.001070, 0.000141, 0.022448, 0.083843, 0.002920, 0.000908, 0.054531, 0.145556, 0.005608, 0.002242, 0.155050, 0.245871
};

float xmean_init[12] = {
    0.005520, -0.007711, 0.007662, 0.130498, 0.004408, -0.007472, 0.022685, 0.134299, 0.012075, -0.005661, 0.184073, 0.553755
};


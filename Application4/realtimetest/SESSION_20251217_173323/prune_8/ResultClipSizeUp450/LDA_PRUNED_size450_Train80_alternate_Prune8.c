// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.77%
// test_accuracy: 70.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 18:09:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.940089, 0.940110,
    1.048930, -1.049008,
    0.360617, -0.360572,
    -0.286568, 0.286595,
    0.872658, -0.872646,
    -0.610902, 0.610859,
    -1.687583, 1.687612,
    0.518406, -0.518401,
    -0.646073, 0.646089,
    -0.714815, 0.714795,
    0.325020, -0.325020,
    1.963052, -1.963046,
};

float Cg_init[2] = {
    -0.882485, -0.882489
};

float xstd_init[12] = {
    0.001075, 0.000108, 0.021583, 0.075740, 0.002594, 0.000710, 0.043336, 0.120941, 0.006012, 0.002567, 0.168974, 0.261300
};

float xmean_init[12] = {
    0.005431, -0.007728, 0.005455, 0.117727, 0.004140, -0.007591, 0.016061, 0.118636, 0.011872, -0.005557, 0.185303, 0.538863
};


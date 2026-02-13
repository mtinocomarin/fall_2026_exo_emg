// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.08%
// test_accuracy: 73.53%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_13.txt', 'act2\\trial_1.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 14:43:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.635494, 2.635428,
    1.612692, -1.612547,
    0.483384, -0.483405,
    -1.252837, 1.252764,
    -1.680179, 1.680215,
    0.076721, -0.076756,
    -0.678167, 0.678138,
    1.271848, -1.271819,
    0.567925, -0.568008,
    1.201684, -1.201530,
    -0.433808, 0.433784,
    -0.567902, 0.567850,
};

float Cg_init[2] = {
    -1.128412, -1.128380
};

float xstd_init[12] = {
    0.001190, 0.000169, 0.022306, 0.114110, 0.004010, 0.001124, 0.091732, 0.188746, 0.000912, 0.000158, 0.034281, 0.119425
};

float xmean_init[12] = {
    0.005928, -0.007650, 0.008889, 0.172549, 0.009749, -0.006479, 0.145098, 0.527059, 0.005165, -0.007549, 0.025882, 0.250980
};


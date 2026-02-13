// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.12%
// test_accuracy: 77.21%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_6.txt', 'act2\\trial_17.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 14:42:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.059235, 3.059342,
    1.544840, -1.545118,
    0.276780, -0.276703,
    -0.660794, 0.660916,
    -1.164518, 1.164507,
    0.077746, -0.077749,
    -0.283649, 0.283653,
    0.769060, -0.769067,
    0.800519, -0.800486,
    0.087683, -0.087734,
    0.083777, -0.083767,
    -0.321537, 0.321554,
};

float Cg_init[2] = {
    -1.048759, -1.048784
};

float xstd_init[12] = {
    0.001233, 0.000214, 0.032856, 0.138170, 0.003932, 0.001143, 0.084142, 0.168512, 0.000848, 0.000163, 0.033502, 0.117679
};

float xmean_init[12] = {
    0.006090, -0.007600, 0.016471, 0.207843, 0.010017, -0.006427, 0.140784, 0.551960, 0.005203, -0.007536, 0.029673, 0.266863
};


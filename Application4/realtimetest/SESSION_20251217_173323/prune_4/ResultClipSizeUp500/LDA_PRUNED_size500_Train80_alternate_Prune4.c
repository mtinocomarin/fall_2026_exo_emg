// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.70%
// test_accuracy: 68.89%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 18:08:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.410324, 0.410362,
    1.047606, -1.047704,
    -0.302972, 0.303006,
    -0.199310, 0.199337,
    0.217013, -0.216933,
    -0.006154, 0.006083,
    -1.151760, 1.151799,
    0.090795, -0.090821,
    -0.117080, 0.117052,
    -0.510869, 0.510901,
    0.369955, -0.369974,
    1.029446, -1.029445,
};

float Cg_init[2] = {
    -0.470933, -0.470950
};

float xstd_init[12] = {
    0.001036, 0.000132, 0.025514, 0.090068, 0.003008, 0.000914, 0.063074, 0.156416, 0.006011, 0.002444, 0.153744, 0.243379
};

float xmean_init[12] = {
    0.005502, -0.007711, 0.008395, 0.131704, 0.004446, -0.007479, 0.027160, 0.138963, 0.012148, -0.005603, 0.182519, 0.552148
};


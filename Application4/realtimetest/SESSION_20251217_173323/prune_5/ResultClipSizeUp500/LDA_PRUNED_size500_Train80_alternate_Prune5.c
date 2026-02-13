// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.52%
// test_accuracy: 68.89%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.538778, 0.538864,
    1.112530, -1.112762,
    -0.231915, 0.231988,
    -0.199887, 0.199954,
    0.061961, -0.061820,
    0.078486, -0.078619,
    -1.262476, 1.262563,
    0.271851, -0.271891,
    -0.125011, 0.124971,
    -0.550397, 0.550430,
    0.381846, -0.381858,
    1.097067, -1.097078,
};

float Cg_init[2] = {
    -0.514787, -0.514824
};

float xstd_init[12] = {
    0.001049, 0.000136, 0.026274, 0.091632, 0.003056, 0.000938, 0.061289, 0.155689, 0.006166, 0.002508, 0.158059, 0.249413
};

float xmean_init[12] = {
    0.005536, -0.007707, 0.008783, 0.135079, 0.004449, -0.007473, 0.026032, 0.136032, 0.012156, -0.005575, 0.182963, 0.551905
};


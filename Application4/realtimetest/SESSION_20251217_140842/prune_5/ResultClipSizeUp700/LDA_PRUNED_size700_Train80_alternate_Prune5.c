// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.21%
// test_accuracy: 69.23%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 14:40:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.866790, 1.866852,
    0.744770, -0.744926,
    0.274642, -0.274602,
    -0.187730, 0.187789,
    0.072139, -0.072110,
    -0.759425, 0.759382,
    -0.146867, 0.146865,
    0.412069, -0.412073,
    0.072792, -0.072734,
    0.295753, -0.295794,
    0.132718, -0.132712,
    -0.286158, 0.286160,
};

float Cg_init[2] = {
    -0.589459, -0.589466
};

float xstd_init[12] = {
    0.001034, 0.000178, 0.027596, 0.121723, 0.003635, 0.001104, 0.085596, 0.160291, 0.001059, 0.000163, 0.033081, 0.114412
};

float xmean_init[12] = {
    0.005895, -0.007631, 0.012494, 0.188951, 0.010490, -0.006339, 0.153194, 0.566433, 0.004966, -0.007573, 0.028531, 0.248951
};


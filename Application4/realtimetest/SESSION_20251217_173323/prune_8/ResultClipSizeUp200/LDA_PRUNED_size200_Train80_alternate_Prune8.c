// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 98.48%
// test_accuracy: 70.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_22.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 18:09:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.672379, 1.672347,
    1.876259, -1.876190,
    0.023507, -0.023519,
    0.331005, -0.331020,
    4.104804, -4.104786,
    -0.764916, 0.764903,
    -2.361678, 2.361654,
    -3.320050, 3.320043,
    1.154256, -1.154240,
    -3.833505, 3.833474,
    1.550504, -1.550481,
    2.920735, -2.920747,
};

float Cg_init[2] = {
    -1.509453, -1.509445
};

float xstd_init[12] = {
    0.001056, 0.000136, 0.024738, 0.092877, 0.002458, 0.000747, 0.048113, 0.143162, 0.004417, 0.001685, 0.178853, 0.262737
};

float xmean_init[12] = {
    0.005653, -0.007708, 0.008081, 0.138788, 0.004018, -0.007565, 0.020606, 0.123030, 0.011324, -0.006035, 0.185859, 0.538182
};


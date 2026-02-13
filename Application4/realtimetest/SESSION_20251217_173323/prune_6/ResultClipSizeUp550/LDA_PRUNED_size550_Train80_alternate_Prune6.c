// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.92%
// test_accuracy: 79.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 18:09:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.293120, 0.293081,
    0.170040, -0.169949,
    0.463150, -0.463175,
    0.041146, -0.041174,
    1.043698, -1.043726,
    -0.655260, 0.655273,
    -1.379786, 1.379792,
    0.319652, -0.319659,
    -0.853352, 0.853360,
    -0.463287, 0.463297,
    0.482760, -0.482783,
    1.525390, -1.525378,
};

float Cg_init[2] = {
    -0.611098, -0.611094
};

float xstd_init[12] = {
    0.001157, 0.000163, 0.026543, 0.093779, 0.002836, 0.000860, 0.057125, 0.140897, 0.005853, 0.002445, 0.156923, 0.250198
};

float xmean_init[12] = {
    0.005479, -0.007715, 0.008000, 0.121539, 0.004373, -0.007502, 0.023590, 0.133231, 0.011754, -0.005640, 0.178052, 0.549846
};


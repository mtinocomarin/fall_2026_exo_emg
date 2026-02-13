// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.45%
// test_accuracy: 79.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 18:09:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.551983, 0.551967,
    0.160367, -0.160339,
    0.759711, -0.759720,
    0.162043, -0.162051,
    1.162472, -1.162488,
    -0.798890, 0.798907,
    -1.695862, 1.695858,
    0.567757, -0.567758,
    -1.006732, 1.006745,
    -0.598820, 0.598814,
    0.490021, -0.490029,
    1.959583, -1.959582,
};

float Cg_init[2] = {
    -0.825826, -0.825825
};

float xstd_init[12] = {
    0.001144, 0.000159, 0.023372, 0.083615, 0.002776, 0.000828, 0.049337, 0.130881, 0.006007, 0.002561, 0.166613, 0.267306
};

float xmean_init[12] = {
    0.005452, -0.007716, 0.006909, 0.120546, 0.004312, -0.007529, 0.019394, 0.125636, 0.011686, -0.005581, 0.183152, 0.546000
};


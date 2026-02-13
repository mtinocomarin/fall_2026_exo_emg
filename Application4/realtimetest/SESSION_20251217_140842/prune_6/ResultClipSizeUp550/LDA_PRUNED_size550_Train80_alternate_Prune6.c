// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.50%
// test_accuracy: 65.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 14:41:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.135340, 2.135383,
    0.739489, -0.739591,
    0.258138, -0.258129,
    -0.215468, 0.215522,
    1.130791, -1.130781,
    -1.774088, 1.774093,
    -0.222496, 0.222489,
    0.159266, -0.159261,
    0.182826, -0.182860,
    0.257766, -0.257666,
    0.084028, -0.084042,
    -0.319191, 0.319143,
};

float Cg_init[2] = {
    -0.733309, -0.733308
};

float xstd_init[12] = {
    0.001004, 0.000174, 0.027242, 0.122945, 0.003901, 0.001187, 0.090499, 0.158139, 0.001106, 0.000169, 0.032156, 0.117255
};

float xmean_init[12] = {
    0.005905, -0.007621, 0.014400, 0.189800, 0.010652, -0.006259, 0.160533, 0.563600, 0.005043, -0.007564, 0.030267, 0.250200
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.91%
// test_accuracy: 72.86%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_14.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.277749, 0.277702,
    0.081669, -0.081562,
    0.325531, -0.325553,
    0.198383, -0.198413,
    0.892031, -0.892033,
    -0.874741, 0.874708,
    -0.820594, 0.820628,
    0.006193, -0.006214,
    -0.183088, 0.183097,
    -0.561673, 0.561695,
    0.295363, -0.295405,
    1.125549, -1.125524,
};

float Cg_init[2] = {
    -0.455390, -0.455383
};

float xstd_init[12] = {
    0.001192, 0.000193, 0.024628, 0.094547, 0.003037, 0.000913, 0.058756, 0.142323, 0.005563, 0.002189, 0.150623, 0.249107
};

float xmean_init[12] = {
    0.005637, -0.007696, 0.008571, 0.133776, 0.004452, -0.007457, 0.024422, 0.132449, 0.011710, -0.005775, 0.171701, 0.543775
};


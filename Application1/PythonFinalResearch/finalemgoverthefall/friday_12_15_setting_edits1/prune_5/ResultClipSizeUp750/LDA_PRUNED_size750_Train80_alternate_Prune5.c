// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.66%
// test_accuracy: 66.96%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:13:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.539755, 0.539801,
    -0.031758, 0.031745,
    0.575051, -0.575075,
    0.279791, -0.279797,
    -0.391388, 0.391294,
    0.102476, -0.102382,
    0.029086, -0.029086,
    0.097316, -0.097334,
    0.255975, -0.256071,
    -0.371158, 0.371366,
    -0.209316, 0.209226,
    0.388299, -0.388335,
};

float Cg_init[2] = {
    -0.228743, -0.228757
};

float xstd_init[12] = {
    0.004383, 0.002031, 0.349422, 0.123789, 0.001056, 0.000185, 0.046564, 0.133222, 0.000644, 0.000158, 0.047867, 0.138368
};

float xmean_init[12] = {
    0.010272, -0.005718, 0.433687, 1.036720, 0.003374, -0.007765, 0.011287, 0.620424, 0.003514, -0.007736, 0.013668, 0.698836
};


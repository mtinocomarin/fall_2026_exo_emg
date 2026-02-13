// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.32%
// test_accuracy: 68.42%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:14:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.659889, 0.659922,
    0.117157, -0.117203,
    0.719500, -0.719515,
    0.227262, -0.227255,
    -0.460474, 0.460620,
    0.211951, -0.212105,
    0.014396, -0.014398,
    0.195994, -0.195981,
    0.249857, -0.249697,
    -0.305738, 0.305489,
    -0.277404, 0.277480,
    0.306060, -0.306026,
};

float Cg_init[2] = {
    -0.247601, -0.247597
};

float xstd_init[12] = {
    0.003864, 0.001683, 0.336331, 0.122668, 0.000938, 0.000166, 0.042669, 0.131612, 0.000633, 0.000154, 0.045484, 0.138736
};

float xmean_init[12] = {
    0.010007, -0.005854, 0.425896, 1.041263, 0.003311, -0.007776, 0.008982, 0.616926, 0.003489, -0.007741, 0.012842, 0.689515
};


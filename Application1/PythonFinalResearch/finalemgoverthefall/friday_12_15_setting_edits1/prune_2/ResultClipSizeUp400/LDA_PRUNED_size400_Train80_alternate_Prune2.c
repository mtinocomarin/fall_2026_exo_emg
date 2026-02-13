// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.05%
// test_accuracy: 72.32%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:11:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.753866, 0.753825,
    0.105108, -0.105071,
    0.457320, -0.457307,
    0.323385, -0.323387,
    -0.337433, 0.337478,
    0.036647, -0.036697,
    0.008007, -0.008003,
    0.157953, -0.157940,
    -0.017033, 0.016948,
    -0.038232, 0.038352,
    -0.369825, 0.369787,
    0.241668, -0.241673,
};

float Cg_init[2] = {
    -0.250777, -0.250771
};

float xstd_init[12] = {
    0.004897, 0.002286, 0.349625, 0.122178, 0.001274, 0.000229, 0.057533, 0.133611, 0.000667, 0.000156, 0.050428, 0.142293
};

float xmean_init[12] = {
    0.011015, -0.005429, 0.466666, 1.030667, 0.003481, -0.007744, 0.015238, 0.617238, 0.003544, -0.007731, 0.016984, 0.696762
};


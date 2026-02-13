// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.69%
// test_accuracy: 64.84%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:12:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.781148, 0.781132,
    0.002025, -0.002011,
    0.606546, -0.606535,
    0.283544, -0.283553,
    -0.323977, 0.323986,
    0.072695, -0.072707,
    -0.030448, 0.030450,
    0.124863, -0.124856,
    0.237923, -0.237946,
    -0.290959, 0.290973,
    -0.251611, 0.251616,
    0.333105, -0.333105,
};

float Cg_init[2] = {
    -0.256238, -0.256239
};

float xstd_init[12] = {
    0.004943, 0.002346, 0.358260, 0.123119, 0.001257, 0.000220, 0.056362, 0.135310, 0.000675, 0.000167, 0.052850, 0.138925
};

float xmean_init[12] = {
    0.010977, -0.005430, 0.465327, 1.036161, 0.003485, -0.007745, 0.016518, 0.629821, 0.003546, -0.007731, 0.015774, 0.700179
};


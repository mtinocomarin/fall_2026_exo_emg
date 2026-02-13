// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.00%
// test_accuracy: 65.62%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:14:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.646132, 0.646115,
    -0.145891, 0.145907,
    0.683963, -0.683955,
    0.353984, -0.353992,
    -0.521460, 0.521569,
    0.126806, -0.126920,
    0.041303, -0.041309,
    0.181364, -0.181350,
    0.204884, -0.204924,
    -0.347758, 0.347796,
    -0.242628, 0.242623,
    0.365439, -0.365443,
};

float Cg_init[2] = {
    -0.312171, -0.312173
};

float xstd_init[12] = {
    0.004779, 0.002181, 0.349984, 0.124672, 0.001314, 0.000231, 0.058618, 0.136768, 0.000687, 0.000172, 0.053915, 0.139317
};

float xmean_init[12] = {
    0.010755, -0.005574, 0.450833, 1.031300, 0.003517, -0.007739, 0.017167, 0.626100, 0.003544, -0.007731, 0.016000, 0.697300
};


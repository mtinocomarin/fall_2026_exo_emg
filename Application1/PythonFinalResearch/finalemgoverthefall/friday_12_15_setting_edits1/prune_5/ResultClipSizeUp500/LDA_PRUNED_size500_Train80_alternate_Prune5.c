// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.66%
// test_accuracy: 71.53%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:13:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.692630, 0.692602,
    0.058524, -0.058508,
    0.532740, -0.532725,
    0.432830, -0.432832,
    -0.428876, 0.428952,
    0.062402, -0.062473,
    0.026996, -0.027003,
    0.227491, -0.227481,
    0.156597, -0.156612,
    -0.190452, 0.190462,
    -0.401113, 0.401115,
    0.259632, -0.259632,
};

float Cg_init[2] = {
    -0.298350, -0.298348
};

float xstd_init[12] = {
    0.004651, 0.002160, 0.346851, 0.119480, 0.001223, 0.000218, 0.055018, 0.134375, 0.000689, 0.000168, 0.050687, 0.146348
};

float xmean_init[12] = {
    0.010745, -0.005539, 0.458847, 1.030617, 0.003481, -0.007746, 0.014403, 0.620411, 0.003566, -0.007727, 0.017010, 0.702057
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.26%
// test_accuracy: 73.61%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_3.txt', 'act1\\trial_35.txt', 'act1\\trial_8.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:17:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.814643, 0.814644,
    0.198864, -0.198864,
    0.983953, -0.983955,
    0.520475, -0.520471,
    -0.823709, 0.823651,
    0.224079, -0.224018,
    0.048442, -0.048444,
    0.285281, -0.285275,
    0.263969, -0.264023,
    -0.364796, 0.364851,
    -0.503619, 0.503610,
    0.355936, -0.355919,
};

float Cg_init[2] = {
    -0.531126, -0.531122
};

float xstd_init[12] = {
    0.004246, 0.001787, 0.336535, 0.124929, 0.001313, 0.000230, 0.061307, 0.137103, 0.000706, 0.000186, 0.053652, 0.142063
};

float xmean_init[12] = {
    0.010226, -0.005845, 0.419883, 1.023860, 0.003525, -0.007739, 0.016764, 0.614152, 0.003518, -0.007733, 0.016179, 0.687719
};


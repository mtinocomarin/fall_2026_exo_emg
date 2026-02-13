// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 66.67%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-12 13:17:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.686989, 0.687024,
    -0.137942, 0.137937,
    0.784776, -0.784778,
    0.423336, -0.423361,
    -0.572946, 0.572769,
    0.141971, -0.141796,
    0.082997, -0.083001,
    0.164078, -0.164087,
    0.338075, -0.338288,
    -0.271764, 0.272139,
    -0.298418, 0.298289,
    0.556204, -0.556264,
};

float Cg_init[2] = {
    -0.394793, -0.394804
};

float xstd_init[12] = {
    0.004689, 0.002273, 0.362127, 0.126557, 0.001097, 0.000198, 0.048374, 0.136370, 0.000612, 0.000140, 0.042639, 0.138355
};

float xmean_init[12] = {
    0.010820, -0.005450, 0.472638, 1.040084, 0.003428, -0.007754, 0.013194, 0.622916, 0.003528, -0.007739, 0.011806, 0.703333
};


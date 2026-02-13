// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.02%
// test_accuracy: 66.78%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt', 'act2\\trial_17.txt', 'act2\\trial_23.txt', 'act2\\trial_3.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:18:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.558789, 0.558794,
    0.067122, -0.067109,
    0.862133, -0.862148,
    0.250650, -0.250648,
    -0.599926, 0.600055,
    0.260590, -0.260730,
    0.001670, -0.001670,
    0.264940, -0.264931,
    0.361550, -0.361618,
    -0.427658, 0.427750,
    -0.364269, 0.364252,
    0.450123, -0.450149,
};

float Cg_init[2] = {
    -0.372114, -0.372131
};

float xstd_init[12] = {
    0.003711, 0.001581, 0.342806, 0.124764, 0.000911, 0.000163, 0.039719, 0.130780, 0.000666, 0.000167, 0.049274, 0.141698
};

float xmean_init[12] = {
    0.010137, -0.005832, 0.450195, 1.042281, 0.003320, -0.007774, 0.008285, 0.613509, 0.003507, -0.007737, 0.013938, 0.694270
};


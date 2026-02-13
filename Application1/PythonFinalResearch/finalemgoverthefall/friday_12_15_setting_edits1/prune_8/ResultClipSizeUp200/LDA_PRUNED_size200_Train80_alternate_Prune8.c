// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.36%
// test_accuracy: 81.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:14:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.534310, 1.534324,
    0.361444, -0.361452,
    1.131443, -1.131442,
    0.609582, -0.609587,
    -0.369594, 0.369656,
    0.148008, -0.148075,
    -0.092338, 0.092340,
    0.283710, -0.283703,
    -0.235726, 0.235652,
    -0.009676, 0.009778,
    -0.448529, 0.448501,
    0.465205, -0.465206,
};

float Cg_init[2] = {
    -0.608583, -0.608587
};

float xstd_init[12] = {
    0.004435, 0.002031, 0.344200, 0.111006, 0.001607, 0.000296, 0.075815, 0.143773, 0.000686, 0.000160, 0.040647, 0.147844
};

float xmean_init[12] = {
    0.011199, -0.005452, 0.468519, 1.047222, 0.003646, -0.007719, 0.020833, 0.622500, 0.003594, -0.007727, 0.013426, 0.697778
};


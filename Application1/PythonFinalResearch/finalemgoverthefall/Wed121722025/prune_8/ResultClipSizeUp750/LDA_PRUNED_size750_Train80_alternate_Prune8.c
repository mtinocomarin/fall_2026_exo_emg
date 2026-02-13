// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.15%
// test_accuracy: 50.45%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 13:45:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.642684, 0.642682,
    0.480105, -0.480086,
    -0.053703, 0.053704,
    -0.279202, 0.279179,
    -0.375214, 0.375241,
    -0.345783, 0.345772,
    0.127248, -0.127273,
    0.338797, -0.338788,
    -0.540736, 0.540761,
    0.330851, -0.330874,
    -0.065537, 0.065549,
    0.115894, -0.115908,
};

float Cg_init[2] = {
    -0.211638, -0.211641
};

float xstd_init[12] = {
    0.001045, 0.000082, 0.012548, 0.080441, 0.003156, 0.000845, 0.091244, 0.186509, 0.000865, 0.000114, 0.019671, 0.073620
};

float xmean_init[12] = {
    0.006480, -0.007686, 0.004762, 0.145417, 0.008535, -0.006867, 0.102540, 0.435417, 0.004416, -0.007709, 0.010635, 0.131132
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.32%
// test_accuracy: 66.52%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:15:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.603968, 0.603993,
    0.099573, -0.099607,
    0.658743, -0.658734,
    0.287063, -0.287063,
    -0.538248, 0.538145,
    0.168804, -0.168705,
    0.054091, -0.054081,
    0.053006, -0.053018,
    0.371100, -0.371087,
    -0.491362, 0.491388,
    -0.227434, 0.227410,
    0.502422, -0.502437,
};

float Cg_init[2] = {
    -0.305357, -0.305356
};

float xstd_init[12] = {
    0.004185, 0.001836, 0.352032, 0.123314, 0.001101, 0.000194, 0.049127, 0.135044, 0.000642, 0.000160, 0.049012, 0.135597
};

float xmean_init[12] = {
    0.010293, -0.005742, 0.438591, 1.036964, 0.003389, -0.007762, 0.012500, 0.616250, 0.003502, -0.007739, 0.013194, 0.698334
};


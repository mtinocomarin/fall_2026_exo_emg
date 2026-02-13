// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.20%
// test_accuracy: 66.07%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:14:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.567983, 0.568037,
    -0.044740, 0.044725,
    0.650193, -0.650208,
    0.287877, -0.287894,
    -0.468513, 0.468311,
    0.169772, -0.169569,
    0.037553, -0.037550,
    0.055009, -0.055032,
    0.333523, -0.333661,
    -0.446409, 0.446685,
    -0.191385, 0.191273,
    0.431431, -0.431478,
};

float Cg_init[2] = {
    -0.256255, -0.256273
};

float xstd_init[12] = {
    0.004391, 0.002040, 0.351133, 0.124305, 0.001070, 0.000187, 0.047399, 0.132711, 0.000644, 0.000158, 0.047501, 0.137668
};

float xmean_init[12] = {
    0.010289, -0.005712, 0.433975, 1.036978, 0.003378, -0.007765, 0.011722, 0.618242, 0.003509, -0.007737, 0.012821, 0.699011
};


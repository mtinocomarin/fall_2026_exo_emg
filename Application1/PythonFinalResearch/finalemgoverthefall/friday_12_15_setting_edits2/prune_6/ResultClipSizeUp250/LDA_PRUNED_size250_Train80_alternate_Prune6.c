// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.35%
// test_accuracy: 87.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 12:38:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.613032, 1.613072,
    0.619095, -0.619104,
    0.246234, -0.246258,
    1.527899, -1.527889,
    0.094459, -0.094647,
    -0.370301, 0.370475,
    0.115209, -0.115180,
    -0.421691, 0.421670,
    -0.323158, 0.323097,
    0.256610, -0.256511,
    -0.680776, 0.680755,
    0.079815, -0.079841,
};

float Cg_init[2] = {
    -0.672740, -0.672744
};

float xstd_init[12] = {
    0.004419, 0.001995, 0.145985, 0.189204, 0.001548, 0.000284, 0.038426, 0.102155, 0.000651, 0.000165, 0.031454, 0.105223
};

float xmean_init[12] = {
    0.011140, -0.005487, 0.250513, 0.705962, 0.003616, -0.007715, 0.012564, 0.088269, 0.003557, -0.007722, 0.013333, 0.127115
};


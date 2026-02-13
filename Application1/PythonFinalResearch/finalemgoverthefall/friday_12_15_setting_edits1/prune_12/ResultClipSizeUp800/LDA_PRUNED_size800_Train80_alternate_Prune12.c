// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.67%
// test_accuracy: 71.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt', 'act2\\trial_40.txt', 'act2\\trial_14.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 13:17:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.739937, 0.739928,
    0.315276, -0.315310,
    0.740215, -0.740171,
    0.422658, -0.422643,
    -0.751346, 0.751310,
    0.291136, -0.291085,
    0.056309, -0.056316,
    0.202368, -0.202367,
    0.440551, -0.440375,
    -0.568683, 0.568403,
    -0.338208, 0.338295,
    0.499702, -0.499675,
};

float Cg_init[2] = {
    -0.433480, -0.433450
};

float xstd_init[12] = {
    0.003825, 0.001549, 0.334320, 0.122782, 0.001120, 0.000202, 0.052621, 0.128790, 0.000651, 0.000167, 0.049833, 0.136985
};

float xmean_init[12] = {
    0.010005, -0.005901, 0.425554, 1.037600, 0.003414, -0.007756, 0.013556, 0.616600, 0.003487, -0.007737, 0.014222, 0.697200
};


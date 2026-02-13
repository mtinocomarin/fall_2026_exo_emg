// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.03%
// test_accuracy: 58.33%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 13:45:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.630111, 0.630095,
    -0.018988, 0.019012,
    0.241299, -0.241302,
    0.205018, -0.205027,
    -0.857059, 0.857037,
    0.018334, -0.018303,
    0.441408, -0.441409,
    -0.108672, 0.108663,
    -0.887436, 0.887428,
    0.216852, -0.216822,
    -0.302933, 0.302923,
    0.731830, -0.731841,
};

float Cg_init[2] = {
    -0.397221, -0.397219
};

float xstd_init[12] = {
    0.001047, 0.000080, 0.010131, 0.083198, 0.002336, 0.000636, 0.073081, 0.154303, 0.000933, 0.000118, 0.019775, 0.075762
};

float xmean_init[12] = {
    0.006414, -0.007688, 0.004074, 0.143889, 0.008501, -0.006939, 0.093333, 0.440556, 0.004359, -0.007716, 0.010741, 0.136667
};


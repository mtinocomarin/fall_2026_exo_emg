// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.48%
// test_accuracy: 51.04%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:45:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.618464, 0.618461,
    0.375150, -0.375130,
    0.013980, -0.013980,
    -0.216462, 0.216445,
    -0.561566, 0.561629,
    -0.234662, 0.234612,
    0.239290, -0.239306,
    0.297698, -0.297694,
    -0.559742, 0.559787,
    0.278846, -0.278899,
    0.007454, -0.007435,
    0.172959, -0.172963,
};

float Cg_init[2] = {
    -0.226318, -0.226327
};

float xstd_init[12] = {
    0.001047, 0.000081, 0.012547, 0.082385, 0.003047, 0.000827, 0.089127, 0.180710, 0.000860, 0.000114, 0.019873, 0.072577
};

float xmean_init[12] = {
    0.006474, -0.007686, 0.004676, 0.145486, 0.008531, -0.006871, 0.101852, 0.434931, 0.004413, -0.007711, 0.010463, 0.132362
};


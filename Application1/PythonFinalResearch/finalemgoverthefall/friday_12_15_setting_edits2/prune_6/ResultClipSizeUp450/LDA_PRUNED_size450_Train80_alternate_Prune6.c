// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.10%
// test_accuracy: 78.91%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 12:38:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.873813, 0.873818,
    0.217640, -0.217642,
    0.189485, -0.189503,
    0.991176, -0.991161,
    -0.625469, 0.625715,
    0.241048, -0.241303,
    0.071779, -0.071811,
    -0.214687, 0.214723,
    0.290604, -0.290585,
    -0.050078, 0.050014,
    -0.704306, 0.704339,
    0.030138, -0.030142,
};

float Cg_init[2] = {
    -0.417394, -0.417399
};

float xstd_init[12] = {
    0.004400, 0.001853, 0.146274, 0.205349, 0.001303, 0.000230, 0.033699, 0.094689, 0.000683, 0.000174, 0.031362, 0.105234
};

float xmean_init[12] = {
    0.010489, -0.005708, 0.239167, 0.676250, 0.003491, -0.007741, 0.011859, 0.083077, 0.003529, -0.007731, 0.013397, 0.116827
};


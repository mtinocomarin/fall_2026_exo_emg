// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.61%
// test_accuracy: 59.38%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 13:45:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.064800, 1.064639,
    0.304117, -0.303848,
    0.119515, -0.119541,
    0.111959, -0.112093,
    -0.436075, 0.436118,
    -0.131577, 0.131595,
    -0.001520, 0.001486,
    0.030002, -0.030023,
    -1.148914, 1.148809,
    0.582750, -0.582598,
    -0.418108, 0.418038,
    0.540285, -0.540296,
};

float Cg_init[2] = {
    -0.445591, -0.445552
};

float xstd_init[12] = {
    0.001057, 0.000079, 0.011676, 0.080317, 0.002418, 0.000686, 0.077362, 0.158879, 0.000948, 0.000127, 0.018912, 0.070980
};

float xmean_init[12] = {
    0.006474, -0.007688, 0.004783, 0.141304, 0.008480, -0.006909, 0.098841, 0.446522, 0.004394, -0.007710, 0.009420, 0.136087
};


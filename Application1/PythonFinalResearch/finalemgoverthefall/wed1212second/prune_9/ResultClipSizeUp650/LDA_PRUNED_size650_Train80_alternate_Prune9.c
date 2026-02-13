// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.04%
// test_accuracy: 74.48%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:03:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.302727, 0.302799,
    -0.143147, 0.143122,
    -0.120153, 0.120157,
    0.116286, -0.116284,
    1.852564, -1.852915,
    -1.506821, 1.507294,
    -0.022337, 0.022245,
    0.115856, -0.115947,
    -0.527476, 0.527510,
    -0.491409, 0.491371,
    0.437292, -0.437315,
    1.257765, -1.257758,
};

float Cg_init[2] = {
    -0.612118, -0.612235
};

float xstd_init[12] = {
    0.000898, 0.000078, 0.008072, 0.064420, 0.000700, 0.000113, 0.013883, 0.051040, 0.003387, 0.001013, 0.118267, 0.210749
};

float xmean_init[12] = {
    0.005573, -0.007756, 0.002126, 0.092609, 0.002375, -0.007853, 0.004493, 0.045870, 0.008943, -0.006618, 0.134542, 0.467319
};


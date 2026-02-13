// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.54%
// test_accuracy: 75.96%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 17:02:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.181695, 0.181672,
    -0.157741, 0.157812,
    -0.010811, 0.010805,
    0.041522, -0.041569,
    1.567533, -1.567539,
    -1.199817, 1.199804,
    -0.075215, 0.075225,
    0.168157, -0.168157,
    -0.664126, 0.664163,
    -0.367219, 0.367185,
    0.390743, -0.390766,
    1.115317, -1.115300,
};

float Cg_init[2] = {
    -0.498231, -0.498236
};

float xstd_init[12] = {
    0.000877, 0.000074, 0.008232, 0.064425, 0.000652, 0.000100, 0.014098, 0.050033, 0.003477, 0.001048, 0.119269, 0.213174
};

float xmean_init[12] = {
    0.005547, -0.007757, 0.002133, 0.092493, 0.002354, -0.007857, 0.004390, 0.044862, 0.009135, -0.006557, 0.137929, 0.477723
};


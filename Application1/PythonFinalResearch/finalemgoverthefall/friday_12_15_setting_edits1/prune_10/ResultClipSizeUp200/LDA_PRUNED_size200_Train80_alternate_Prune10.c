// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.91%
// test_accuracy: 83.33%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:15:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.344301, 1.344294,
    0.176264, -0.176261,
    1.302040, -1.302038,
    0.581733, -0.581734,
    -0.211909, 0.212024,
    -0.062863, 0.062752,
    -0.133275, 0.133269,
    0.336482, -0.336479,
    -0.147312, 0.147319,
    -0.030769, 0.030752,
    -0.554845, 0.554851,
    0.434992, -0.434991,
};

float Cg_init[2] = {
    -0.674001, -0.674003
};

float xstd_init[12] = {
    0.004249, 0.001981, 0.325586, 0.111479, 0.001665, 0.000307, 0.078867, 0.143522, 0.000666, 0.000163, 0.042027, 0.144588
};

float xmean_init[12] = {
    0.010936, -0.005573, 0.442425, 1.042424, 0.003686, -0.007710, 0.022222, 0.622424, 0.003579, -0.007728, 0.014141, 0.693636
};


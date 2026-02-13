// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.30%
// test_accuracy: 75.42%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:53:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.911668, 0.911522,
    -0.049724, 0.049825,
    0.752852, -0.752872,
    0.690499, -0.690440,
    1.185148, -1.185232,
    -1.123201, 1.123238,
    -0.329546, 0.329610,
    -0.029212, 0.029200,
    0.690063, -0.690348,
    0.099814, -0.098981,
    -0.494257, 0.493921,
    -0.042139, 0.041846,
};

float Cg_init[2] = {
    -0.646207, -0.646200
};

float xstd_init[12] = {
    0.003126, 0.001095, 0.103137, 0.169425, 0.001319, 0.000405, 0.021232, 0.072870, 0.000521, 0.000077, 0.016213, 0.061343
};

float xmean_init[12] = {
    0.009542, -0.006330, 0.175299, 0.591158, 0.003107, -0.007749, 0.005942, 0.050807, 0.003105, -0.007814, 0.003977, 0.064211
};


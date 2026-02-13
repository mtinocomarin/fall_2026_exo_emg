// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.26%
// test_accuracy: 51.56%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 13:48:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.929741, 0.929851,
    0.631248, -0.631425,
    -0.063222, 0.063242,
    -0.292446, 0.292535,
    -0.657941, 0.657913,
    -0.109312, 0.109310,
    0.286323, -0.286302,
    0.129635, -0.129577,
    -0.771760, 0.771936,
    0.404174, -0.404493,
    -0.026713, 0.026774,
    0.188746, -0.188655,
};

float Cg_init[2] = {
    -0.342858, -0.342922
};

float xstd_init[12] = {
    0.001105, 0.000082, 0.012291, 0.081416, 0.003071, 0.000846, 0.093035, 0.180382, 0.000869, 0.000110, 0.018380, 0.071292
};

float xmean_init[12] = {
    0.006500, -0.007685, 0.004386, 0.143246, 0.008543, -0.006854, 0.105556, 0.442719, 0.004344, -0.007721, 0.009415, 0.124035
};


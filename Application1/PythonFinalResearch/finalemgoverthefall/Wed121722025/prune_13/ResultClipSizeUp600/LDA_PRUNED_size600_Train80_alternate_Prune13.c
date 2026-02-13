// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.78%
// test_accuracy: 53.98%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:48:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.143155, 1.143254,
    0.629537, -0.629749,
    -0.119259, 0.119290,
    -0.300145, 0.300257,
    -0.267399, 0.267375,
    -0.432137, 0.432177,
    0.183580, -0.183594,
    0.237404, -0.237388,
    -0.775578, 0.775621,
    0.274811, -0.274865,
    0.091547, -0.091551,
    0.163443, -0.163439,
};

float Cg_init[2] = {
    -0.393720, -0.393759
};

float xstd_init[12] = {
    0.001096, 0.000082, 0.010428, 0.082767, 0.003168, 0.000883, 0.095955, 0.188408, 0.000875, 0.000115, 0.018489, 0.073172
};

float xmean_init[12] = {
    0.006516, -0.007685, 0.003509, 0.143445, 0.008556, -0.006842, 0.107815, 0.436938, 0.004411, -0.007710, 0.009633, 0.133493
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.91%
// test_accuracy: 72.08%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_37.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt', 'act2\\trial_40.txt', 'act2\\trial_14.txt', 'act2\\trial_3.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:17:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.788526, 0.788530,
    0.279353, -0.279388,
    0.822929, -0.822900,
    0.427771, -0.427753,
    -0.679993, 0.680086,
    0.249542, -0.249637,
    0.060933, -0.060931,
    0.200757, -0.200753,
    0.452548, -0.452406,
    -0.564353, 0.564130,
    -0.362208, 0.362277,
    0.510516, -0.510502,
};

float Cg_init[2] = {
    -0.442251, -0.442233
};

float xstd_init[12] = {
    0.003842, 0.001559, 0.340561, 0.123713, 0.001106, 0.000202, 0.051404, 0.129214, 0.000660, 0.000169, 0.049424, 0.137502
};

float xmean_init[12] = {
    0.010019, -0.005898, 0.426548, 1.036561, 0.003399, -0.007758, 0.012398, 0.616281, 0.003486, -0.007737, 0.014035, 0.697193
};


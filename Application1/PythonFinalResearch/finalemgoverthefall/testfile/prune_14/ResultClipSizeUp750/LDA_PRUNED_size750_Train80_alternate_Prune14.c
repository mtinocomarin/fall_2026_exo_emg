// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.48%
// test_accuracy: 71.88%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_27.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2026-02-13 14:50:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.655923, 0.655801,
    -0.086437, 0.086698,
    -0.161416, 0.161385,
    0.384220, -0.384349,
    2.267045, -2.267043,
    -1.868983, 1.868943,
    0.106560, -0.106547,
    0.256699, -0.256679,
    -0.720342, 0.720369,
    -0.376088, 0.376044,
    0.675773, -0.675786,
    1.448940, -1.448921,
};

float Cg_init[2] = {
    -0.885157, -0.885150
};

float xstd_init[12] = {
    0.000945, 0.000082, 0.008391, 0.065490, 0.000733, 0.000115, 0.014843, 0.052977, 0.003267, 0.000978, 0.120129, 0.217287
};

float xmean_init[12] = {
    0.005725, -0.007747, 0.002434, 0.097699, 0.002399, -0.007851, 0.004921, 0.047699, 0.008715, -0.006639, 0.134075, 0.464048
};


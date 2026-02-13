// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.56%
// test_accuracy: 69.58%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt']}
// generated: 2026-02-13 14:50:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.331638, 0.331447,
    -0.181871, 0.182301,
    -0.014727, 0.014663,
    0.121839, -0.122044,
    2.093028, -2.093106,
    -1.371504, 1.371547,
    -0.022451, 0.022461,
    0.174877, -0.174874,
    -1.165297, 1.165334,
    -0.029799, 0.029774,
    0.582287, -0.582310,
    1.380466, -1.380490,
};

float Cg_init[2] = {
    -0.791805, -0.791845
};

float xstd_init[12] = {
    0.000946, 0.000079, 0.009289, 0.068246, 0.000691, 0.000102, 0.015041, 0.052591, 0.003472, 0.001078, 0.123625, 0.217307
};

float xmean_init[12] = {
    0.005718, -0.007745, 0.002716, 0.100000, 0.002395, -0.007851, 0.004938, 0.050074, 0.009143, -0.006495, 0.148642, 0.489259
};


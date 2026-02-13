// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.68%
// test_accuracy: 75.52%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_16.txt', 'act2\\trial_27.txt']}
// generated: 2026-02-13 14:48:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.340611, 0.340600,
    -0.161683, 0.161812,
    -0.143951, 0.143933,
    0.175078, -0.175146,
    1.907903, -1.908160,
    -1.569813, 1.570123,
    -0.021147, 0.021094,
    0.101664, -0.101706,
    -0.388733, 0.388780,
    -0.724987, 0.724937,
    0.408154, -0.408176,
    1.306531, -1.306520,
};

float Cg_init[2] = {
    -0.637903, -0.637986
};

float xstd_init[12] = {
    0.000896, 0.000080, 0.008209, 0.064850, 0.000716, 0.000116, 0.014168, 0.051732, 0.003409, 0.000978, 0.113952, 0.205735
};

float xmean_init[12] = {
    0.005641, -0.007753, 0.002169, 0.095000, 0.002394, -0.007852, 0.004603, 0.046825, 0.008851, -0.006672, 0.127038, 0.457857
};


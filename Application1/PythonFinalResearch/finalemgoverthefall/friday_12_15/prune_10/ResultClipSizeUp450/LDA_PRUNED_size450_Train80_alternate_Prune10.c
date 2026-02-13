// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.49%
// test_accuracy: 78.12%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 12:44:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.373225, 1.373234,
    0.354578, -0.354590,
    0.232357, -0.232387,
    1.483708, -1.483692,
    -0.316068, 0.315935,
    0.134030, -0.133890,
    -0.178553, 0.178582,
    -0.231629, 0.231602,
    0.381021, -0.380912,
    -0.056923, 0.056713,
    -0.921405, 0.921456,
    0.002854, -0.002790,
};

float Cg_init[2] = {
    -0.604770, -0.604768
};

float xstd_init[12] = {
    0.004384, 0.001870, 0.151412, 0.206774, 0.001323, 0.000229, 0.034474, 0.090981, 0.000695, 0.000180, 0.032550, 0.107150
};

float xmean_init[12] = {
    0.010798, -0.005563, 0.252879, 0.698409, 0.003504, -0.007743, 0.011667, 0.080682, 0.003569, -0.007721, 0.014773, 0.124432
};


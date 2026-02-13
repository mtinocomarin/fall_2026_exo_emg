// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 72.22%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_3.txt', 'act1\\trial_35.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:17:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.776994, 0.776998,
    0.065951, -0.065952,
    0.955571, -0.955560,
    0.515215, -0.515217,
    -0.748492, 0.748475,
    0.227878, -0.227860,
    0.058511, -0.058517,
    0.242298, -0.242289,
    0.134280, -0.134443,
    -0.215771, 0.215975,
    -0.479941, 0.479895,
    0.321945, -0.321941,
};

float Cg_init[2] = {
    -0.471280, -0.471278
};

float xstd_init[12] = {
    0.004319, 0.001839, 0.347394, 0.125756, 0.001286, 0.000225, 0.059862, 0.135670, 0.000709, 0.000184, 0.052895, 0.142808
};

float xmean_init[12] = {
    0.010435, -0.005749, 0.441851, 1.027778, 0.003502, -0.007742, 0.015926, 0.613999, 0.003545, -0.007728, 0.016852, 0.690555
};


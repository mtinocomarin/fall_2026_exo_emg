// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.57%
// test_accuracy: 54.04%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 13:45:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.406656, 0.406502,
    0.246597, -0.246215,
    -0.038883, 0.038847,
    -0.112987, 0.112776,
    -0.227420, 0.227482,
    -0.266549, 0.266531,
    -0.111741, 0.111724,
    0.333964, -0.333971,
    -0.541467, 0.541581,
    0.296466, -0.296714,
    0.052564, -0.052486,
    0.084390, -0.084319,
};

float Cg_init[2] = {
    -0.157468, -0.157456
};

float xstd_init[12] = {
    0.001047, 0.000084, 0.012528, 0.080869, 0.003203, 0.000869, 0.092726, 0.186215, 0.000863, 0.000112, 0.019565, 0.075923
};

float xmean_init[12] = {
    0.006574, -0.007683, 0.004771, 0.148726, 0.008550, -0.006858, 0.103889, 0.433922, 0.004343, -0.007714, 0.010817, 0.128138
};


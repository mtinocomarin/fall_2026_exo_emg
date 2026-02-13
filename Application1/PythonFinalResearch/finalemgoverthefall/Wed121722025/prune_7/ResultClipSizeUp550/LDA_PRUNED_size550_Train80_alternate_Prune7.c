// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.40%
// test_accuracy: 52.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:44:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.528498, 0.528488,
    0.319201, -0.319145,
    0.042157, -0.042162,
    -0.235587, 0.235547,
    -0.716691, 0.716739,
    -0.124733, 0.124701,
    0.341462, -0.341475,
    0.287562, -0.287559,
    -0.535867, 0.535922,
    0.214754, -0.214830,
    -0.024117, 0.024143,
    0.198144, -0.198137,
};

float Cg_init[2] = {
    -0.218224, -0.218234
};

float xstd_init[12] = {
    0.001030, 0.000080, 0.012168, 0.080356, 0.003055, 0.000820, 0.089608, 0.179403, 0.000833, 0.000107, 0.019000, 0.070402
};

float xmean_init[12] = {
    0.006474, -0.007689, 0.004480, 0.144080, 0.008626, -0.006854, 0.104427, 0.439360, 0.004372, -0.007715, 0.010027, 0.128800
};


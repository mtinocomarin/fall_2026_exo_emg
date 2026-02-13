// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.13%
// test_accuracy: 74.22%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:52:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.226743, 1.226709,
    -0.073895, 0.073885,
    0.582195, -0.582221,
    1.273635, -1.273585,
    1.341621, -1.341644,
    -1.353263, 1.353336,
    -0.000532, 0.000507,
    -0.250105, 0.250075,
    -0.778269, 0.778102,
    0.626611, -0.626124,
    -0.694690, 0.694512,
    0.285026, -0.285242,
};

float Cg_init[2] = {
    -0.640176, -0.640142
};

float xstd_init[12] = {
    0.003865, 0.001461, 0.107169, 0.176986, 0.001792, 0.000554, 0.032968, 0.090760, 0.001729, 0.000098, 0.021418, 0.067432
};

float xmean_init[12] = {
    0.009886, -0.006213, 0.172632, 0.579868, 0.003365, -0.007700, 0.008772, 0.056711, 0.003366, -0.007797, 0.006404, 0.073158
};


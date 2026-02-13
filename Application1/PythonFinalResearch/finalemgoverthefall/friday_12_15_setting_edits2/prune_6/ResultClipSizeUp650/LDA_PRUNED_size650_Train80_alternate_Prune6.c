// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 12:39:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.639766, 0.639803,
    0.078998, -0.079044,
    0.378879, -0.378920,
    0.622108, -0.622083,
    -0.472544, 0.472408,
    0.186357, -0.186192,
    0.033514, -0.033492,
    -0.121931, 0.121881,
    0.211220, -0.211070,
    -0.125749, 0.125540,
    -0.486855, 0.486903,
    0.075014, -0.074978,
};

float Cg_init[2] = {
    -0.274429, -0.274425
};

float xstd_init[12] = {
    0.004458, 0.002050, 0.151114, 0.204382, 0.001138, 0.000201, 0.029384, 0.085238, 0.000674, 0.000167, 0.030293, 0.106796
};

float xmean_init[12] = {
    0.010462, -0.005631, 0.247693, 0.688782, 0.003416, -0.007756, 0.009701, 0.079808, 0.003538, -0.007730, 0.013504, 0.119936
};


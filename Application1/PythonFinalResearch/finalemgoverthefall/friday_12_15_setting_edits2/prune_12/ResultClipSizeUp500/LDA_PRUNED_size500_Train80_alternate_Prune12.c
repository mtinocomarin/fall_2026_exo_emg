// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.39%
// test_accuracy: 77.08%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 12:41:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.229221, 1.229242,
    0.373637, -0.373651,
    0.435506, -0.435528,
    1.186625, -1.186611,
    -0.652167, 0.652294,
    0.339230, -0.339364,
    0.032323, -0.032330,
    -0.279383, 0.279392,
    0.447702, -0.447667,
    -0.180571, 0.180508,
    -0.427052, 0.427073,
    -0.078826, 0.078823,
};

float Cg_init[2] = {
    -0.529894, -0.529900
};

float xstd_init[12] = {
    0.004433, 0.001937, 0.153830, 0.207666, 0.001351, 0.000243, 0.034987, 0.098594, 0.000652, 0.000160, 0.025080, 0.099065
};

float xmean_init[12] = {
    0.010627, -0.005624, 0.242667, 0.681889, 0.003581, -0.007729, 0.013481, 0.088667, 0.003527, -0.007736, 0.010370, 0.116334
};


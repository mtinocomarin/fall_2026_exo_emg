// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.78%
// test_accuracy: 75.00%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 16:09:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.114802, 1.114847,
    -0.115388, 0.115365,
    0.594780, -0.594807,
    1.121645, -1.121641,
    1.246015, -1.246105,
    -1.360293, 1.360407,
    -0.007907, 0.007895,
    -0.198022, 0.198014,
    -0.698847, 0.698886,
    0.674222, -0.674267,
    -0.697059, 0.697079,
    0.223345, -0.223333,
};

float Cg_init[2] = {
    -0.598522, -0.598544
};

float xstd_init[12] = {
    0.003894, 0.001475, 0.104479, 0.171679, 0.001798, 0.000560, 0.032492, 0.089150, 0.001624, 0.000094, 0.020453, 0.068841
};

float xmean_init[12] = {
    0.009941, -0.006230, 0.166667, 0.581023, 0.003413, -0.007680, 0.009091, 0.058523, 0.003345, -0.007800, 0.006439, 0.072500
};


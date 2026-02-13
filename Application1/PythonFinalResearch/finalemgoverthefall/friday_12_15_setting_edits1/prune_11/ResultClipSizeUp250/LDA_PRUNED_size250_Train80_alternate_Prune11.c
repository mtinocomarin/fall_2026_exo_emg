// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 76.56%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-12 13:16:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.707816, 1.707809,
    0.485147, -0.485132,
    1.250968, -1.250980,
    0.399742, -0.399731,
    0.023259, -0.023209,
    -0.161269, 0.161211,
    -0.158300, 0.158308,
    0.275417, -0.275415,
    -0.230396, 0.230334,
    -0.205081, 0.205173,
    0.001705, -0.001736,
    0.344855, -0.344860,
};

float Cg_init[2] = {
    -0.531855, -0.531854
};

float xstd_init[12] = {
    0.004642, 0.002152, 0.355718, 0.121190, 0.001544, 0.000296, 0.064491, 0.145220, 0.000638, 0.000147, 0.043132, 0.147594
};

float xmean_init[12] = {
    0.011249, -0.005457, 0.476190, 1.039286, 0.003689, -0.007705, 0.021032, 0.642857, 0.003549, -0.007738, 0.012698, 0.701666
};


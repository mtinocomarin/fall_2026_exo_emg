// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.77%
// test_accuracy: 65.18%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:17:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.455210, 0.455207,
    0.004757, -0.004782,
    0.849411, -0.849367,
    0.405337, -0.405354,
    -0.876886, 0.876806,
    0.190625, -0.190539,
    0.254176, -0.254174,
    0.129335, -0.129329,
    0.269032, -0.268961,
    -0.257623, 0.257509,
    -0.362882, 0.362924,
    0.592399, -0.592390,
};

float Cg_init[2] = {
    -0.466717, -0.466709
};

float xstd_init[12] = {
    0.004163, 0.001871, 0.353626, 0.128203, 0.001142, 0.000198, 0.053176, 0.133988, 0.000595, 0.000136, 0.041668, 0.138982
};

float xmean_init[12] = {
    0.010379, -0.005679, 0.451252, 1.039023, 0.003434, -0.007754, 0.013910, 0.621654, 0.003497, -0.007743, 0.011404, 0.701279
};


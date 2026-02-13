// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.94%
// test_accuracy: 68.23%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_26.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 13:16:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.590307, 0.590328,
    -0.136435, 0.136442,
    0.810436, -0.810436,
    0.386339, -0.386354,
    -0.558930, 0.558894,
    0.135126, -0.135088,
    0.065469, -0.065473,
    0.145059, -0.145061,
    0.285442, -0.285644,
    -0.407681, 0.408002,
    -0.306171, 0.306057,
    0.565809, -0.565847,
};

float Cg_init[2] = {
    -0.388717, -0.388733
};

float xstd_init[12] = {
    0.004651, 0.002233, 0.362749, 0.125385, 0.001076, 0.000195, 0.047405, 0.136121, 0.000686, 0.000172, 0.052401, 0.139026
};

float xmean_init[12] = {
    0.010857, -0.005451, 0.482274, 1.041349, 0.003413, -0.007757, 0.012831, 0.621746, 0.003570, -0.007726, 0.015212, 0.707064
};


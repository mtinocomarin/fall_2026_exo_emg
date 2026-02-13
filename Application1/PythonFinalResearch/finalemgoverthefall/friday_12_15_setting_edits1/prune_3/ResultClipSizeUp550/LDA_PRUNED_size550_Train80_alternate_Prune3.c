// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.07%
// test_accuracy: 68.12%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:12:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.675538, 0.675518,
    0.036840, -0.036874,
    0.520073, -0.520038,
    0.308511, -0.308512,
    -0.315550, 0.315638,
    0.024892, -0.024964,
    0.011767, -0.011774,
    0.134226, -0.134229,
    0.196188, -0.195996,
    -0.257830, 0.257529,
    -0.234839, 0.234943,
    0.297769, -0.297742,
};

float Cg_init[2] = {
    -0.225215, -0.225204
};

float xstd_init[12] = {
    0.004641, 0.002128, 0.348924, 0.122206, 0.001164, 0.000203, 0.051474, 0.136633, 0.000665, 0.000164, 0.050285, 0.139348
};

float xmean_init[12] = {
    0.010644, -0.005579, 0.449539, 1.032276, 0.003432, -0.007754, 0.013793, 0.626069, 0.003535, -0.007733, 0.015057, 0.699310
};


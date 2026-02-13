// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.07%
// test_accuracy: 71.63%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:12:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.542447, 0.542452,
    -0.048687, 0.048669,
    0.501357, -0.501363,
    0.299666, -0.299653,
    -0.446009, 0.445948,
    0.178343, -0.178268,
    -0.009587, 0.009581,
    0.169308, -0.169307,
    0.174808, -0.174694,
    -0.222847, 0.222676,
    -0.323806, 0.323860,
    0.305035, -0.305018,
};

float Cg_init[2] = {
    -0.220494, -0.220489
};

float xstd_init[12] = {
    0.004530, 0.002116, 0.344875, 0.121458, 0.001044, 0.000186, 0.047624, 0.131984, 0.000653, 0.000159, 0.045582, 0.140093
};

float xmean_init[12] = {
    0.010399, -0.005657, 0.439877, 1.036976, 0.003368, -0.007765, 0.011317, 0.616339, 0.003519, -0.007734, 0.014766, 0.697931
};


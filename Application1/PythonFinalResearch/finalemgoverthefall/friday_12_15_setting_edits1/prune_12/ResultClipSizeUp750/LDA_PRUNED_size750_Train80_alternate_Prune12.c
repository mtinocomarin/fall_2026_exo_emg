// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.46%
// test_accuracy: 65.62%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:17:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.474718, 0.474693,
    0.003399, -0.003408,
    0.786350, -0.786299,
    0.376345, -0.376358,
    -0.798109, 0.797921,
    0.246333, -0.246129,
    0.135618, -0.135611,
    0.130892, -0.130894,
    0.310990, -0.310835,
    -0.256070, 0.255817,
    -0.340836, 0.340927,
    0.518703, -0.518669,
};

float Cg_init[2] = {
    -0.419808, -0.419792
};

float xstd_init[12] = {
    0.004139, 0.001846, 0.350954, 0.127001, 0.001185, 0.000209, 0.052881, 0.134474, 0.000589, 0.000134, 0.040687, 0.138395
};

float xmean_init[12] = {
    0.010259, -0.005736, 0.439284, 1.038429, 0.003455, -0.007750, 0.014167, 0.619357, 0.003481, -0.007746, 0.010833, 0.699000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.17%
// test_accuracy: 73.03%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2026-02-13 14:46:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.244319, 0.244137,
    -0.084150, 0.084526,
    0.017472, -0.017507,
    0.143052, -0.143258,
    1.242912, -1.242741,
    -0.808982, 0.808706,
    -0.069945, 0.070016,
    0.093990, -0.093946,
    -0.437469, 0.437465,
    -0.280668, 0.280713,
    0.273433, -0.273476,
    0.817857, -0.817869,
};

float Cg_init[2] = {
    -0.358898, -0.358861
};

float xstd_init[12] = {
    0.000901, 0.000070, 0.007761, 0.062900, 0.000634, 0.000096, 0.012507, 0.049021, 0.003214, 0.000996, 0.116509, 0.203742
};

float xmean_init[12] = {
    0.005484, -0.007760, 0.001970, 0.090446, 0.002304, -0.007863, 0.003590, 0.042065, 0.008899, -0.006620, 0.133631, 0.474291
};


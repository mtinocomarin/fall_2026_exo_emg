// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.52%
// test_accuracy: 55.36%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_12.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 13:48:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.799730, 0.799682,
    0.280151, -0.280031,
    0.329794, -0.329806,
    -0.156776, 0.156710,
    -0.518432, 0.518428,
    -0.174575, 0.174559,
    0.268318, -0.268300,
    0.052375, -0.052383,
    -1.053168, 1.053121,
    0.465295, -0.465199,
    -0.257857, 0.257841,
    0.416327, -0.416370,
};

float Cg_init[2] = {
    -0.450288, -0.450266
};

float xstd_init[12] = {
    0.001013, 0.000075, 0.010759, 0.077119, 0.002983, 0.000813, 0.086654, 0.169937, 0.000811, 0.000085, 0.015189, 0.069435
};

float xmean_init[12] = {
    0.006503, -0.007688, 0.003810, 0.140318, 0.008555, -0.006899, 0.096931, 0.433492, 0.004290, -0.007729, 0.007619, 0.126508
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.11%
// test_accuracy: 80.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:17:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.390142, 1.390136,
    0.466142, -0.466131,
    1.003318, -1.003316,
    0.595285, -0.595280,
    -0.140232, 0.140280,
    -0.071024, 0.070975,
    -0.269539, 0.269537,
    0.360908, -0.360904,
    -0.566558, 0.566462,
    0.160927, -0.160798,
    -0.368363, 0.368322,
    0.373276, -0.373273,
};

float Cg_init[2] = {
    -0.571125, -0.571118
};

float xstd_init[12] = {
    0.004492, 0.001905, 0.326374, 0.120065, 0.001282, 0.000210, 0.061590, 0.139277, 0.000723, 0.000171, 0.053511, 0.146527
};

float xmean_init[12] = {
    0.010786, -0.005674, 0.444912, 1.029474, 0.003517, -0.007745, 0.017895, 0.615790, 0.003599, -0.007727, 0.018246, 0.703368
};


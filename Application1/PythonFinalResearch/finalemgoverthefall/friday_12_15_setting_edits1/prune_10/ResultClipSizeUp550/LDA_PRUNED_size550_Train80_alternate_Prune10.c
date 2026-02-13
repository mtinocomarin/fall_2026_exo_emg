// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.55%
// test_accuracy: 67.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:16:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.651731, 0.651701,
    -0.079132, 0.079146,
    0.870062, -0.870045,
    0.403741, -0.403741,
    -0.639138, 0.639324,
    0.196481, -0.196676,
    0.010157, -0.010153,
    0.247238, -0.247224,
    0.251525, -0.251553,
    -0.377908, 0.377931,
    -0.310549, 0.310544,
    0.437711, -0.437716,
};

float Cg_init[2] = {
    -0.416384, -0.416383
};

float xstd_init[12] = {
    0.004660, 0.002177, 0.353553, 0.126195, 0.001205, 0.000220, 0.050181, 0.137615, 0.000705, 0.000178, 0.054600, 0.137356
};

float xmean_init[12] = {
    0.010742, -0.005532, 0.463333, 1.033818, 0.003492, -0.007743, 0.015000, 0.622636, 0.003576, -0.007723, 0.016061, 0.707000
};


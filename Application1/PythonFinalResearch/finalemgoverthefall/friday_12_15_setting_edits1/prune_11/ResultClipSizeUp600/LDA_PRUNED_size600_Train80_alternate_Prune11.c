// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.25%
// test_accuracy: 73.30%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 13:16:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.829467, 0.829428,
    0.368732, -0.368725,
    0.765115, -0.765091,
    0.479430, -0.479421,
    -0.648042, 0.648159,
    0.117024, -0.117152,
    0.029531, -0.029524,
    0.396762, -0.396745,
    0.170898, -0.170773,
    -0.363890, 0.363719,
    -0.366018, 0.366060,
    0.402209, -0.402205,
};

float Cg_init[2] = {
    -0.461415, -0.461397
};

float xstd_init[12] = {
    0.004115, 0.001701, 0.333983, 0.122068, 0.001253, 0.000224, 0.057954, 0.134964, 0.000687, 0.000180, 0.050522, 0.140735
};

float xmean_init[12] = {
    0.010073, -0.005856, 0.420345, 1.031515, 0.003507, -0.007740, 0.016595, 0.615757, 0.003505, -0.007732, 0.015584, 0.695931
};


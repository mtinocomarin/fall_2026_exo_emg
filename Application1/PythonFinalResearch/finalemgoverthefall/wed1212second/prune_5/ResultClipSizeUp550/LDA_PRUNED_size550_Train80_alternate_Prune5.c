// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 73.12%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:01:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.117660, 0.117760,
    -0.121670, 0.121467,
    -0.002447, 0.002481,
    -0.016136, 0.016217,
    1.707299, -1.707357,
    -1.520450, 1.520553,
    -0.046800, 0.046781,
    0.143207, -0.143240,
    -0.554270, 0.554279,
    -0.459958, 0.459975,
    0.189526, -0.189561,
    1.283611, -1.283596,
};

float Cg_init[2] = {
    -0.478104, -0.478123
};

float xstd_init[12] = {
    0.000869, 0.000077, 0.008407, 0.063295, 0.000745, 0.000128, 0.013892, 0.053237, 0.003467, 0.001017, 0.118627, 0.208036
};

float xmean_init[12] = {
    0.005513, -0.007758, 0.002123, 0.090667, 0.002390, -0.007848, 0.004691, 0.048296, 0.009093, -0.006594, 0.136889, 0.473926
};


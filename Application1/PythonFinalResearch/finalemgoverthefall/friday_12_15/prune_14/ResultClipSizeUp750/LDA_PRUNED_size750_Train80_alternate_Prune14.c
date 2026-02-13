// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.12%
// test_accuracy: 68.30%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 12:47:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.835186, 0.835172,
    0.202860, -0.202826,
    0.670011, -0.670032,
    0.802323, -0.802306,
    -0.718752, 0.718812,
    0.340197, -0.340260,
    0.037454, -0.037460,
    -0.117291, 0.117289,
    0.470280, -0.470335,
    -0.327111, 0.327245,
    -0.645031, 0.645002,
    0.160145, -0.160209,
};

float Cg_init[2] = {
    -0.465906, -0.465913
};

float xstd_init[12] = {
    0.004136, 0.001820, 0.158651, 0.210762, 0.001187, 0.000203, 0.031593, 0.085720, 0.000691, 0.000179, 0.030676, 0.108120
};

float xmean_init[12] = {
    0.010433, -0.005666, 0.257461, 0.698016, 0.003444, -0.007755, 0.010423, 0.080159, 0.003533, -0.007725, 0.012593, 0.123969
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.87%
// test_accuracy: 76.39%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 12:44:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.136630, 1.136632,
    0.351724, -0.351715,
    0.337417, -0.337441,
    1.116102, -1.116094,
    -0.471550, 0.471495,
    0.186146, -0.186070,
    0.023154, -0.023151,
    -0.272852, 0.272833,
    0.328767, -0.328739,
    -0.020212, 0.020154,
    -0.565737, 0.565755,
    -0.143022, 0.143036,
};

float Cg_init[2] = {
    -0.482994, -0.482997
};

float xstd_init[12] = {
    0.004406, 0.001931, 0.150242, 0.205178, 0.001310, 0.000236, 0.033584, 0.096360, 0.000648, 0.000158, 0.026209, 0.100308
};

float xmean_init[12] = {
    0.010682, -0.005587, 0.245455, 0.687273, 0.003537, -0.007735, 0.012391, 0.086263, 0.003543, -0.007732, 0.011717, 0.120202
};


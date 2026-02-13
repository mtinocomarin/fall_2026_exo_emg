// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.86%
// test_accuracy: 87.50%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:17:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.368161, 1.368168,
    0.305704, -0.305699,
    1.211720, -1.211731,
    0.551320, -0.551317,
    0.271497, -0.271544,
    -0.592326, 0.592373,
    -0.275600, 0.275607,
    0.450644, -0.450645,
    -0.082476, 0.082429,
    -0.201706, 0.201772,
    -0.549939, 0.549922,
    0.372526, -0.372521,
};

float Cg_init[2] = {
    -0.692550, -0.692552
};

float xstd_init[12] = {
    0.003973, 0.001787, 0.321040, 0.112181, 0.001360, 0.000231, 0.060827, 0.148142, 0.000702, 0.000173, 0.044614, 0.146635
};

float xmean_init[12] = {
    0.010488, -0.005815, 0.409942, 1.038245, 0.003571, -0.007738, 0.015205, 0.622807, 0.003568, -0.007728, 0.015789, 0.690877
};


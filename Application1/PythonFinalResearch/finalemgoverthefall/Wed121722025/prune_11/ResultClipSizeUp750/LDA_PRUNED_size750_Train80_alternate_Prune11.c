// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.53%
// test_accuracy: 50.00%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-17 13:47:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.798189, 0.798293,
    0.510383, -0.510551,
    -0.045068, 0.045082,
    -0.271903, 0.271980,
    -0.428552, 0.428576,
    -0.264809, 0.264805,
    0.121009, -0.121024,
    0.264261, -0.264245,
    -0.608856, 0.608960,
    0.398299, -0.398462,
    -0.088973, 0.089009,
    0.132127, -0.132094,
};

float Cg_init[2] = {
    -0.266019, -0.266067
};

float xstd_init[12] = {
    0.001085, 0.000082, 0.012873, 0.081295, 0.003145, 0.000847, 0.090696, 0.184361, 0.000851, 0.000108, 0.018798, 0.071754
};

float xmean_init[12] = {
    0.006499, -0.007685, 0.004943, 0.145306, 0.008437, -0.006886, 0.100363, 0.433129, 0.004439, -0.007711, 0.009977, 0.130953
};


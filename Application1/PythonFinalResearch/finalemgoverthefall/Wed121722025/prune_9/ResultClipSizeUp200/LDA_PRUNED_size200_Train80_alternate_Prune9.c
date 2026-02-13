// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.06%
// test_accuracy: 54.17%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-17 13:45:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.601244, 0.601250,
    0.049646, -0.049659,
    0.226302, -0.226305,
    0.218601, -0.218593,
    -0.950541, 0.950521,
    0.063321, -0.063297,
    0.503453, -0.503452,
    -0.118959, 0.118970,
    -0.828561, 0.828602,
    0.148969, -0.149062,
    -0.294977, 0.295012,
    0.788072, -0.788052,
};

float Cg_init[2] = {
    -0.397175, -0.397178
};

float xstd_init[12] = {
    0.001030, 0.000077, 0.010314, 0.079451, 0.002364, 0.000647, 0.074049, 0.156164, 0.000937, 0.000119, 0.020073, 0.076176
};

float xmean_init[12] = {
    0.006383, -0.007691, 0.004251, 0.140000, 0.008557, -0.006928, 0.094106, 0.444638, 0.004344, -0.007717, 0.011208, 0.135652
};


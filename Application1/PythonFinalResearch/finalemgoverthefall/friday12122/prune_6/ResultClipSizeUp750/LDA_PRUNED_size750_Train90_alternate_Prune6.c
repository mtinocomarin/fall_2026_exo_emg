// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.57%
// test_accuracy: 77.68%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:05:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.539097, 0.539040,
    -0.387817, 0.387841,
    0.360590, -0.360598,
    0.629845, -0.629819,
    0.837350, -0.837211,
    -0.915800, 0.915640,
    -0.011380, 0.011412,
    -0.113350, 0.113337,
    0.670611, -0.670826,
    0.022056, -0.021446,
    -0.366611, 0.366425,
    -0.070820, 0.070544,
};

float Cg_init[2] = {
    -0.413484, -0.413470
};

float xstd_init[12] = {
    0.003611, 0.001322, 0.104027, 0.166920, 0.001350, 0.000421, 0.024744, 0.073103, 0.000518, 0.000072, 0.014651, 0.063442
};

float xmean_init[12] = {
    0.009668, -0.006295, 0.174667, 0.583286, 0.003100, -0.007744, 0.006349, 0.048476, 0.003093, -0.007814, 0.003651, 0.064238
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.07%
// test_accuracy: 73.56%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:13:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.619419, 0.619447,
    -0.066387, 0.066355,
    0.578453, -0.578460,
    0.322670, -0.322661,
    -0.468048, 0.468040,
    0.192682, -0.192672,
    -0.011338, 0.011336,
    0.210327, -0.210321,
    0.257136, -0.257077,
    -0.305066, 0.304972,
    -0.312879, 0.312910,
    0.354187, -0.354182,
};

float Cg_init[2] = {
    -0.254473, -0.254470
};

float xstd_init[12] = {
    0.004593, 0.002155, 0.350412, 0.120028, 0.001064, 0.000190, 0.049256, 0.131583, 0.000659, 0.000162, 0.045994, 0.138501
};

float xmean_init[12] = {
    0.010491, -0.005616, 0.446819, 1.039772, 0.003385, -0.007763, 0.012156, 0.618005, 0.003533, -0.007731, 0.014530, 0.701653
};


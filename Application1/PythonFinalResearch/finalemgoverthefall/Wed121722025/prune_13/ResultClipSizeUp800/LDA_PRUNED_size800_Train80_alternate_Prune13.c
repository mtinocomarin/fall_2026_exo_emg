// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.96%
// test_accuracy: 53.33%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_8.txt', 'act1\\trial_12.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 13:48:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.593114, 0.593268,
    0.385419, -0.385713,
    -0.052603, 0.052638,
    -0.255556, 0.255697,
    -0.274412, 0.274339,
    -0.353708, 0.353839,
    -0.016104, 0.016067,
    0.224504, -0.224467,
    -0.626957, 0.627138,
    0.377701, -0.378034,
    0.035318, -0.035268,
    0.120427, -0.120331,
};

float Cg_init[2] = {
    -0.235088, -0.235151
};

float xstd_init[12] = {
    0.001101, 0.000082, 0.011926, 0.081623, 0.003144, 0.000843, 0.090459, 0.184113, 0.000868, 0.000120, 0.019460, 0.076303
};

float xmean_init[12] = {
    0.006578, -0.007685, 0.004632, 0.146948, 0.008353, -0.006909, 0.099135, 0.427790, 0.004423, -0.007708, 0.010713, 0.130527
};


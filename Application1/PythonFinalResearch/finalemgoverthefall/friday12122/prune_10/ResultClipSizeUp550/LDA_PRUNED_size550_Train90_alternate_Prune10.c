// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.42%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:07:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.869281, 0.869321,
    -0.119492, 0.119495,
    0.535214, -0.535241,
    0.890646, -0.890646,
    0.996226, -0.996248,
    -0.885773, 0.885773,
    -0.209858, 0.209869,
    -0.172601, 0.172612,
    -0.538571, 0.538790,
    0.330292, -0.330806,
    -0.388075, 0.388251,
    0.194533, -0.194321,
};

float Cg_init[2] = {
    -0.440378, -0.440412
};

float xstd_init[12] = {
    0.003527, 0.001206, 0.100613, 0.170173, 0.001586, 0.000467, 0.024787, 0.075536, 0.001780, 0.000092, 0.017603, 0.067346
};

float xmean_init[12] = {
    0.009767, -0.006318, 0.170513, 0.581154, 0.003263, -0.007719, 0.006974, 0.051923, 0.003266, -0.007808, 0.005077, 0.068000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.41%
// test_accuracy: 73.44%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:50:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.166066, 1.166093,
    0.005646, -0.005652,
    0.544476, -0.544513,
    1.052204, -1.052186,
    1.085251, -1.085336,
    -1.129138, 1.129267,
    -0.050038, 0.050015,
    -0.090531, 0.090513,
    -0.577406, 0.577430,
    0.528753, -0.528765,
    -0.538980, 0.538987,
    0.182845, -0.182846,
};

float Cg_init[2] = {
    -0.509764, -0.509779
};

float xstd_init[12] = {
    0.003753, 0.001386, 0.103382, 0.174860, 0.001664, 0.000509, 0.030211, 0.084550, 0.001588, 0.000092, 0.019642, 0.064256
};

float xmean_init[12] = {
    0.009782, -0.006260, 0.173769, 0.581630, 0.003245, -0.007724, 0.007609, 0.051087, 0.003282, -0.007805, 0.005362, 0.068587
};


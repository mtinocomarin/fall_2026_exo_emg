// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 79.17%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt']}
// generated: 2025-12-12 15:49:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.736972, 0.737007,
    -0.561047, 0.561026,
    1.282897, -1.282864,
    0.392378, -0.392411,
    1.394003, -1.394049,
    -1.483894, 1.484060,
    -0.179994, 0.179882,
    0.273392, -0.273396,
    1.401556, -1.401378,
    -1.130680, 1.130273,
    -0.345453, 0.345561,
    0.721027, -0.720871,
};

float Cg_init[2] = {
    -0.892919, -0.892867
};

float xstd_init[12] = {
    0.003220, 0.001109, 0.095213, 0.158556, 0.001540, 0.000493, 0.026923, 0.077965, 0.000534, 0.000101, 0.018125, 0.064005
};

float xmean_init[12] = {
    0.009621, -0.006290, 0.168000, 0.568533, 0.003128, -0.007735, 0.006578, 0.045600, 0.003153, -0.007801, 0.004444, 0.068000
};


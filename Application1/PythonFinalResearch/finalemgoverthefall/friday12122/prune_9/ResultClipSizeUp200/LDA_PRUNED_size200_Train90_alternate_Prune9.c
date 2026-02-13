// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 91.98%
// test_accuracy: 87.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:06:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.322630, 1.322640,
    -0.169016, 0.169017,
    1.262971, -1.262965,
    0.626328, -0.626340,
    2.083157, -2.083216,
    -2.471375, 2.471448,
    0.282744, -0.282767,
    0.031216, -0.031210,
    1.128769, -1.128721,
    -0.561674, 0.561572,
    -0.520742, 0.520767,
    0.537096, -0.537058,
};

float Cg_init[2] = {
    -0.966306, -0.966304
};

float xstd_init[12] = {
    0.003403, 0.001196, 0.094186, 0.157577, 0.001630, 0.000526, 0.027207, 0.080031, 0.000565, 0.000101, 0.018209, 0.067974
};

float xmean_init[12] = {
    0.009773, -0.006267, 0.164938, 0.572346, 0.003262, -0.007696, 0.007078, 0.051111, 0.003178, -0.007801, 0.005103, 0.068642
};


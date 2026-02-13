// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.74%
// test_accuracy: 68.75%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_13.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-12 12:47:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.926664, 0.926731,
    0.436900, -0.436955,
    0.735837, -0.735883,
    0.898038, -0.898029,
    -0.863285, 0.863802,
    0.480607, -0.481197,
    -0.072031, 0.072051,
    -0.042451, 0.042488,
    0.454976, -0.454877,
    -0.403084, 0.402881,
    -0.539956, 0.540041,
    0.120216, -0.120213,
};

float Cg_init[2] = {
    -0.555709, -0.555739
};

float xstd_init[12] = {
    0.003853, 0.001650, 0.154373, 0.208234, 0.001142, 0.000200, 0.030096, 0.082875, 0.000696, 0.000178, 0.028947, 0.108299
};

float xmean_init[12] = {
    0.010121, -0.005820, 0.247507, 0.683704, 0.003440, -0.007756, 0.010420, 0.079111, 0.003521, -0.007729, 0.011753, 0.121630
};


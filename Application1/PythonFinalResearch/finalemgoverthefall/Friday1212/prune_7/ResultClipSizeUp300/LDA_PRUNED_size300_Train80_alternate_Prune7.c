// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.80%
// test_accuracy: 72.50%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:49:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.950385, 0.950411,
    -0.256019, 0.256060,
    0.783419, -0.783437,
    0.821327, -0.821347,
    1.074630, -1.074607,
    -1.711363, 1.711358,
    0.268243, -0.268270,
    0.159003, -0.158996,
    -0.314597, 0.314648,
    0.819371, -0.819618,
    -0.718269, 0.718360,
    0.131976, -0.131870,
};

float Cg_init[2] = {
    -0.525911, -0.525938
};

float xstd_init[12] = {
    0.003669, 0.001323, 0.101486, 0.172294, 0.001748, 0.000539, 0.032721, 0.090388, 0.000983, 0.000104, 0.021376, 0.068809
};

float xmean_init[12] = {
    0.009772, -0.006256, 0.169920, 0.568480, 0.003295, -0.007703, 0.008107, 0.053280, 0.003238, -0.007802, 0.005333, 0.068640
};


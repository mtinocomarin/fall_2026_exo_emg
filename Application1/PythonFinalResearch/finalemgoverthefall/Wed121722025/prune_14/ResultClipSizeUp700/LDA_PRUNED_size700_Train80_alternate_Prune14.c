// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.20%
// test_accuracy: 56.73%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 13:48:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.918254, 0.918427,
    0.403666, -0.404020,
    -0.101633, 0.101677,
    -0.269503, 0.269686,
    -0.231261, 0.231268,
    -0.443119, 0.443115,
    -0.083394, 0.083374,
    0.419465, -0.419436,
    -0.682757, 0.682834,
    0.350494, -0.350568,
    0.030424, -0.030426,
    0.043116, -0.043118,
};

float Cg_init[2] = {
    -0.353530, -0.353572
};

float xstd_init[12] = {
    0.001098, 0.000081, 0.011237, 0.081062, 0.003170, 0.000861, 0.091995, 0.189374, 0.000869, 0.000121, 0.018515, 0.074178
};

float xmean_init[12] = {
    0.006613, -0.007684, 0.004103, 0.146154, 0.008375, -0.006896, 0.101425, 0.425727, 0.004424, -0.007706, 0.009459, 0.133334
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.33%
// test_accuracy: 78.12%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 15:49:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.851713, 0.851710,
    -0.369817, 0.369878,
    0.612510, -0.612535,
    0.927594, -0.927600,
    1.048511, -1.048647,
    -1.422144, 1.422355,
    0.231895, -0.231954,
    0.033372, -0.033392,
    -0.402363, 0.402449,
    0.497770, -0.497984,
    -0.527260, 0.527336,
    0.220843, -0.220748,
};

float Cg_init[2] = {
    -0.471410, -0.471440
};

float xstd_init[12] = {
    0.003808, 0.001411, 0.099511, 0.173991, 0.001665, 0.000505, 0.031939, 0.086793, 0.001064, 0.000094, 0.020540, 0.065060
};

float xmean_init[12] = {
    0.009791, -0.006260, 0.164711, 0.570266, 0.003218, -0.007726, 0.007556, 0.049867, 0.003230, -0.007804, 0.005244, 0.068000
};


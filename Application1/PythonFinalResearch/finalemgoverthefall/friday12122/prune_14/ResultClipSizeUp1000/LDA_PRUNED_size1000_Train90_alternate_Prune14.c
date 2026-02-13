// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.17%
// test_accuracy: 73.68%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_10.txt', 'act2\\trial_34.txt', 'act2\\trial_1.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:09:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.698549, 0.698535,
    -0.266599, 0.266618,
    0.551654, -0.551683,
    0.652111, -0.652094,
    0.865904, -0.865851,
    -0.872867, 0.872793,
    -0.135386, 0.135413,
    -0.072743, 0.072737,
    0.739483, -0.739548,
    0.178488, -0.178308,
    -0.423971, 0.423911,
    -0.011035, 0.010948,
};

float Cg_init[2] = {
    -0.548817, -0.548818
};

float xstd_init[12] = {
    0.003039, 0.001199, 0.101070, 0.165331, 0.001181, 0.000358, 0.018097, 0.065092, 0.000529, 0.000071, 0.014126, 0.061662
};

float xmean_init[12] = {
    0.009416, -0.006357, 0.174674, 0.585167, 0.003025, -0.007771, 0.004561, 0.045503, 0.003064, -0.007820, 0.003285, 0.061197
};


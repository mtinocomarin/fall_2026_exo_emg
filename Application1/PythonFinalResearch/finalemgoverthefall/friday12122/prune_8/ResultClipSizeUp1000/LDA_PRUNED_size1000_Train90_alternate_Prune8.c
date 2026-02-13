// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.86%
// test_accuracy: 73.03%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:06:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.507491, 0.507494,
    -0.266745, 0.266781,
    0.405247, -0.405298,
    0.499452, -0.499437,
    0.813933, -0.814075,
    -0.908015, 0.908228,
    0.039891, -0.039941,
    -0.139245, 0.139222,
    0.538494, -0.538424,
    0.089196, -0.089354,
    -0.323799, 0.323860,
    0.009646, -0.009603,
};

float Cg_init[2] = {
    -0.365176, -0.365206
};

float xstd_init[12] = {
    0.003199, 0.001261, 0.099921, 0.162158, 0.001242, 0.000375, 0.021589, 0.069352, 0.000508, 0.000069, 0.013324, 0.059972
};

float xmean_init[12] = {
    0.009434, -0.006356, 0.170853, 0.580301, 0.003043, -0.007764, 0.005188, 0.046993, 0.003065, -0.007818, 0.003233, 0.061918
};


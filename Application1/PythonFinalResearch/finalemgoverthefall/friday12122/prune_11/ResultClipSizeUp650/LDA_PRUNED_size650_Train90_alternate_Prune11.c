// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.50%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-12 16:08:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.762447, 0.762435,
    -0.164675, 0.164675,
    0.535986, -0.536011,
    0.798067, -0.798040,
    0.953254, -0.953154,
    -0.822843, 0.822729,
    -0.195166, 0.195187,
    -0.186101, 0.186095,
    -0.634467, 0.634274,
    0.578984, -0.578622,
    -0.400990, 0.400873,
    -0.000754, 0.000588,
};

float Cg_init[2] = {
    -0.398004, -0.397973
};

float xstd_init[12] = {
    0.003445, 0.001180, 0.102216, 0.169829, 0.001533, 0.000447, 0.023684, 0.074537, 0.001788, 0.000091, 0.016641, 0.069748
};

float xmean_init[12] = {
    0.009642, -0.006351, 0.169112, 0.579000, 0.003245, -0.007726, 0.006667, 0.052333, 0.003269, -0.007809, 0.004711, 0.067067
};


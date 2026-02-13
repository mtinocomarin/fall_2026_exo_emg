// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.85%
// test_accuracy: 73.96%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 16:08:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701787, 0.701763,
    -0.218047, 0.218055,
    0.482943, -0.482982,
    0.866413, -0.866372,
    0.948825, -0.948864,
    -0.833089, 0.833171,
    -0.186898, 0.186877,
    -0.188295, 0.188269,
    -0.642813, 0.642620,
    0.568456, -0.567977,
    -0.409663, 0.409506,
    0.004750, -0.004965,
};

float Cg_init[2] = {
    -0.408617, -0.408590
};

float xstd_init[12] = {
    0.003467, 0.001195, 0.103134, 0.170934, 0.001558, 0.000455, 0.024083, 0.075570, 0.001821, 0.000093, 0.016957, 0.070389
};

float xmean_init[12] = {
    0.009647, -0.006340, 0.168982, 0.577916, 0.003271, -0.007722, 0.006759, 0.053403, 0.003290, -0.007807, 0.004907, 0.068403
};


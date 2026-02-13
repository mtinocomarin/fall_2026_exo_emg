// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.80%
// test_accuracy: 81.94%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:05:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.869666, 0.869627,
    -0.041120, 0.041173,
    0.501114, -0.501130,
    0.760431, -0.760429,
    0.895865, -0.895730,
    -1.110466, 1.110299,
    -0.007456, 0.007474,
    -0.015626, 0.015639,
    -0.473948, 0.473923,
    0.498090, -0.498116,
    -0.469516, 0.469532,
    0.174714, -0.174712,
};

float Cg_init[2] = {
    -0.390623, -0.390619
};

float xstd_init[12] = {
    0.003653, 0.001364, 0.100901, 0.164632, 0.001637, 0.000488, 0.027997, 0.081093, 0.001548, 0.000091, 0.017159, 0.066755
};

float xmean_init[12] = {
    0.009842, -0.006252, 0.166591, 0.581610, 0.003250, -0.007713, 0.007356, 0.052337, 0.003256, -0.007806, 0.004853, 0.069502
};


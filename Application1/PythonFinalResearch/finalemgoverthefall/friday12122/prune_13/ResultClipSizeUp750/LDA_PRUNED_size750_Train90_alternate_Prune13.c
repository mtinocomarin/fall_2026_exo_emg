// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.58%
// test_accuracy: 78.57%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_32.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 16:09:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.670024, 0.669989,
    -0.303167, 0.303174,
    0.496964, -0.496974,
    0.790758, -0.790735,
    1.278980, -1.278930,
    -1.100133, 1.100102,
    -0.290901, 0.290908,
    -0.237912, 0.237899,
    0.931490, -0.931672,
    -0.112226, 0.112696,
    -0.403053, 0.402912,
    -0.148995, 0.148795,
};

float Cg_init[2] = {
    -0.614389, -0.614399
};

float xstd_init[12] = {
    0.003387, 0.001172, 0.102455, 0.171316, 0.001378, 0.000428, 0.022532, 0.073323, 0.000539, 0.000078, 0.016129, 0.065447
};

float xmean_init[12] = {
    0.009574, -0.006334, 0.171388, 0.580807, 0.003147, -0.007739, 0.006211, 0.051304, 0.003108, -0.007811, 0.004431, 0.067329
};


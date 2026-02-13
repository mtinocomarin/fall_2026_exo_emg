// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.80%
// test_accuracy: 77.08%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-12 16:06:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.954076, 0.954098,
    -0.291638, 0.291662,
    0.541611, -0.541627,
    1.039542, -1.039550,
    1.130597, -1.130638,
    -1.496474, 1.496528,
    0.260894, -0.260908,
    -0.073769, 0.073768,
    -0.325340, 0.325400,
    0.405040, -0.405241,
    -0.503871, 0.503940,
    0.270764, -0.270671,
};

float Cg_init[2] = {
    -0.515592, -0.515611
};

float xstd_init[12] = {
    0.003886, 0.001443, 0.098851, 0.169167, 0.001725, 0.000530, 0.031918, 0.087850, 0.001038, 0.000092, 0.020015, 0.066567
};

float xmean_init[12] = {
    0.009914, -0.006241, 0.162799, 0.572346, 0.003315, -0.007696, 0.008148, 0.053333, 0.003253, -0.007803, 0.005350, 0.069012
};


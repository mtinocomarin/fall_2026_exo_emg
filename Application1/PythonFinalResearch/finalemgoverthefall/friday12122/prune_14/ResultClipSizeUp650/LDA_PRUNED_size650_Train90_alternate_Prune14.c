// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.42%
// test_accuracy: 76.04%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_15.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-12 16:09:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.763813, 0.763842,
    -0.212515, 0.212509,
    0.566896, -0.566933,
    0.948700, -0.948683,
    1.207708, -1.207753,
    -1.049803, 1.049875,
    -0.173445, 0.173427,
    -0.189103, 0.189092,
    -0.754920, 0.754999,
    0.545163, -0.545305,
    -0.408752, 0.408803,
    -0.002336, 0.002389,
};

float Cg_init[2] = {
    -0.459333, -0.459354
};

float xstd_init[12] = {
    0.003351, 0.001151, 0.104458, 0.174432, 0.001542, 0.000442, 0.022837, 0.074284, 0.001895, 0.000095, 0.017474, 0.071514
};

float xmean_init[12] = {
    0.009677, -0.006336, 0.169748, 0.580909, 0.003246, -0.007735, 0.005859, 0.052121, 0.003313, -0.007806, 0.005152, 0.068788
};


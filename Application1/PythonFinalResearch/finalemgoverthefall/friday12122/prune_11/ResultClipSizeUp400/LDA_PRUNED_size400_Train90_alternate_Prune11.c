// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.43%
// test_accuracy: 80.36%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-12 16:07:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.012710, 1.012724,
    -0.310533, 0.310518,
    0.760057, -0.760079,
    0.812146, -0.812125,
    1.365446, -1.365354,
    -1.949666, 1.949546,
    0.153115, -0.153094,
    0.016973, -0.016965,
    0.983456, -0.983479,
    -0.052679, 0.052709,
    -0.597177, 0.597172,
    0.066674, -0.066684,
};

float Cg_init[2] = {
    -0.756310, -0.756305
};

float xstd_init[12] = {
    0.003865, 0.001435, 0.100585, 0.169668, 0.001798, 0.000565, 0.032961, 0.090876, 0.000549, 0.000092, 0.019257, 0.064641
};

float xmean_init[12] = {
    0.009912, -0.006221, 0.166629, 0.585371, 0.003388, -0.007666, 0.009752, 0.059200, 0.003138, -0.007807, 0.005333, 0.067429
};


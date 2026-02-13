// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.50%
// test_accuracy: 52.50%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 13:47:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.999502, 0.999426,
    0.445532, -0.445391,
    0.332911, -0.332923,
    -0.015198, 0.015130,
    -0.802933, 0.802916,
    -0.444738, 0.444747,
    0.610386, -0.610374,
    0.260938, -0.260946,
    -1.146949, 1.146905,
    0.396763, -0.396691,
    -0.293951, 0.293933,
    0.588685, -0.588701,
};

float Cg_init[2] = {
    -0.480273, -0.480247
};

float xstd_init[12] = {
    0.001079, 0.000084, 0.011579, 0.082571, 0.002641, 0.000785, 0.084475, 0.167274, 0.000957, 0.000124, 0.018937, 0.077968
};

float xmean_init[12] = {
    0.006536, -0.007684, 0.004800, 0.139800, 0.008757, -0.006834, 0.106533, 0.465600, 0.004375, -0.007713, 0.009733, 0.134400
};


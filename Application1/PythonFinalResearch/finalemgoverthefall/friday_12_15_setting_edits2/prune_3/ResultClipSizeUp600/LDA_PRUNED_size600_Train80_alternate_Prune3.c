// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.90%
// test_accuracy: 73.30%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 12:37:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.823218, 0.823256,
    0.179000, -0.179058,
    0.330177, -0.330228,
    0.630291, -0.630266,
    -0.439335, 0.439230,
    0.255105, -0.254949,
    -0.050891, 0.050904,
    -0.080153, 0.080101,
    0.174790, -0.174585,
    -0.052173, 0.051737,
    -0.386924, 0.387043,
    -0.027798, 0.027949,
};

float Cg_init[2] = {
    -0.236328, -0.236328
};

float xstd_init[12] = {
    0.004488, 0.002062, 0.149304, 0.203578, 0.001108, 0.000198, 0.028203, 0.084584, 0.000666, 0.000164, 0.028372, 0.105589
};

float xmean_init[12] = {
    0.010465, -0.005657, 0.243261, 0.682257, 0.003393, -0.007760, 0.009530, 0.077994, 0.003517, -0.007735, 0.012665, 0.116364
};


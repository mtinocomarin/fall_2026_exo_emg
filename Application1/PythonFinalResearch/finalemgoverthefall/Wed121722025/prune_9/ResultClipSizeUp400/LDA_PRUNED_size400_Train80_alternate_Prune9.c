// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.19%
// test_accuracy: 56.25%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt']}
// generated: 2025-12-17 13:45:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.691882, 0.691957,
    0.344864, -0.345061,
    0.297038, -0.297006,
    -0.195071, 0.195175,
    -0.579702, 0.579769,
    -0.198087, 0.198028,
    0.356342, -0.356363,
    0.146282, -0.146302,
    -0.808586, 0.808497,
    0.281550, -0.281354,
    -0.157092, 0.157025,
    0.351436, -0.351503,
};

float Cg_init[2] = {
    -0.323001, -0.323010
};

float xstd_init[12] = {
    0.001021, 0.000081, 0.011229, 0.078541, 0.002965, 0.000839, 0.085610, 0.172801, 0.000902, 0.000115, 0.017056, 0.075809
};

float xmean_init[12] = {
    0.006443, -0.007687, 0.004224, 0.142112, 0.008692, -0.006844, 0.104265, 0.447826, 0.004371, -0.007717, 0.008364, 0.129193
};


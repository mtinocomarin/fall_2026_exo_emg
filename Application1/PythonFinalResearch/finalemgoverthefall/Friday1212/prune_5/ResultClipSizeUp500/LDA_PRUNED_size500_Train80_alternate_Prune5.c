// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.07%
// test_accuracy: 73.61%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:48:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.811980, 0.811947,
    -0.205777, 0.205829,
    0.517931, -0.517959,
    0.733136, -0.733127,
    0.876908, -0.876924,
    -1.099564, 1.099586,
    0.034273, -0.034276,
    0.009034, -0.009039,
    -0.563061, 0.563085,
    0.586221, -0.586251,
    -0.538942, 0.538960,
    0.194084, -0.194086,
};

float Cg_init[2] = {
    -0.380375, -0.380387
};

float xstd_init[12] = {
    0.003919, 0.001459, 0.106463, 0.171282, 0.001592, 0.000472, 0.027609, 0.080788, 0.001598, 0.000093, 0.017550, 0.065461
};

float xmean_init[12] = {
    0.009896, -0.006196, 0.174596, 0.586420, 0.003199, -0.007731, 0.006749, 0.051276, 0.003252, -0.007806, 0.004829, 0.068231
};


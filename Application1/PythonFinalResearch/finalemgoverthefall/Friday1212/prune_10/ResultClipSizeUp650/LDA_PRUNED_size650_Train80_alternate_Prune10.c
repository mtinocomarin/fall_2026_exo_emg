// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.47%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 15:51:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.653530, 0.653571,
    -0.345822, 0.345799,
    0.454275, -0.454322,
    0.877485, -0.877455,
    0.825455, -0.825533,
    -0.690734, 0.690872,
    -0.224943, 0.224902,
    -0.143117, 0.143093,
    -0.713074, 0.713087,
    0.687095, -0.687052,
    -0.490976, 0.490966,
    0.010796, -0.010826,
};

float Cg_init[2] = {
    -0.406294, -0.406302
};

float xstd_init[12] = {
    0.003730, 0.001279, 0.108352, 0.178071, 0.001525, 0.000438, 0.023491, 0.075377, 0.001891, 0.000095, 0.017585, 0.070308
};

float xmean_init[12] = {
    0.009695, -0.006292, 0.175506, 0.582272, 0.003232, -0.007737, 0.006465, 0.051364, 0.003316, -0.007804, 0.004899, 0.070985
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.43%
// test_accuracy: 80.88%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt', 'act2\\trial_36.txt']}
// generated: 2025-12-12 16:09:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.766300, 0.766353,
    -0.277778, 0.277780,
    0.703077, -0.703150,
    0.594305, -0.594287,
    1.056264, -1.056350,
    -1.024111, 1.024264,
    -0.197192, 0.197140,
    -0.118142, 0.118131,
    0.643997, -0.643856,
    0.222039, -0.222396,
    -0.336449, 0.336558,
    0.030504, -0.030385,
};

float Cg_init[2] = {
    -0.588430, -0.588479
};

float xstd_init[12] = {
    0.003169, 0.001239, 0.101915, 0.167373, 0.001202, 0.000366, 0.018885, 0.067483, 0.000510, 0.000062, 0.011485, 0.058099
};

float xmean_init[12] = {
    0.009505, -0.006332, 0.173690, 0.587754, 0.003038, -0.007767, 0.004813, 0.046685, 0.003084, -0.007819, 0.002995, 0.061498
};


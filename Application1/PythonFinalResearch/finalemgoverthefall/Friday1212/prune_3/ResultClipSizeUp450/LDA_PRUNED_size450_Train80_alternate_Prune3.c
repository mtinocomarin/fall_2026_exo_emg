// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.17%
// test_accuracy: 76.56%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:46:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.693065, 0.693078,
    -0.263014, 0.263023,
    0.433226, -0.433270,
    0.735285, -0.735261,
    0.830169, -0.830261,
    -0.935878, 0.936006,
    -0.020474, 0.020453,
    -0.026522, 0.026506,
    -0.438101, 0.438116,
    0.404213, -0.404191,
    -0.438910, 0.438907,
    0.228204, -0.228225,
};

float Cg_init[2] = {
    -0.340221, -0.340235
};

float xstd_init[12] = {
    0.003781, 0.001425, 0.102450, 0.173864, 0.001595, 0.000486, 0.029018, 0.080459, 0.001438, 0.000089, 0.017652, 0.064607
};

float xmean_init[12] = {
    0.009865, -0.006223, 0.172932, 0.581379, 0.003169, -0.007733, 0.007299, 0.047586, 0.003215, -0.007808, 0.004310, 0.066983
};


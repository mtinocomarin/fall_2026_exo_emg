// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_2\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.23%
// test_accuracy: 72.92%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 16:03:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.509179, 0.509123,
    -0.336181, 0.336208,
    0.322951, -0.322974,
    0.600740, -0.600712,
    0.602815, -0.602670,
    -0.675839, 0.675697,
    0.011635, -0.011617,
    -0.064814, 0.064796,
    -0.349125, 0.348878,
    0.287057, -0.286546,
    -0.262879, 0.262738,
    0.089329, -0.089583,
};

float Cg_init[2] = {
    -0.232430, -0.232404
};

float xstd_init[12] = {
    0.003871, 0.001481, 0.107201, 0.168997, 0.001430, 0.000418, 0.024363, 0.071719, 0.001556, 0.000086, 0.014750, 0.066741
};

float xmean_init[12] = {
    0.009886, -0.006222, 0.175426, 0.585980, 0.003105, -0.007751, 0.005882, 0.046716, 0.003203, -0.007811, 0.003693, 0.064657
};


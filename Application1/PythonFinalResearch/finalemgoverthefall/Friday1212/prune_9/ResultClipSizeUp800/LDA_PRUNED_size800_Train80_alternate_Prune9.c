// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.23%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:50:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.836477, 0.836587,
    -0.284530, 0.284491,
    0.615564, -0.615623,
    0.597216, -0.597222,
    1.177638, -1.177656,
    -1.067468, 1.067555,
    -0.252174, 0.252104,
    -0.074848, 0.074843,
    0.663164, -0.662862,
    -0.037619, 0.036830,
    -0.359541, 0.359847,
    0.053434, -0.053181,
};

float Cg_init[2] = {
    -0.525047, -0.525053
};

float xstd_init[12] = {
    0.003588, 0.001384, 0.105517, 0.170017, 0.001219, 0.000371, 0.019459, 0.068217, 0.000523, 0.000077, 0.015481, 0.061263
};

float xmean_init[12] = {
    0.009732, -0.006230, 0.179981, 0.594840, 0.003048, -0.007765, 0.004986, 0.048348, 0.003097, -0.007814, 0.003903, 0.063826
};


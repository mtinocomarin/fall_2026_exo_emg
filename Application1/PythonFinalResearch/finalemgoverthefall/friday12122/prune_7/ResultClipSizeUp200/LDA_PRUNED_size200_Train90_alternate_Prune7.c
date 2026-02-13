// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.66%
// test_accuracy: 87.50%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt']}
// generated: 2025-12-12 16:05:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.699054, 0.699085,
    -0.378428, 0.378410,
    0.872891, -0.872883,
    0.507980, -0.507993,
    1.357714, -1.357745,
    -1.907144, 1.907166,
    0.282237, -0.282243,
    0.144576, -0.144566,
    1.091389, -1.091341,
    -0.548675, 0.548552,
    -0.482201, 0.482232,
    0.465102, -0.465051,
};

float Cg_init[2] = {
    -0.736250, -0.736242
};

float xstd_init[12] = {
    0.003320, 0.001164, 0.093888, 0.155351, 0.001590, 0.000510, 0.026347, 0.078077, 0.000552, 0.000099, 0.017614, 0.066542
};

float xmean_init[12] = {
    0.009673, -0.006298, 0.161379, 0.567126, 0.003208, -0.007707, 0.006743, 0.048506, 0.003167, -0.007801, 0.004751, 0.068965
};


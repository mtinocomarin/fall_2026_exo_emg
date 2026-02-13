// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.25%
// test_accuracy: 79.69%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 12:42:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.922111, 0.922111,
    0.200285, -0.200296,
    0.256919, -0.256937,
    1.007460, -1.007445,
    -0.610493, 0.610713,
    0.226591, -0.226817,
    0.089061, -0.089085,
    -0.230578, 0.230611,
    0.282864, -0.282795,
    -0.105868, 0.105702,
    -0.723021, 0.723074,
    0.091347, -0.091312,
};

float Cg_init[2] = {
    -0.446830, -0.446833
};

float xstd_init[12] = {
    0.004439, 0.001873, 0.147078, 0.205810, 0.001321, 0.000234, 0.034169, 0.096103, 0.000691, 0.000176, 0.031867, 0.106170
};

float xmean_init[12] = {
    0.010603, -0.005664, 0.242134, 0.680500, 0.003503, -0.007739, 0.012067, 0.083900, 0.003543, -0.007727, 0.013933, 0.119700
};


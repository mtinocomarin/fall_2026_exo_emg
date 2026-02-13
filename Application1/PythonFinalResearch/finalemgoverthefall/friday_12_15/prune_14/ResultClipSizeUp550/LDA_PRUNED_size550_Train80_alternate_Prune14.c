// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.44%
// test_accuracy: 72.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_1.txt', 'act2\\trial_16.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-12 12:47:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.990562, 0.990564,
    0.140124, -0.140127,
    0.209301, -0.209325,
    1.386310, -1.386294,
    -0.586232, 0.586350,
    0.355574, -0.355723,
    -0.000929, 0.000943,
    -0.385055, 0.385075,
    0.341425, -0.341372,
    -0.197708, 0.197586,
    -0.599700, 0.599737,
    0.059790, -0.059761,
};

float Cg_init[2] = {
    -0.527624, -0.527623
};

float xstd_init[12] = {
    0.004308, 0.001861, 0.153685, 0.212114, 0.001333, 0.000232, 0.034922, 0.091876, 0.000641, 0.000157, 0.026892, 0.100706
};

float xmean_init[12] = {
    0.010670, -0.005578, 0.253260, 0.698111, 0.003556, -0.007735, 0.012519, 0.086667, 0.003564, -0.007726, 0.012000, 0.122556
};


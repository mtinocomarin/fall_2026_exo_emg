// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.11%
// test_accuracy: 74.04%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-12 13:18:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.718591, 0.718559,
    0.285910, -0.285916,
    0.876598, -0.876566,
    0.516089, -0.516079,
    -0.623380, 0.623375,
    0.140606, -0.140597,
    -0.059027, 0.059027,
    0.263753, -0.263742,
    0.351934, -0.351780,
    -0.625997, 0.625774,
    -0.380319, 0.380379,
    0.584663, -0.584645,
};

float Cg_init[2] = {
    -0.546123, -0.546094
};

float xstd_init[12] = {
    0.004081, 0.001708, 0.345447, 0.126213, 0.001096, 0.000194, 0.050884, 0.131058, 0.000705, 0.000187, 0.051731, 0.139649
};

float xmean_init[12] = {
    0.010171, -0.005812, 0.440882, 1.036068, 0.003436, -0.007753, 0.014103, 0.613675, 0.003547, -0.007723, 0.015954, 0.704872
};


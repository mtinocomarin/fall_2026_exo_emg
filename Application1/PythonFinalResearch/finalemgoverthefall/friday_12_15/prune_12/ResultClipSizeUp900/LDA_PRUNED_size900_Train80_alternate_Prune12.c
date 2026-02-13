// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.21%
// test_accuracy: 66.54%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 12:46:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.795779, 0.795820,
    0.357931, -0.357932,
    0.736111, -0.736156,
    0.719531, -0.719526,
    -0.604506, 0.604403,
    0.367067, -0.366933,
    -0.160172, 0.160166,
    0.020843, -0.020878,
    0.391486, -0.391490,
    -0.382058, 0.382086,
    -0.405224, 0.405226,
    0.087051, -0.087077,
};

float Cg_init[2] = {
    -0.455471, -0.455482
};

float xstd_init[12] = {
    0.003864, 0.001668, 0.153112, 0.209936, 0.001046, 0.000182, 0.027765, 0.079868, 0.000670, 0.000169, 0.030096, 0.105226
};

float xmean_init[12] = {
    0.010167, -0.005796, 0.250942, 0.686942, 0.003380, -0.007766, 0.009255, 0.075412, 0.003523, -0.007731, 0.012235, 0.119589
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.27%
// test_accuracy: 73.44%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_28.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:53:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.731341, 0.731342,
    -0.313371, 0.313382,
    0.534380, -0.534401,
    0.982429, -0.982423,
    1.217724, -1.217689,
    -0.977595, 0.977557,
    -0.202210, 0.202219,
    -0.219980, 0.219980,
    -1.068513, 1.068515,
    0.760461, -0.760489,
    -0.425796, 0.425806,
    0.135450, -0.135447,
};

float Cg_init[2] = {
    -0.496567, -0.496572
};

float xstd_init[12] = {
    0.003525, 0.001193, 0.106255, 0.180065, 0.001562, 0.000439, 0.023033, 0.076636, 0.002072, 0.000091, 0.014494, 0.067606
};

float xmean_init[12] = {
    0.009555, -0.006351, 0.170433, 0.577315, 0.003240, -0.007744, 0.005802, 0.051852, 0.003343, -0.007807, 0.004568, 0.067408
};


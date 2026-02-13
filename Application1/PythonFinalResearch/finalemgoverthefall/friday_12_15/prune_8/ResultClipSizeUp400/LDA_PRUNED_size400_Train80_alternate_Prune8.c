// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.31%
// test_accuracy: 76.79%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 12:43:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.162881, 1.162891,
    0.289685, -0.289650,
    0.344775, -0.344808,
    1.170484, -1.170466,
    -0.486101, 0.485921,
    0.036364, -0.036181,
    -0.058742, 0.058742,
    0.040920, -0.040936,
    0.053415, -0.053577,
    0.177633, -0.177286,
    -0.747109, 0.747015,
    -0.104295, 0.104191,
};

float Cg_init[2] = {
    -0.531212, -0.531208
};

float xstd_init[12] = {
    0.004473, 0.001899, 0.145301, 0.199633, 0.001275, 0.000242, 0.028698, 0.093548, 0.000683, 0.000169, 0.030174, 0.105745
};

float xmean_init[12] = {
    0.010854, -0.005599, 0.249762, 0.693214, 0.003510, -0.007735, 0.011270, 0.082857, 0.003570, -0.007722, 0.014841, 0.124762
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 60.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_3.txt', 'act1\\trial_5.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.216147, 1.216144,
    -0.512874, 0.513029,
    0.000000, 0.000000,
    -0.472819, -0.472819,
    1.412697, 1.412697,
    1.411569, 1.411569,
    3.061862, 3.061862,
    1.539388, 1.539388,
    -0.362697, -0.362697,
    -0.674089, -0.674089,
    -1.235265, -1.235265,
    -0.195106, -0.195106,
};

float Cg_init[2] = {
    -0.188146, -1.021768
};

float xstd_init[12] = {
    0.000344, 0.000016, 1.000000, 0.015392, 0.002429, 0.000735, 0.072964, 0.151000, 0.002482, 0.000635, 0.081016, 0.221044
};

float xmean_init[12] = {
    0.002614, -0.007914, 0.000000, 0.007000, 0.008025, -0.006649, 0.146000, 0.457000, 0.006056, -0.007136, 0.092667, 0.321000
};


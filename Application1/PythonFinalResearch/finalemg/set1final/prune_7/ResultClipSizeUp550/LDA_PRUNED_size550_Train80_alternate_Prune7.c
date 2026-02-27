// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 70.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:11:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.397417, 1.397418,
    0.493022, -0.493069,
    0.000000, 0.000000,
    -0.408453, -0.408453,
    -0.715531, -0.715531,
    -0.204259, -0.204259,
    0.056262, 0.056262,
    -0.534301, -0.534301,
    -0.616898, -0.616898,
    -0.813142, -0.813142,
    -0.611803, -0.611803,
    0.149314, 0.149314,
};

float Cg_init[2] = {
    -0.055331, -0.843556
};

float xstd_init[12] = {
    0.000402, 0.000014, 1.000000, 0.018806, 0.002075, 0.000730, 0.059487, 0.110482, 0.001392, 0.000559, 0.061953, 0.132982
};

float xmean_init[12] = {
    0.002518, -0.007914, 0.000000, 0.012000, 0.008517, -0.006455, 0.150667, 0.502000, 0.006533, -0.006945, 0.089333, 0.360000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.388969, 0.388966,
    0.117859, -0.117803,
    0.000000, 0.000000,
    -0.509414, -0.509414,
    -0.546625, -0.546625,
    -1.074225, -1.074225,
    -0.879966, -0.879966,
    -1.480403, -1.480403,
    -2.229311, -2.229311,
    -1.543898, -1.543898,
    -1.398794, -1.398794,
    -1.953198, -1.953198,
};

float Cg_init[2] = {
    2.441570, -2.584419
};

float xstd_init[12] = {
    0.000227, 0.000016, 1.000000, 0.017827, 0.001808, 0.000682, 0.072597, 0.131587, 0.001713, 0.000493, 0.067488, 0.161815
};

float xmean_init[12] = {
    0.002681, -0.007910, 0.000000, 0.008718, 0.008460, -0.006573, 0.143932, 0.457949, 0.006327, -0.007091, 0.095043, 0.352308
};


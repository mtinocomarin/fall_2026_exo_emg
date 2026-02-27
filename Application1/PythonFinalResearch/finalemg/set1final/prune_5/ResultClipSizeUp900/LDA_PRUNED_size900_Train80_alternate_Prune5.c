// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.242669, 0.242670,
    0.075653, -0.075796,
    0.000000, 0.000000,
    -0.382215, -0.382215,
    -0.436736, -0.436736,
    -0.134491, -0.134491,
    -0.186057, -0.186057,
    -0.769486, -0.769486,
    -0.225701, -0.225701,
    -0.059262, -0.059262,
    -1.020966, -1.020966,
    -0.598172, -0.598172,
};

float Cg_init[2] = {
    0.601401, -0.658197
};

float xstd_init[12] = {
    0.000239, 0.000018, 1.000000, 0.019850, 0.001762, 0.000639, 0.067795, 0.133567, 0.001661, 0.000476, 0.073671, 0.158153
};

float xmean_init[12] = {
    0.002684, -0.007907, 0.000000, 0.009804, 0.008279, -0.006650, 0.137255, 0.446667, 0.006364, -0.007084, 0.100131, 0.361177
};


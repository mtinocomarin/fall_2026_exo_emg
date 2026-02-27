// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 62.35%
// test_accuracy: 61.76%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.389908, 0.389903,
    0.080743, -0.080652,
    0.000000, 0.000000,
    -0.382215, -0.382215,
    0.246914, 0.246914,
    -0.489923, -0.489923,
    -0.893846, -0.893846,
    -0.183211, -0.183211,
    -0.298019, -0.298019,
    -0.318401, -0.318401,
    -0.390539, -0.390539,
    0.496733, 0.496733,
};

float Cg_init[2] = {
    -0.008732, -0.125075
};

float xstd_init[12] = {
    0.000286, 0.000018, 1.000000, 0.016868, 0.001860, 0.000589, 0.065916, 0.120845, 0.001815, 0.000525, 0.074199, 0.167434
};

float xmean_init[12] = {
    0.002599, -0.007911, 0.000000, 0.006824, 0.008148, -0.006719, 0.137098, 0.443765, 0.006489, -0.007023, 0.103372, 0.374353
};


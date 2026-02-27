// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.11%
// test_accuracy: 63.89%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt']}
// generated: 2026-02-13 17:10:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.686121, 0.686122,
    -0.028260, 0.028163,
    0.000000, 0.000000,
    -0.402937, -0.402937,
    -0.166123, -0.166123,
    -0.409816, -0.409816,
    -0.275407, -0.275407,
    0.946118, 0.946118,
    0.675050, 0.675050,
    0.192988, 0.192988,
    -0.556857, -0.556857,
    0.178573, 0.178573,
};

float Cg_init[2] = {
    -0.617109, 0.220815
};

float xstd_init[12] = {
    0.000275, 0.000015, 1.000000, 0.013175, 0.001971, 0.000657, 0.064022, 0.120298, 0.001952, 0.000556, 0.063807, 0.179507
};

float xmean_init[12] = {
    0.002593, -0.007913, 0.000000, 0.004889, 0.008031, -0.006705, 0.133630, 0.448445, 0.006266, -0.007070, 0.085926, 0.354667
};


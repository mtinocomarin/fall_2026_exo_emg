// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.75%
// test_accuracy: 56.25%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.645547, 0.645545,
    -1.056172, 1.056338,
    0.000000, 0.000000,
    -0.503236, -0.503236,
    0.061933, 0.061933,
    -0.183782, -0.183782,
    1.113647, 1.113647,
    1.237430, 1.237430,
    -0.875688, -0.875688,
    -0.713710, -0.713710,
    -0.826013, -0.826013,
    -0.415411, -0.415411,
};

float Cg_init[2] = {
    0.829934, -1.983399
};

float xstd_init[12] = {
    0.000220, 0.000013, 1.000000, 0.016125, 0.002247, 0.000727, 0.063456, 0.122963, 0.001203, 0.000385, 0.064498, 0.138468
};

float xmean_init[12] = {
    0.002740, -0.007916, 0.000000, 0.007500, 0.008767, -0.006368, 0.135000, 0.495000, 0.006533, -0.007062, 0.103333, 0.385000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt']}
// generated: 2026-02-13 17:10:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.680685, 0.680687,
    -0.232036, 0.232011,
    0.000000, 0.000000,
    -0.426956, -0.426956,
    -1.101822, -1.101822,
    -0.979000, -0.979000,
    -0.999744, -0.999744,
    -0.576312, -0.576312,
    0.939727, 0.939727,
    2.308527, 2.308527,
    2.149674, 2.149674,
    1.621595, 1.621595,
};

float Cg_init[2] = {
    -3.200211, 2.739364
};

float xstd_init[12] = {
    0.000225, 0.000012, 1.000000, 0.015862, 0.002173, 0.000708, 0.065320, 0.129110, 0.002085, 0.000506, 0.073533, 0.179390
};

float xmean_init[12] = {
    0.002612, -0.007914, 0.000000, 0.007500, 0.008127, -0.006657, 0.146667, 0.481250, 0.006175, -0.007137, 0.090833, 0.315000
};


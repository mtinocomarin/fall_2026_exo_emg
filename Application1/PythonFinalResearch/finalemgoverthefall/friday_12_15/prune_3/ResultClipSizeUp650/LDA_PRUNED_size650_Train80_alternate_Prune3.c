// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.44%
// test_accuracy: 71.88%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-12 12:40:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.608011, 0.608052,
    0.006168, -0.006218,
    0.289276, -0.289310,
    0.538583, -0.538572,
    -0.467776, 0.467692,
    0.196354, -0.196241,
    0.011108, -0.011090,
    -0.042438, 0.042394,
    0.270821, -0.270645,
    -0.130373, 0.130103,
    -0.399920, 0.399986,
    0.034196, -0.034142,
};

float Cg_init[2] = {
    -0.204820, -0.204818
};

float xstd_init[12] = {
    0.004605, 0.002163, 0.151399, 0.204920, 0.001092, 0.000193, 0.028105, 0.082718, 0.000655, 0.000160, 0.029065, 0.104365
};

float xmean_init[12] = {
    0.010470, -0.005619, 0.246361, 0.685805, 0.003380, -0.007761, 0.009042, 0.077414, 0.003516, -0.007735, 0.012720, 0.117069
};


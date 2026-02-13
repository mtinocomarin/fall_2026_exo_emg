// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.78%
// test_accuracy: 85.42%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-17 12:36:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.894908, 0.894928,
    0.003222, -0.003220,
    0.515419, -0.515433,
    0.728177, -0.728167,
    0.071683, -0.071709,
    -0.092142, 0.092130,
    0.055675, -0.055663,
    -0.461314, 0.461337,
    0.204997, -0.205054,
    -0.475967, 0.476094,
    -0.185770, 0.185744,
    -0.019293, 0.019238,
};

float Cg_init[2] = {
    -0.390107, -0.390116
};

float xstd_init[12] = {
    0.004544, 0.002150, 0.137788, 0.180205, 0.001482, 0.000272, 0.036473, 0.097952, 0.000651, 0.000152, 0.025599, 0.102529
};

float xmean_init[12] = {
    0.011118, -0.005460, 0.253482, 0.715778, 0.003599, -0.007722, 0.012593, 0.083778, 0.003567, -0.007732, 0.012889, 0.125111
};


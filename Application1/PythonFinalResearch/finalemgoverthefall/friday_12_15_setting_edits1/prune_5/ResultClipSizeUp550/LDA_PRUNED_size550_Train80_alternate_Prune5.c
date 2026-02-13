// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 66.25%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:13:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.776573, 0.776568,
    0.076184, -0.076201,
    0.619503, -0.619486,
    0.358729, -0.358730,
    -0.479210, 0.479383,
    0.133864, -0.134030,
    0.043386, -0.043398,
    0.161037, -0.161033,
    0.180996, -0.180947,
    -0.266528, 0.266439,
    -0.244476, 0.244508,
    0.364907, -0.364902,
};

float Cg_init[2] = {
    -0.277455, -0.277454
};

float xstd_init[12] = {
    0.004684, 0.002159, 0.354517, 0.123442, 0.001195, 0.000208, 0.053207, 0.136354, 0.000676, 0.000167, 0.050947, 0.139531
};

float xmean_init[12] = {
    0.010667, -0.005562, 0.454197, 1.034371, 0.003458, -0.007750, 0.014815, 0.627630, 0.003537, -0.007732, 0.014691, 0.697334
};


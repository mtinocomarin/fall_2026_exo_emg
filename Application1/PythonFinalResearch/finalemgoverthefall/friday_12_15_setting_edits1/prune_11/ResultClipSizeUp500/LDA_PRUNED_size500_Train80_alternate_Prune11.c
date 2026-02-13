// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.86%
// test_accuracy: 72.22%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_3.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:16:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.704236, 0.704236,
    0.037759, -0.037756,
    0.846402, -0.846397,
    0.483097, -0.483100,
    -0.588614, 0.588633,
    0.116557, -0.116576,
    0.034831, -0.034838,
    0.258095, -0.258085,
    0.224486, -0.224591,
    -0.268250, 0.268379,
    -0.486940, 0.486908,
    0.243247, -0.243242,
};

float Cg_init[2] = {
    -0.422303, -0.422302
};

float xstd_init[12] = {
    0.004307, 0.001842, 0.343049, 0.124645, 0.001263, 0.000222, 0.058514, 0.136176, 0.000701, 0.000182, 0.052971, 0.146368
};

float xmean_init[12] = {
    0.010485, -0.005722, 0.447089, 1.027619, 0.003495, -0.007743, 0.015168, 0.615343, 0.003559, -0.007726, 0.017813, 0.696719
};


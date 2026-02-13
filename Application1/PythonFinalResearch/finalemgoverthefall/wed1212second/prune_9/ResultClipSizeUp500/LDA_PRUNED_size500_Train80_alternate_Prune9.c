// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.58%
// test_accuracy: 72.92%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:03:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.074106, -0.074188,
    -0.301796, 0.301965,
    0.060645, -0.060670,
    -0.100481, 0.100398,
    1.995549, -1.995490,
    -1.846825, 1.846717,
    -0.158204, 0.158231,
    0.351526, -0.351497,
    -0.792566, 0.792532,
    -0.416206, 0.416251,
    0.368123, -0.368149,
    1.677677, -1.677677,
};

float Cg_init[2] = {
    -0.696510, -0.696499
};

float xstd_init[12] = {
    0.000917, 0.000083, 0.007947, 0.067218, 0.000772, 0.000130, 0.015894, 0.057082, 0.003488, 0.001066, 0.121366, 0.214983
};

float xmean_init[12] = {
    0.005540, -0.007756, 0.001997, 0.092850, 0.002416, -0.007845, 0.005604, 0.051111, 0.009158, -0.006549, 0.140999, 0.479807
};


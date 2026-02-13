// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.75%
// test_accuracy: 85.42%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:43:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.049492, 1.049522,
    -0.333661, 0.333645,
    1.130479, -1.130487,
    1.367092, -1.367087,
    0.688354, -0.688314,
    -0.266427, 0.266332,
    0.034463, -0.034456,
    -1.266653, 1.266706,
    0.451939, -0.452019,
    -1.179962, 1.180136,
    -0.312328, 0.312281,
    0.273987, -0.274040,
};

float Cg_init[2] = {
    -0.926726, -0.926743
};

float xstd_init[12] = {
    0.003932, 0.001640, 0.137183, 0.178057, 0.001652, 0.000306, 0.040275, 0.104380, 0.000668, 0.000165, 0.023082, 0.102849
};

float xmean_init[12] = {
    0.010583, -0.005784, 0.243478, 0.706666, 0.003693, -0.007706, 0.013333, 0.088406, 0.003555, -0.007729, 0.010242, 0.121739
};


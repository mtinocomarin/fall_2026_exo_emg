// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.25%
// test_accuracy: 76.04%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt']}
// generated: 2026-02-13 14:48:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.158794, -0.158850,
    -0.131980, 0.132123,
    -0.106083, 0.106058,
    -0.045100, 0.045034,
    1.990429, -1.990466,
    -1.672979, 1.673006,
    -0.294032, 0.294033,
    0.088429, -0.088418,
    -0.400976, 0.400983,
    -1.311570, 1.311536,
    0.402610, -0.402587,
    2.006813, -2.006820,
};

float Cg_init[2] = {
    -0.779806, -0.779809
};

float xstd_init[12] = {
    0.000866, 0.000082, 0.008221, 0.065923, 0.000821, 0.000145, 0.015671, 0.060314, 0.003367, 0.000966, 0.115277, 0.208729
};

float xmean_init[12] = {
    0.005573, -0.007760, 0.001799, 0.090159, 0.002427, -0.007842, 0.005397, 0.051905, 0.008916, -0.006670, 0.125926, 0.463810
};


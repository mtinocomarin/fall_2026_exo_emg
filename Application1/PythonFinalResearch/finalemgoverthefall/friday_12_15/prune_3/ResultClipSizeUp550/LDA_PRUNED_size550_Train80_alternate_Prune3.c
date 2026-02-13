// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.52%
// test_accuracy: 73.75%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-12 12:40:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.721015, 0.721056,
    0.058720, -0.058793,
    0.152471, -0.152496,
    0.702176, -0.702166,
    -0.420620, 0.420960,
    0.135184, -0.135546,
    -0.021333, 0.021336,
    -0.023562, 0.023590,
    0.253557, -0.253337,
    -0.018406, 0.017941,
    -0.473787, 0.473925,
    -0.031557, 0.031679,
};

float Cg_init[2] = {
    -0.239446, -0.239451
};

float xstd_init[12] = {
    0.004732, 0.002194, 0.149642, 0.204724, 0.001168, 0.000205, 0.030016, 0.087538, 0.000670, 0.000165, 0.030120, 0.103848
};

float xmean_init[12] = {
    0.010527, -0.005614, 0.242024, 0.680620, 0.003424, -0.007754, 0.009931, 0.080207, 0.003519, -0.007735, 0.012690, 0.115793
};


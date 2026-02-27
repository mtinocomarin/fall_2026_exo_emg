// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.621658, 0.621653,
    -0.473669, 0.473804,
    0.000000, 0.000000,
    -0.520817, -0.520817,
    -0.464727, -0.464727,
    -0.641813, -0.641813,
    0.186340, 0.186340,
    -0.303325, -0.303325,
    1.728876, 1.728876,
    1.204922, 1.204922,
    3.428894, 3.428894,
    1.146448, 1.146448,
};

float Cg_init[2] = {
    -3.328663, 2.740721
};

float xstd_init[12] = {
    0.000207, 0.000014, 1.000000, 0.015119, 0.001982, 0.000686, 0.063582, 0.144534, 0.001768, 0.000456, 0.061474, 0.172772
};

float xmean_init[12] = {
    0.002716, -0.007912, 0.000000, 0.006667, 0.008388, -0.006571, 0.134074, 0.478889, 0.006256, -0.007138, 0.088889, 0.361111
};


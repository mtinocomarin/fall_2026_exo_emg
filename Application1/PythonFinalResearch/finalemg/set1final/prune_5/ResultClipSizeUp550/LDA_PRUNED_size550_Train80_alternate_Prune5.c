// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 56.67%
// test_accuracy: 52.50%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.785844, 0.785846,
    -0.203431, 0.203485,
    0.000000, 0.000000,
    2.432960, 2.432960,
    -1.327863, -1.327863,
    -1.119657, -1.119657,
    -0.610534, -0.610534,
    -1.440535, -1.440535,
    -0.916534, -0.916534,
    -1.000859, -1.000859,
    -0.611803, -0.611803,
    -1.075842, -1.075842,
};

float Cg_init[2] = {
    1.359191, -1.922558
};

float xstd_init[12] = {
    0.000272, 0.000016, 1.000000, 0.012949, 0.002133, 0.000671, 0.071894, 0.142037, 0.001807, 0.000469, 0.066870, 0.180469
};

float xmean_init[12] = {
    0.002741, -0.007909, 0.000000, 0.004667, 0.008151, -0.006670, 0.134667, 0.438667, 0.006186, -0.007130, 0.093333, 0.347333
};


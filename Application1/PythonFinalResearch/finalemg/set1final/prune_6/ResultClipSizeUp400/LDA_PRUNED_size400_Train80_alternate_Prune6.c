// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.14%
// test_accuracy: 60.71%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.957549, 0.957546,
    -0.235339, 0.235509,
    0.000000, 0.000000,
    -0.421129, -0.421129,
    -0.215531, -0.215531,
    -0.001756, -0.001756,
    1.196136, 1.196136,
    0.352447, 0.352447,
    -0.587501, -0.587501,
    -0.789847, -0.789847,
    -0.540705, -0.540705,
    -0.380652, -0.380652,
};

float Cg_init[2] = {
    0.347531, -1.148518
};

float xstd_init[12] = {
    0.000255, 0.000016, 1.000000, 0.012599, 0.002581, 0.000781, 0.063531, 0.165481, 0.001984, 0.000483, 0.062275, 0.194762
};

float xmean_init[12] = {
    0.002793, -0.007911, 0.000000, 0.004286, 0.008474, -0.006556, 0.126667, 0.467143, 0.006249, -0.007138, 0.086667, 0.332857
};


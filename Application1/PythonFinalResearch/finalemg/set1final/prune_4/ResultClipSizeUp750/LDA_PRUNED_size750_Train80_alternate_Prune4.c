// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.688863, 0.688864,
    0.095448, -0.095566,
    0.000000, 0.000000,
    -0.442856, -0.442856,
    -0.297081, -0.297081,
    -0.083088, -0.083088,
    0.970764, 0.970764,
    1.442936, 1.442936,
    1.286634, 1.286634,
    1.291804, 1.291804,
    -0.259199, -0.259199,
    2.032349, 2.032349,
};

float Cg_init[2] = {
    -1.882505, 1.515943
};

float xstd_init[12] = {
    0.000335, 0.000016, 1.000000, 0.014757, 0.002119, 0.000605, 0.070402, 0.128598, 0.001930, 0.000575, 0.072907, 0.181012
};

float xmean_init[12] = {
    0.002610, -0.007911, 0.000000, 0.006429, 0.007966, -0.006776, 0.131905, 0.423214, 0.006403, -0.007000, 0.102857, 0.363572
};


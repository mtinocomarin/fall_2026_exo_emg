// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.41%
// test_accuracy: 50.62%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 13:46:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.814185, 0.814155,
    0.449225, -0.449129,
    0.043153, -0.043162,
    -0.287291, 0.287230,
    -0.566725, 0.566709,
    -0.297824, 0.297845,
    0.371793, -0.371797,
    0.275466, -0.275452,
    -0.697448, 0.697509,
    0.349300, -0.349404,
    -0.040784, 0.040818,
    0.158964, -0.158947,
};

float Cg_init[2] = {
    -0.311554, -0.311558
};

float xstd_init[12] = {
    0.001064, 0.000080, 0.012397, 0.081228, 0.003045, 0.000807, 0.088812, 0.180435, 0.000859, 0.000110, 0.019127, 0.070305
};

float xmean_init[12] = {
    0.006461, -0.007686, 0.004606, 0.144546, 0.008643, -0.006855, 0.104606, 0.443909, 0.004422, -0.007711, 0.010182, 0.131091
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.97%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt']}
// generated: 2026-02-13 14:46:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.258240, 0.257953,
    -0.084907, 0.085547,
    -0.026472, 0.026388,
    0.089524, -0.089840,
    1.348009, -1.348082,
    -0.936635, 0.936662,
    -0.107424, 0.107438,
    0.130812, -0.130805,
    -0.570841, 0.570913,
    -0.364231, 0.364141,
    0.401002, -0.401001,
    0.952139, -0.952153,
};

float Cg_init[2] = {
    -0.429488, -0.429508
};

float xstd_init[12] = {
    0.000888, 0.000072, 0.008072, 0.064272, 0.000643, 0.000099, 0.013631, 0.049333, 0.003381, 0.001027, 0.117493, 0.208947
};

float xmean_init[12] = {
    0.005523, -0.007758, 0.002051, 0.091436, 0.002336, -0.007859, 0.004103, 0.044308, 0.008980, -0.006604, 0.132616, 0.469128
};


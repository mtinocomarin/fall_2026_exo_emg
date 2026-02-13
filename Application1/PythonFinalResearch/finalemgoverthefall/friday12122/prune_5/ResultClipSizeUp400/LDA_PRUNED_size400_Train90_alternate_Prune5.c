// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.80%
// test_accuracy: 80.36%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 16:04:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.957059, 0.957058,
    -0.100095, 0.100113,
    0.622688, -0.622699,
    0.677948, -0.677947,
    1.039051, -1.038869,
    -1.433014, 1.432746,
    0.091775, -0.091726,
    0.094146, -0.094105,
    -0.402586, 0.402593,
    0.573583, -0.573742,
    -0.508654, 0.508723,
    0.174352, -0.174285,
};

float Cg_init[2] = {
    -0.405476, -0.405471
};

float xstd_init[12] = {
    0.003707, 0.001403, 0.100115, 0.166940, 0.001681, 0.000514, 0.029864, 0.084021, 0.001143, 0.000091, 0.018061, 0.066739
};

float xmean_init[12] = {
    0.009803, -0.006254, 0.166882, 0.576959, 0.003274, -0.007702, 0.007988, 0.052811, 0.003214, -0.007807, 0.004854, 0.067466
};


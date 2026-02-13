// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.66%
// test_accuracy: 72.06%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:47:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.527502, 0.527514,
    -0.223180, 0.223171,
    0.352555, -0.352586,
    0.510584, -0.510569,
    0.617785, -0.617720,
    -0.707244, 0.707166,
    -0.019802, 0.019824,
    -0.004343, 0.004334,
    -0.328265, 0.328169,
    0.286230, -0.286009,
    -0.239641, 0.239575,
    0.096037, -0.096155,
};

float Cg_init[2] = {
    -0.212265, -0.212257
};

float xstd_init[12] = {
    0.003367, 0.001340, 0.104280, 0.167389, 0.001284, 0.000365, 0.021443, 0.069777, 0.001405, 0.000080, 0.013328, 0.063215
};

float xmean_init[12] = {
    0.009626, -0.006281, 0.175416, 0.586653, 0.003051, -0.007770, 0.005030, 0.046816, 0.003177, -0.007813, 0.003056, 0.063692
};


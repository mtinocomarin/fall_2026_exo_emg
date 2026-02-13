// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.83%
// test_accuracy: 76.56%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:46:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.884560, 0.884539,
    -0.000595, 0.000606,
    0.367452, -0.367459,
    0.701251, -0.701239,
    0.690294, -0.690438,
    -0.909888, 0.910168,
    0.232426, -0.232547,
    -0.069813, 0.069796,
    -0.118617, 0.118632,
    0.271906, -0.271876,
    -0.352695, 0.352685,
    0.327653, -0.327666,
};

float Cg_init[2] = {
    -0.314940, -0.314949
};

float xstd_init[12] = {
    0.003567, 0.001270, 0.096380, 0.167170, 0.001603, 0.000485, 0.032047, 0.083920, 0.000844, 0.000091, 0.018626, 0.063756
};

float xmean_init[12] = {
    0.009703, -0.006297, 0.167889, 0.564167, 0.003168, -0.007733, 0.007667, 0.046333, 0.003165, -0.007809, 0.004000, 0.064333
};


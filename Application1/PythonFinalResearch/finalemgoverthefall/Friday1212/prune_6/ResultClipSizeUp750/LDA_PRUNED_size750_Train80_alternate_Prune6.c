// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.49%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 15:49:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.585967, 0.585969,
    -0.424270, 0.424287,
    0.513775, -0.513805,
    0.668237, -0.668229,
    0.797060, -0.796980,
    -0.686490, 0.686403,
    -0.183042, 0.183062,
    -0.091631, 0.091623,
    -0.512406, 0.512354,
    0.424649, -0.424580,
    -0.316216, 0.316200,
    0.061627, -0.061676,
};

float Cg_init[2] = {
    -0.318457, -0.318458
};

float xstd_init[12] = {
    0.003716, 0.001383, 0.107456, 0.175477, 0.001365, 0.000389, 0.020904, 0.069553, 0.001640, 0.000088, 0.015358, 0.068208
};

float xmean_init[12] = {
    0.009766, -0.006225, 0.181796, 0.589231, 0.003114, -0.007759, 0.005348, 0.047967, 0.003249, -0.007808, 0.003810, 0.067857
};


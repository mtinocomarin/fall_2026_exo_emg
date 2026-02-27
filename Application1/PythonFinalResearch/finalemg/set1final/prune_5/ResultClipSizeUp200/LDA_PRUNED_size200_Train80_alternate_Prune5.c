// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 58.33%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.035171, 1.035172,
    0.009857, -0.009766,
    0.000000, 0.000000,
    -0.399062, -0.399062,
    -0.612558, -0.612558,
    -0.233639, -0.233639,
    0.513851, 0.513851,
    0.143288, 0.143288,
    -0.341534, -0.341534,
    -0.110509, -0.110509,
    0.020879, 0.020879,
    -0.083041, -0.083041,
};

float Cg_init[2] = {
    -0.277388, -0.463211
};

float xstd_init[12] = {
    0.000262, 0.000014, 1.000000, 0.009428, 0.002516, 0.000813, 0.057283, 0.154615, 0.002324, 0.000556, 0.078267, 0.206255
};

float xmean_init[12] = {
    0.002787, -0.007913, 0.000000, 0.002222, 0.008307, -0.006612, 0.145185, 0.493333, 0.006076, -0.007171, 0.091852, 0.306667
};


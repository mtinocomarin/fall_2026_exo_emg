// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:48:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.830779, 0.830764,
    -0.159916, 0.159973,
    0.548169, -0.548200,
    0.737926, -0.737928,
    0.903832, -0.903844,
    -1.169722, 1.169739,
    0.020472, -0.020480,
    0.064072, -0.064072,
    -0.582199, 0.582280,
    0.592430, -0.592623,
    -0.550983, 0.551063,
    0.214418, -0.214351,
};

float Cg_init[2] = {
    -0.396826, -0.396852
};

float xstd_init[12] = {
    0.003679, 0.001392, 0.105257, 0.170949, 0.001618, 0.000480, 0.028103, 0.081814, 0.001623, 0.000093, 0.017665, 0.065633
};

float xmean_init[12] = {
    0.009812, -0.006224, 0.172023, 0.584274, 0.003218, -0.007726, 0.007009, 0.052308, 0.003258, -0.007806, 0.004786, 0.067778
};


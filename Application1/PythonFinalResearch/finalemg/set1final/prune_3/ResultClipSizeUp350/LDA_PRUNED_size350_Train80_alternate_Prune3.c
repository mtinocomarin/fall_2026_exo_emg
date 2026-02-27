// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.67%
// test_accuracy: 50.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt']}
// generated: 2026-02-13 17:10:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.935748, 0.935752,
    -0.311180, 0.311134,
    0.000000, 0.000000,
    -0.414800, -0.414800,
    0.649243, 0.649243,
    -0.053370, -0.053370,
    -0.101307, -0.101307,
    0.099658, 0.099658,
    0.338562, 0.338562,
    0.063244, 0.063244,
    -0.075400, -0.075400,
    1.284783, 1.284783,
};

float Cg_init[2] = {
    -1.079476, 0.300946
};

float xstd_init[12] = {
    0.000304, 0.000014, 1.000000, 0.015033, 0.002266, 0.000778, 0.078907, 0.122754, 0.002201, 0.000570, 0.074345, 0.204150
};

float xmean_init[12] = {
    0.002559, -0.007915, 0.000000, 0.006667, 0.008111, -0.006624, 0.148889, 0.454000, 0.006270, -0.007089, 0.095556, 0.342000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.54%
// test_accuracy: 72.50%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:50:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.813299, 0.813330,
    -0.143923, 0.143940,
    0.512011, -0.512058,
    0.798556, -0.798545,
    0.936546, -0.936656,
    -0.947870, 0.948019,
    -0.057716, 0.057682,
    -0.126434, 0.126425,
    -0.549252, 0.549354,
    0.279405, -0.279565,
    -0.422314, 0.422369,
    0.327545, -0.327488,
};

float Cg_init[2] = {
    -0.402200, -0.402227
};

float xstd_init[12] = {
    0.003687, 0.001352, 0.103743, 0.174789, 0.001632, 0.000485, 0.029251, 0.081383, 0.001844, 0.000097, 0.017849, 0.068443
};

float xmean_init[12] = {
    0.009799, -0.006274, 0.174056, 0.582417, 0.003248, -0.007723, 0.007667, 0.052000, 0.003290, -0.007803, 0.004778, 0.070584
};


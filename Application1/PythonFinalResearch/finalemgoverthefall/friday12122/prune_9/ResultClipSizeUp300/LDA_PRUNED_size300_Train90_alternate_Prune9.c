// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.74%
// test_accuracy: 80.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:06:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.622910, 0.622941,
    -0.612039, 0.612036,
    0.754977, -0.755000,
    0.717040, -0.717042,
    1.347190, -1.347285,
    -2.224299, 2.224436,
    0.534607, -0.534638,
    0.047714, -0.047725,
    1.188614, -1.188589,
    -0.143704, 0.143636,
    -0.677810, 0.677835,
    0.093899, -0.093879,
};

float Cg_init[2] = {
    -0.780977, -0.780999
};

float xstd_init[12] = {
    0.003818, 0.001400, 0.100065, 0.170242, 0.001741, 0.000543, 0.030961, 0.086909, 0.000570, 0.000100, 0.020935, 0.067602
};

float xmean_init[12] = {
    0.009871, -0.006227, 0.170173, 0.573629, 0.003299, -0.007690, 0.007506, 0.052444, 0.003135, -0.007806, 0.005432, 0.066519
};


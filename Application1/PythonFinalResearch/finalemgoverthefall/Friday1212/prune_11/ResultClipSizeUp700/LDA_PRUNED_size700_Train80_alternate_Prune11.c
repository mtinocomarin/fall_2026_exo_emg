// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 73.08%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:51:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.862611, 0.862532,
    -0.226679, 0.226756,
    0.656441, -0.656453,
    0.712557, -0.712538,
    1.236156, -1.236059,
    -1.049515, 1.049320,
    -0.420548, 0.420639,
    -0.021688, 0.021700,
    0.767739, -0.767896,
    -0.201132, 0.201517,
    -0.385377, 0.385236,
    0.101693, -0.101825,
};

float Cg_init[2] = {
    -0.614567, -0.614571
};

float xstd_init[12] = {
    0.003495, 0.001223, 0.104754, 0.171880, 0.001324, 0.000407, 0.021228, 0.072513, 0.000519, 0.000080, 0.016807, 0.061079
};

float xmean_init[12] = {
    0.009751, -0.006250, 0.179195, 0.594872, 0.003101, -0.007754, 0.005665, 0.049524, 0.003109, -0.007812, 0.004493, 0.064103
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.82%
// test_accuracy: 76.14%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.705351, 0.705335,
    -0.174291, 0.174305,
    0.349962, -0.349984,
    0.792836, -0.792827,
    0.792163, -0.792153,
    -0.898130, 0.898135,
    -0.020277, 0.020268,
    -0.022767, 0.022756,
    -0.485557, 0.485435,
    0.410516, -0.410192,
    -0.349393, 0.349278,
    0.139343, -0.139490,
};

float Cg_init[2] = {
    -0.336149, -0.336135
};

float xstd_init[12] = {
    0.003712, 0.001321, 0.106177, 0.168504, 0.001472, 0.000424, 0.020657, 0.071551, 0.001695, 0.000089, 0.016416, 0.066960
};

float xmean_init[12] = {
    0.009858, -0.006248, 0.172944, 0.587598, 0.003178, -0.007740, 0.005368, 0.049286, 0.003253, -0.007809, 0.004675, 0.066948
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.48%
// test_accuracy: 87.50%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.021841, 1.021864,
    -0.242481, 0.242473,
    0.998684, -0.998673,
    0.674581, -0.674599,
    1.638244, -1.638261,
    -2.087657, 2.087654,
    0.265890, -0.265888,
    0.062695, -0.062679,
    1.119765, -1.119703,
    -0.490127, 0.489975,
    -0.558052, 0.558091,
    0.498074, -0.498015,
};

float Cg_init[2] = {
    -0.865157, -0.865146
};

float xstd_init[12] = {
    0.003372, 0.001179, 0.093823, 0.156044, 0.001612, 0.000517, 0.026746, 0.079154, 0.000561, 0.000100, 0.017904, 0.067184
};

float xmean_init[12] = {
    0.009700, -0.006284, 0.163968, 0.570000, 0.003226, -0.007703, 0.006825, 0.049286, 0.003168, -0.007803, 0.004921, 0.068095
};


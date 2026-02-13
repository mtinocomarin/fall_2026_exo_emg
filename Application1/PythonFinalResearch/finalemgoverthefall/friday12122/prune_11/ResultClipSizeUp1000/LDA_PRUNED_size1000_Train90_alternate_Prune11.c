// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.00%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_10.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:08:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.581306, 0.581281,
    -0.312041, 0.312075,
    0.490343, -0.490381,
    0.555412, -0.555390,
    0.860556, -0.860609,
    -0.830434, 0.830550,
    -0.141013, 0.140976,
    -0.111602, 0.111575,
    0.631417, -0.631449,
    0.118997, -0.118890,
    -0.376110, 0.376081,
    0.015898, -0.015961,
};

float Cg_init[2] = {
    -0.458548, -0.458566
};

float xstd_init[12] = {
    0.003081, 0.001190, 0.099375, 0.161951, 0.001136, 0.000341, 0.017578, 0.063735, 0.000521, 0.000071, 0.013913, 0.060610
};

float xmean_init[12] = {
    0.009422, -0.006369, 0.171116, 0.582905, 0.003003, -0.007776, 0.004295, 0.044969, 0.003079, -0.007817, 0.003425, 0.062106
};


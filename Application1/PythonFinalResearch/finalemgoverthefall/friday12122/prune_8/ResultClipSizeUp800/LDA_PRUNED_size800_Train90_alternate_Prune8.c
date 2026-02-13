// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.69%
// test_accuracy: 76.67%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.644318, 0.644340,
    -0.326585, 0.326592,
    0.410456, -0.410500,
    0.619941, -0.619926,
    0.920581, -0.920598,
    -0.940468, 0.940529,
    -0.097246, 0.097219,
    -0.130931, 0.130911,
    0.715759, -0.715718,
    0.046472, -0.046580,
    -0.387491, 0.387538,
    -0.021540, 0.021562,
};

float Cg_init[2] = {
    -0.461669, -0.461683
};

float xstd_init[12] = {
    0.003532, 0.001344, 0.104555, 0.167562, 0.001261, 0.000385, 0.019415, 0.068342, 0.000517, 0.000073, 0.014498, 0.061735
};

float xmean_init[12] = {
    0.009639, -0.006288, 0.173017, 0.586048, 0.003071, -0.007755, 0.005143, 0.047905, 0.003094, -0.007814, 0.003683, 0.065429
};


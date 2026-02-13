// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.93%
// test_accuracy: 69.41%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:12:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.544843, 0.544927,
    -0.015047, 0.014990,
    0.488414, -0.488453,
    0.159661, -0.159663,
    -0.307588, 0.308184,
    0.135982, -0.136688,
    -0.018888, 0.018937,
    0.170304, -0.170253,
    0.230286, -0.230301,
    -0.257261, 0.257274,
    -0.232946, 0.232938,
    0.244413, -0.244419,
};

float Cg_init[2] = {
    -0.149303, -0.149318
};

float xstd_init[12] = {
    0.004154, 0.001920, 0.340168, 0.122830, 0.000878, 0.000155, 0.039169, 0.130463, 0.000613, 0.000146, 0.043478, 0.140053
};

float xmean_init[12] = {
    0.010077, -0.005796, 0.422106, 1.038387, 0.003270, -0.007783, 0.007602, 0.616561, 0.003467, -0.007748, 0.012573, 0.685999
};


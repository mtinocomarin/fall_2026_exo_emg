// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.04%
// test_accuracy: 77.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 17:01:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.166705, -0.166745,
    -0.084885, 0.084966,
    -0.042984, 0.042985,
    -0.137498, 0.137444,
    1.345832, -1.345659,
    -1.069872, 1.069600,
    -0.313757, 0.313815,
    0.227321, -0.227259,
    -0.668854, 0.668822,
    -0.386738, 0.386778,
    0.387901, -0.387928,
    1.294806, -1.294787,
};

float Cg_init[2] = {
    -0.520200, -0.520155
};

float xstd_init[12] = {
    0.000861, 0.000061, 0.006969, 0.067831, 0.000694, 0.000117, 0.015696, 0.057371, 0.003258, 0.001037, 0.119659, 0.210914
};

float xmean_init[12] = {
    0.005544, -0.007764, 0.001284, 0.088593, 0.002364, -0.007850, 0.005333, 0.050222, 0.009098, -0.006588, 0.139556, 0.476593
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.07%
// test_accuracy: 54.41%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:43:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.290983, 0.290846,
    0.148882, -0.148542,
    -0.058730, 0.058700,
    -0.027109, 0.026918,
    -0.218249, 0.218324,
    -0.245845, 0.245823,
    -0.088367, 0.088336,
    0.307406, -0.307413,
    -0.319427, 0.319488,
    0.174906, -0.175035,
    0.009627, -0.009578,
    0.088434, -0.088416,
};

float Cg_init[2] = {
    -0.098081, -0.098070
};

float xstd_init[12] = {
    0.001028, 0.000083, 0.013435, 0.081173, 0.003086, 0.000835, 0.090086, 0.181344, 0.000861, 0.000111, 0.020041, 0.076077
};

float xmean_init[12] = {
    0.006506, -0.007686, 0.005574, 0.145127, 0.008570, -0.006862, 0.104566, 0.438404, 0.004332, -0.007715, 0.011064, 0.127984
};


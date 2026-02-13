// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 64.88%
// test_accuracy: 54.28%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:42:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.212032, 0.211933,
    0.159667, -0.159463,
    -0.043169, 0.043153,
    -0.044295, 0.044185,
    -0.230168, 0.230232,
    -0.195887, 0.195827,
    -0.117537, 0.117508,
    0.316512, -0.316533,
    -0.301318, 0.301147,
    0.136854, -0.136456,
    0.010719, -0.010791,
    0.109133, -0.109308,
};

float Cg_init[2] = {
    -0.083441, -0.083413
};

float xstd_init[12] = {
    0.001053, 0.000083, 0.013428, 0.080133, 0.003018, 0.000821, 0.089328, 0.179586, 0.000866, 0.000110, 0.020045, 0.075273
};

float xmean_init[12] = {
    0.006496, -0.007687, 0.005614, 0.145227, 0.008546, -0.006865, 0.103957, 0.435644, 0.004296, -0.007721, 0.010623, 0.124828
};


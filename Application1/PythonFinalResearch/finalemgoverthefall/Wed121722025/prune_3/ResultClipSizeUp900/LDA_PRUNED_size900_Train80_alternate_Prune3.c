// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 64.20%
// test_accuracy: 54.04%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 13:42:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.258893, 0.258775,
    0.136054, -0.135756,
    -0.040603, 0.040577,
    -0.047143, 0.046970,
    -0.264852, 0.264890,
    -0.200965, 0.200964,
    -0.049856, 0.049827,
    0.304515, -0.304512,
    -0.336133, 0.336182,
    0.154452, -0.154556,
    0.004893, -0.004852,
    0.089144, -0.089133,
};

float Cg_init[2] = {
    -0.089695, -0.089685
};

float xstd_init[12] = {
    0.001017, 0.000082, 0.013621, 0.080558, 0.003088, 0.000835, 0.090037, 0.181887, 0.000864, 0.000111, 0.019895, 0.075914
};

float xmean_init[12] = {
    0.006510, -0.007686, 0.005761, 0.145599, 0.008621, -0.006850, 0.105450, 0.440771, 0.004312, -0.007717, 0.010899, 0.127343
};


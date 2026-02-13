// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.24%
// test_accuracy: 51.34%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:42:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.339913, 0.340096,
    0.208950, -0.209321,
    -0.021636, 0.021672,
    -0.128418, 0.128601,
    -0.252091, 0.252099,
    -0.225551, 0.225544,
    -0.025685, 0.025661,
    0.285356, -0.285291,
    -0.442811, 0.443065,
    0.238014, -0.238478,
    -0.044385, 0.044488,
    0.129161, -0.129018,
};

float Cg_init[2] = {
    -0.116493, -0.116546
};

float xstd_init[12] = {
    0.001004, 0.000080, 0.013415, 0.080577, 0.003062, 0.000828, 0.088897, 0.180580, 0.000852, 0.000111, 0.019875, 0.073539
};

float xmean_init[12] = {
    0.006479, -0.007687, 0.005517, 0.144877, 0.008615, -0.006854, 0.104729, 0.442561, 0.004321, -0.007717, 0.010608, 0.126405
};


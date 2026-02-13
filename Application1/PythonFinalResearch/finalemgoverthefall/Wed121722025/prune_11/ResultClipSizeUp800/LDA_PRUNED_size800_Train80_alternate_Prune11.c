// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.97%
// test_accuracy: 53.75%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt', 'act2\\trial_25.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:47:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.627884, 0.627891,
    0.432345, -0.432333,
    -0.064294, 0.064293,
    -0.268810, 0.268790,
    -0.326824, 0.326842,
    -0.288822, 0.288850,
    0.009002, -0.009030,
    0.243818, -0.243781,
    -0.590825, 0.591049,
    0.317079, -0.317537,
    0.056805, -0.056711,
    0.119710, -0.119551,
};

float Cg_init[2] = {
    -0.222697, -0.222731
};

float xstd_init[12] = {
    0.001089, 0.000082, 0.012003, 0.081677, 0.003231, 0.000879, 0.093310, 0.187675, 0.000886, 0.000118, 0.019507, 0.075732
};

float xmean_init[12] = {
    0.006550, -0.007684, 0.004698, 0.146159, 0.008422, -0.006883, 0.101291, 0.428572, 0.004419, -0.007709, 0.010540, 0.130604
};


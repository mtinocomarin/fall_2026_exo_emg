// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.01%
// test_accuracy: 68.23%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-12 13:14:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.633399, 0.633417,
    -0.026144, 0.026099,
    0.633844, -0.633828,
    0.339943, -0.339942,
    -0.401067, 0.401123,
    0.132572, -0.132625,
    -0.022710, 0.022708,
    0.148939, -0.148946,
    0.236003, -0.235878,
    -0.358020, 0.357826,
    -0.224802, 0.224866,
    0.389266, -0.389249,
};

float Cg_init[2] = {
    -0.270713, -0.270706
};

float xstd_init[12] = {
    0.004545, 0.002121, 0.351125, 0.124143, 0.001067, 0.000194, 0.044634, 0.135718, 0.000663, 0.000164, 0.049685, 0.139804
};

float xmean_init[12] = {
    0.010528, -0.005612, 0.449786, 1.036731, 0.003402, -0.007758, 0.011859, 0.623206, 0.003545, -0.007729, 0.014850, 0.702051
};


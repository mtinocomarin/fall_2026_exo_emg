// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.10%
// test_accuracy: 70.19%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:12:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.489986, 0.490004,
    -0.089639, 0.089598,
    0.458067, -0.458071,
    0.272156, -0.272144,
    -0.390582, 0.390606,
    0.131477, -0.131498,
    -0.008701, 0.008702,
    0.147958, -0.147950,
    0.159650, -0.159483,
    -0.220659, 0.220410,
    -0.299309, 0.299383,
    0.286913, -0.286891,
};

float Cg_init[2] = {
    -0.196369, -0.196363
};

float xstd_init[12] = {
    0.004548, 0.002124, 0.346352, 0.121083, 0.001028, 0.000183, 0.046867, 0.132148, 0.000653, 0.000158, 0.045178, 0.140153
};

float xmean_init[12] = {
    0.010474, -0.005632, 0.443163, 1.036256, 0.003362, -0.007766, 0.010940, 0.617692, 0.003527, -0.007733, 0.014957, 0.698359
};


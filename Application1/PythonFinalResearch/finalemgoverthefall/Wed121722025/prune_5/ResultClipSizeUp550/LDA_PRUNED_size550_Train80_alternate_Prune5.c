// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.04%
// test_accuracy: 54.37%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:43:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.413237, 0.413203,
    0.274247, -0.274149,
    0.067598, -0.067602,
    -0.214734, 0.214672,
    -0.608258, 0.608345,
    -0.137392, 0.137315,
    0.271262, -0.271276,
    0.277635, -0.277638,
    -0.534471, 0.534476,
    0.229018, -0.228997,
    -0.024184, 0.024190,
    0.168674, -0.168700,
};

float Cg_init[2] = {
    -0.179132, -0.179130
};

float xstd_init[12] = {
    0.001015, 0.000079, 0.012386, 0.079655, 0.003001, 0.000810, 0.088260, 0.178823, 0.000834, 0.000109, 0.018522, 0.070161
};

float xmean_init[12] = {
    0.006460, -0.007690, 0.004691, 0.142148, 0.008659, -0.006847, 0.104840, 0.441259, 0.004349, -0.007717, 0.009531, 0.127037
};


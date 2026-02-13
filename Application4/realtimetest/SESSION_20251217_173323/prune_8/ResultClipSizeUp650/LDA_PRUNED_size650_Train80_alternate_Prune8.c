// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 18:09:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.331322, 0.331269,
    -0.037951, 0.038075,
    0.602289, -0.602333,
    0.461554, -0.461587,
    1.029360, -1.029420,
    -1.124454, 1.124485,
    -1.101809, 1.101842,
    0.322157, -0.322170,
    -0.513607, 0.513628,
    -0.603292, 0.603301,
    0.473512, -0.473554,
    1.524685, -1.524664,
};

float Cg_init[2] = {
    -0.656447, -0.656448
};

float xstd_init[12] = {
    0.001200, 0.000202, 0.027363, 0.095468, 0.002870, 0.000900, 0.052115, 0.137307, 0.005746, 0.002372, 0.164343, 0.274383
};

float xmean_init[12] = {
    0.005655, -0.007698, 0.008384, 0.132273, 0.004307, -0.007494, 0.019798, 0.129849, 0.011625, -0.005695, 0.177677, 0.545454
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 68.75%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_6.txt', 'act1\\trial_10.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_4.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 14:43:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -6.560081, 6.560081,
    3.277604, -3.277590,
    -1.626073, 1.626072,
    0.907188, -0.907194,
    -3.709184, 3.709194,
    1.467720, -1.467718,
    -0.968809, 0.968803,
    0.445115, -0.445111,
    0.380946, -0.380982,
    -0.124037, 0.124088,
    1.086873, -1.086883,
    1.561520, -1.561528,
};

float Cg_init[2] = {
    -3.510835, -3.510834
};

float xstd_init[12] = {
    0.000943, 0.000130, 0.019817, 0.109340, 0.004115, 0.001190, 0.085632, 0.183006, 0.000787, 0.000125, 0.031361, 0.095482
};

float xmean_init[12] = {
    0.005996, -0.007626, 0.011111, 0.178000, 0.010757, -0.006224, 0.149333, 0.552667, 0.005133, -0.007568, 0.032000, 0.251333
};


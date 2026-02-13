// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.11%
// test_accuracy: 70.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_21.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_15.txt', 'act1\\trial_1.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 18:10:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.030787, 1.030923,
    1.386898, -1.387294,
    -0.322343, 0.322512,
    -0.120706, 0.120818,
    0.447632, -0.447559,
    0.262864, -0.262952,
    -1.656697, 1.656775,
    0.408784, -0.408808,
    -0.286626, 0.286647,
    -1.019664, 1.019647,
    0.472602, -0.472596,
    1.854120, -1.854135,
};

float Cg_init[2] = {
    -0.902299, -0.902352
};

float xstd_init[12] = {
    0.001132, 0.000130, 0.028555, 0.094290, 0.002723, 0.000919, 0.051137, 0.134839, 0.006442, 0.002705, 0.173945, 0.271964
};

float xmean_init[12] = {
    0.005536, -0.007713, 0.009481, 0.133778, 0.004255, -0.007530, 0.019852, 0.125111, 0.012404, -0.005408, 0.189333, 0.554667
};


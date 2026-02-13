// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.01%
// test_accuracy: 74.17%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt']}
// generated: 2025-12-17 18:09:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.470760, 0.470742,
    0.060739, -0.060693,
    0.444434, -0.444433,
    0.166270, -0.166290,
    0.861659, -0.861640,
    -0.791284, 0.791228,
    -0.959366, 0.959400,
    0.250666, -0.250677,
    -0.443612, 0.443612,
    -0.562461, 0.562464,
    0.397298, -0.397321,
    1.276870, -1.276844,
};

float Cg_init[2] = {
    -0.540310, -0.540302
};

float xstd_init[12] = {
    0.001218, 0.000194, 0.026132, 0.098012, 0.003062, 0.000945, 0.056933, 0.140871, 0.005785, 0.002333, 0.156284, 0.257564
};

float xmean_init[12] = {
    0.005641, -0.007697, 0.008718, 0.134103, 0.004453, -0.007456, 0.023162, 0.131923, 0.011660, -0.005732, 0.173248, 0.544102
};


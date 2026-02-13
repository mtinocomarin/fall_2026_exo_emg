// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.70%
// test_accuracy: 71.67%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_14.txt', 'act1\\trial_18.txt']}
// generated: 2025-12-17 18:09:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.229455, 1.229385,
    1.379347, -1.379167,
    -0.291096, 0.291032,
    -0.660402, 0.660344,
    2.014060, -2.014031,
    -1.242962, 1.242901,
    -1.275773, 1.275769,
    -0.220489, 0.220488,
    0.097952, -0.097959,
    -1.377740, 1.377730,
    0.985949, -0.985941,
    1.387222, -1.387226,
};

float Cg_init[2] = {
    -1.005625, -1.005600
};

float xstd_init[12] = {
    0.001074, 0.000121, 0.019581, 0.082148, 0.002697, 0.000649, 0.052211, 0.133449, 0.005841, 0.002346, 0.172341, 0.260654
};

float xmean_init[12] = {
    0.005392, -0.007720, 0.007475, 0.124242, 0.004255, -0.007584, 0.019394, 0.123333, 0.011903, -0.005616, 0.183030, 0.532727
};


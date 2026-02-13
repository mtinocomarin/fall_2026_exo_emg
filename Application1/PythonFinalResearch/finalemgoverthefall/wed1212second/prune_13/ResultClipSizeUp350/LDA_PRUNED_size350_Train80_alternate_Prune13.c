// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.18%
// test_accuracy: 73.96%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:05:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.132704, -0.132748,
    -0.169458, 0.169558,
    -0.078974, 0.078957,
    -0.112530, 0.112484,
    2.235898, -2.235901,
    -1.955114, 1.955102,
    -0.352159, 0.352163,
    0.215144, -0.215129,
    -0.644920, 0.644914,
    -1.181592, 1.181581,
    0.397381, -0.397363,
    2.250975, -2.250987,
};

float Cg_init[2] = {
    -0.900627, -0.900626
};

float xstd_init[12] = {
    0.000894, 0.000084, 0.008622, 0.067354, 0.000853, 0.000151, 0.016375, 0.060570, 0.003369, 0.000981, 0.117040, 0.211547
};

float xmean_init[12] = {
    0.005604, -0.007757, 0.001988, 0.092807, 0.002452, -0.007838, 0.005965, 0.054386, 0.008956, -0.006644, 0.129708, 0.470527
};


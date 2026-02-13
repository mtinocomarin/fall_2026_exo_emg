// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.11%
// test_accuracy: 65.42%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 12:43:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.717678, 0.717756,
    0.321513, -0.321586,
    0.511856, -0.511917,
    0.614812, -0.614803,
    -0.432996, 0.432730,
    0.181072, -0.180732,
    -0.129988, 0.129984,
    0.023584, -0.023649,
    0.252923, -0.252684,
    -0.098287, 0.097796,
    -0.546761, 0.546882,
    -0.023509, 0.023676,
};

float Cg_init[2] = {
    -0.327528, -0.327528
};

float xstd_init[12] = {
    0.003909, 0.001663, 0.148579, 0.204438, 0.001040, 0.000181, 0.027096, 0.078794, 0.000661, 0.000165, 0.030131, 0.106573
};

float xmean_init[12] = {
    0.010117, -0.005838, 0.241853, 0.684056, 0.003358, -0.007768, 0.008926, 0.073667, 0.003518, -0.007732, 0.013556, 0.120334
};


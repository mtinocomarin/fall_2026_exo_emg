// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.30%
// test_accuracy: 83.33%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 15:53:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.512993, 1.513021,
    -0.540222, 0.540181,
    2.138489, -2.138485,
    0.600267, -0.600265,
    3.448286, -3.448339,
    -3.084493, 3.084566,
    -0.121996, 0.121978,
    -0.426977, 0.426976,
    1.518736, -1.518753,
    -1.248045, 1.248118,
    -0.852025, 0.852009,
    1.122344, -1.122379,
};

float Cg_init[2] = {
    -1.548809, -1.548820
};

float xstd_init[12] = {
    0.003613, 0.001262, 0.100958, 0.165390, 0.001757, 0.000572, 0.031362, 0.087868, 0.000564, 0.000114, 0.020960, 0.066200
};

float xmean_init[12] = {
    0.009889, -0.006171, 0.164691, 0.572593, 0.003330, -0.007684, 0.008889, 0.053704, 0.003240, -0.007789, 0.005679, 0.076296
};


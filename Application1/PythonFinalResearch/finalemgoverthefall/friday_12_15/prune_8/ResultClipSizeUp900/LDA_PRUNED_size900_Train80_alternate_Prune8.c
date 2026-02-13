// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.90%
// test_accuracy: 65.07%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 12:43:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.645905, 0.645916,
    0.278025, -0.277998,
    0.513864, -0.513891,
    0.586578, -0.586564,
    -0.362730, 0.362497,
    0.099744, -0.099441,
    -0.107529, 0.107512,
    0.023206, -0.023271,
    0.256215, -0.256352,
    -0.083831, 0.084158,
    -0.492458, 0.492381,
    -0.080811, 0.080687,
};

float Cg_init[2] = {
    -0.305071, -0.305080
};

float xstd_init[12] = {
    0.003828, 0.001647, 0.149040, 0.208180, 0.001006, 0.000180, 0.025754, 0.079538, 0.000653, 0.000162, 0.030347, 0.105272
};

float xmean_init[12] = {
    0.009978, -0.005872, 0.241602, 0.680589, 0.003350, -0.007769, 0.008235, 0.073971, 0.003500, -0.007737, 0.012680, 0.116030
};


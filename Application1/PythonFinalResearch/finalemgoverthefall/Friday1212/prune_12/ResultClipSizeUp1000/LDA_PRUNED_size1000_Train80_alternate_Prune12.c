// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.53%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 15:52:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.741343, 0.741253,
    -0.301588, 0.301649,
    0.621967, -0.621957,
    0.576628, -0.576619,
    1.064670, -1.064492,
    -0.968383, 0.968033,
    -0.089719, 0.089872,
    -0.115306, 0.115332,
    0.617361, -0.617507,
    0.074015, -0.073605,
    -0.359929, 0.359782,
    0.035194, -0.035361,
};

float Cg_init[2] = {
    -0.515225, -0.515198
};

float xstd_init[12] = {
    0.003215, 0.001275, 0.102904, 0.166997, 0.001091, 0.000317, 0.015596, 0.062855, 0.000535, 0.000075, 0.015011, 0.061046
};

float xmean_init[12] = {
    0.009525, -0.006310, 0.177159, 0.586579, 0.002942, -0.007797, 0.003263, 0.042842, 0.003078, -0.007815, 0.003684, 0.062158
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.44%
// test_accuracy: 78.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:53:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.068344, 2.068330,
    0.572234, -0.572253,
    1.068235, -1.068230,
    1.098524, -1.098506,
    2.540543, -2.540549,
    -1.247422, 1.247407,
    -0.819894, 0.819924,
    -0.921924, 0.921927,
    0.883356, -0.883440,
    -1.006217, 1.006395,
    -0.396519, 0.396475,
    0.677674, -0.677731,
};

float Cg_init[2] = {
    -1.038155, -1.038171
};

float xstd_init[12] = {
    0.004123, 0.001527, 0.100510, 0.175794, 0.001919, 0.000606, 0.040467, 0.102863, 0.000584, 0.000107, 0.023483, 0.069756
};

float xmean_init[12] = {
    0.010154, -0.006119, 0.169815, 0.580000, 0.003409, -0.007667, 0.011481, 0.058056, 0.003175, -0.007799, 0.005926, 0.071111
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.75%
// test_accuracy: 74.31%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 15:53:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.014979, 1.014974,
    -0.302816, 0.302828,
    0.907539, -0.907570,
    0.928524, -0.928503,
    1.447169, -1.447163,
    -1.588362, 1.588349,
    -0.303210, 0.303218,
    -0.096860, 0.096860,
    1.312073, -1.312093,
    -0.033889, 0.033949,
    -0.892794, 0.892771,
    0.152546, -0.152572,
};

float Cg_init[2] = {
    -1.010667, -1.010670
};

float xstd_init[12] = {
    0.003469, 0.001126, 0.105028, 0.177149, 0.001636, 0.000513, 0.025212, 0.083559, 0.000525, 0.000088, 0.019649, 0.062060
};

float xmean_init[12] = {
    0.009705, -0.006293, 0.169548, 0.584321, 0.003322, -0.007701, 0.007737, 0.057284, 0.003115, -0.007811, 0.005267, 0.067531
};


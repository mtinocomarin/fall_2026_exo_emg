// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.17%
// test_accuracy: 83.33%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 12:45:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.097366, 1.097380,
    -0.342860, 0.342844,
    1.136578, -1.136573,
    1.668031, -1.668029,
    1.257150, -1.257117,
    -0.528191, 0.528144,
    -0.023648, 0.023647,
    -1.787659, 1.787677,
    0.772314, -0.772345,
    -1.385605, 1.385653,
    -0.218148, 0.218140,
    -0.111507, 0.111498,
};

float Cg_init[2] = {
    -1.073774, -1.073778
};

float xstd_init[12] = {
    0.004133, 0.001733, 0.143466, 0.187215, 0.001730, 0.000322, 0.042873, 0.109186, 0.000676, 0.000163, 0.023549, 0.100945
};

float xmean_init[12] = {
    0.010741, -0.005701, 0.247555, 0.708333, 0.003771, -0.007693, 0.014889, 0.093333, 0.003568, -0.007726, 0.010667, 0.125333
};


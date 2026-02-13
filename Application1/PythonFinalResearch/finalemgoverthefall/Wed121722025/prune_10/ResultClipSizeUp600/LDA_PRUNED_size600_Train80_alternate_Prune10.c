// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.86%
// test_accuracy: 53.98%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 13:46:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.696552, 0.696573,
    0.515275, -0.515326,
    -0.073848, 0.073856,
    -0.318923, 0.318946,
    -0.367536, 0.367551,
    -0.270902, 0.270906,
    0.031007, -0.031025,
    0.244681, -0.244678,
    -0.630257, 0.630278,
    0.295002, -0.295022,
    0.088863, -0.088861,
    0.128416, -0.128422,
};

float Cg_init[2] = {
    -0.258185, -0.258196
};

float xstd_init[12] = {
    0.001075, 0.000081, 0.011017, 0.082234, 0.003159, 0.000876, 0.093573, 0.185888, 0.000844, 0.000111, 0.018434, 0.073567
};

float xmean_init[12] = {
    0.006488, -0.007687, 0.003747, 0.144298, 0.008524, -0.006857, 0.104022, 0.432314, 0.004405, -0.007711, 0.009862, 0.133389
};


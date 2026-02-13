// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.22%
// test_accuracy: 75.37%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:53:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.802657, 0.802620,
    -0.139770, 0.139806,
    0.858764, -0.858786,
    0.521772, -0.521749,
    1.259389, -1.259440,
    -1.231645, 1.231693,
    -0.247843, 0.247854,
    -0.095383, 0.095374,
    0.563850, -0.563902,
    0.242905, -0.242744,
    -0.356072, 0.356025,
    0.078501, -0.078581,
};

float Cg_init[2] = {
    -0.642059, -0.642066
};

float xstd_init[12] = {
    0.002929, 0.001040, 0.097679, 0.165415, 0.001287, 0.000392, 0.020634, 0.071415, 0.000509, 0.000064, 0.012124, 0.057340
};

float xmean_init[12] = {
    0.009301, -0.006417, 0.168889, 0.579608, 0.003090, -0.007755, 0.005621, 0.049347, 0.003094, -0.007817, 0.003181, 0.063007
};


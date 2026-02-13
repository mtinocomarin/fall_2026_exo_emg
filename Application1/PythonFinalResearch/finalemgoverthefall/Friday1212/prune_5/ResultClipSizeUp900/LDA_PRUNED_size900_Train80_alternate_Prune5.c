// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.02%
// test_accuracy: 70.22%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:48:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.704452, 0.704468,
    -0.156714, 0.156701,
    0.445220, -0.445248,
    0.537300, -0.537287,
    0.701537, -0.701531,
    -0.808831, 0.808831,
    0.008713, -0.008707,
    -0.010561, 0.010547,
    -0.455868, 0.455834,
    0.540502, -0.540398,
    -0.358108, 0.358079,
    0.044388, -0.044453,
};

float Cg_init[2] = {
    -0.261204, -0.261203
};

float xstd_init[12] = {
    0.003381, 0.001351, 0.105131, 0.167287, 0.001320, 0.000377, 0.022045, 0.071645, 0.001450, 0.000080, 0.013786, 0.064075
};

float xmean_init[12] = {
    0.009590, -0.006291, 0.175280, 0.585708, 0.003077, -0.007764, 0.005229, 0.048366, 0.003195, -0.007813, 0.003282, 0.064663
};


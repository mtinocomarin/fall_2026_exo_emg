// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.52%
// test_accuracy: 80.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:16:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.295843, 1.295849,
    0.323272, -0.323279,
    1.112404, -1.112400,
    0.587431, -0.587430,
    -0.248924, 0.248981,
    -0.111993, 0.111934,
    -0.159102, 0.159097,
    0.391555, -0.391547,
    -0.480383, 0.480323,
    0.160085, -0.160013,
    -0.420441, 0.420417,
    0.433853, -0.433844,
};

float Cg_init[2] = {
    -0.595524, -0.595518
};

float xstd_init[12] = {
    0.004522, 0.001935, 0.342769, 0.122258, 0.001290, 0.000219, 0.058805, 0.140555, 0.000710, 0.000165, 0.051374, 0.151087
};

float xmean_init[12] = {
    0.010950, -0.005596, 0.466349, 1.036572, 0.003534, -0.007740, 0.016190, 0.616190, 0.003587, -0.007729, 0.017143, 0.697714
};


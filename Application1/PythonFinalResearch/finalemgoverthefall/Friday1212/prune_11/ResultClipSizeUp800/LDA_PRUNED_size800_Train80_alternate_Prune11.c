// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.94%
// test_accuracy: 74.58%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:52:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.771030, 0.771050,
    -0.279544, 0.279549,
    0.616485, -0.616526,
    0.680868, -0.680851,
    1.159532, -1.159582,
    -1.090440, 1.090530,
    -0.288439, 0.288410,
    -0.025674, 0.025663,
    0.686788, -0.686719,
    0.035033, -0.035187,
    -0.434665, 0.434735,
    0.013764, -0.013734,
};

float Cg_init[2] = {
    -0.580236, -0.580250
};

float xstd_init[12] = {
    0.003381, 0.001316, 0.106127, 0.171656, 0.001266, 0.000386, 0.020302, 0.070219, 0.000508, 0.000074, 0.015517, 0.059799
};

float xmean_init[12] = {
    0.009705, -0.006253, 0.179260, 0.597143, 0.003082, -0.007758, 0.005460, 0.050032, 0.003090, -0.007816, 0.003683, 0.062096
};


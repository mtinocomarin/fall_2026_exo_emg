// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.89%
// test_accuracy: 73.03%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:49:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.543198, 0.543230,
    -0.258733, 0.258738,
    0.450901, -0.450939,
    0.441554, -0.441549,
    0.802334, -0.802262,
    -0.872359, 0.872251,
    -0.023530, 0.023564,
    -0.092826, 0.092819,
    0.559974, -0.559908,
    -0.031717, 0.031539,
    -0.270133, 0.270197,
    0.056602, -0.056548,
};

float Cg_init[2] = {
    -0.357959, -0.357956
};

float xstd_init[12] = {
    0.003290, 0.001298, 0.103455, 0.168013, 0.001231, 0.000371, 0.021736, 0.070594, 0.000506, 0.000071, 0.013737, 0.059181
};

float xmean_init[12] = {
    0.009505, -0.006308, 0.177011, 0.585263, 0.003039, -0.007768, 0.005081, 0.047579, 0.003068, -0.007816, 0.003256, 0.061895
};


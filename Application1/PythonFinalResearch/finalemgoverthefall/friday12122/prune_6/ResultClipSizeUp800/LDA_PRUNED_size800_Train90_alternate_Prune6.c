// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.78%
// test_accuracy: 76.67%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:05:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.587942, 0.587898,
    -0.290393, 0.290430,
    0.307632, -0.307663,
    0.598548, -0.598517,
    0.761293, -0.761375,
    -0.904362, 0.904508,
    0.015763, -0.015799,
    -0.080977, 0.080947,
    0.632993, -0.633121,
    0.063577, -0.063200,
    -0.359399, 0.359276,
    -0.026634, 0.026470,
};

float Cg_init[2] = {
    -0.389027, -0.389040
};

float xstd_init[12] = {
    0.003580, 0.001392, 0.104083, 0.165262, 0.001308, 0.000402, 0.023009, 0.071807, 0.000508, 0.000072, 0.014056, 0.060796
};

float xmean_init[12] = {
    0.009645, -0.006287, 0.171675, 0.584889, 0.003079, -0.007751, 0.005807, 0.048089, 0.003089, -0.007815, 0.003467, 0.064667
};


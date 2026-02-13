// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.96%
// test_accuracy: 79.17%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-17 12:37:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.918902, 0.918899,
    0.180396, -0.180420,
    0.253998, -0.254020,
    0.696526, -0.696519,
    -0.324794, 0.325014,
    0.119594, -0.119798,
    -0.054482, 0.054479,
    -0.043682, 0.043681,
    0.193833, -0.193662,
    -0.027927, 0.027569,
    -0.376598, 0.376702,
    -0.086354, 0.086454,
};

float Cg_init[2] = {
    -0.244391, -0.244398
};

float xstd_init[12] = {
    0.004795, 0.002237, 0.151170, 0.205243, 0.001173, 0.000208, 0.029689, 0.088537, 0.000673, 0.000163, 0.028990, 0.104660
};

float xmean_init[12] = {
    0.010783, -0.005510, 0.249433, 0.687556, 0.003435, -0.007754, 0.010321, 0.079037, 0.003535, -0.007733, 0.013284, 0.120000
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_1\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.51%
// test_accuracy: 73.30%
// prune_trials_per_label: 1
// removed_trials: {'act2': ['act2\\trial_20.txt'], 'act1': ['act1\\trial_33.txt']}
// generated: 2025-12-17 12:36:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.813319, 0.813362,
    0.116993, -0.117033,
    0.279497, -0.279547,
    0.572826, -0.572806,
    -0.308427, 0.308244,
    0.172816, -0.172577,
    -0.101236, 0.101245,
    -0.029986, 0.029926,
    0.170886, -0.170770,
    -0.035671, 0.035442,
    -0.340566, 0.340632,
    -0.045484, 0.045561,
};

float Cg_init[2] = {
    -0.194992, -0.194993
};

float xstd_init[12] = {
    0.004718, 0.002224, 0.152923, 0.204656, 0.001082, 0.000192, 0.027464, 0.083607, 0.000660, 0.000160, 0.027761, 0.104442
};

float xmean_init[12] = {
    0.010626, -0.005560, 0.247274, 0.686687, 0.003387, -0.007762, 0.009228, 0.077420, 0.003521, -0.007735, 0.012630, 0.117713
};


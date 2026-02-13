// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.16%
// test_accuracy: 70.96%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:13:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.599148, 0.599138,
    -0.011735, 0.011741,
    0.625396, -0.625404,
    0.256989, -0.256987,
    -0.375775, 0.375576,
    0.163559, -0.163324,
    -0.013902, 0.013882,
    0.146290, -0.146304,
    0.290496, -0.290472,
    -0.340307, 0.340291,
    -0.253692, 0.253687,
    0.323257, -0.323240,
};

float Cg_init[2] = {
    -0.218625, -0.218619
};

float xstd_init[12] = {
    0.004153, 0.001856, 0.343969, 0.123062, 0.000958, 0.000170, 0.043454, 0.130251, 0.000628, 0.000152, 0.046038, 0.135936
};

float xmean_init[12] = {
    0.010106, -0.005796, 0.425636, 1.039129, 0.003314, -0.007775, 0.009441, 0.615773, 0.003489, -0.007742, 0.013145, 0.691154
};


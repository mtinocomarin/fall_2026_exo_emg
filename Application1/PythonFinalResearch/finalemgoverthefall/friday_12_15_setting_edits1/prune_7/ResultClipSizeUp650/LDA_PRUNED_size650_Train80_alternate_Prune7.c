// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.67%
// test_accuracy: 68.23%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-12 13:14:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.667156, 0.667166,
    -0.035076, 0.035051,
    0.707667, -0.707643,
    0.347298, -0.347311,
    -0.481599, 0.481487,
    0.212157, -0.212030,
    -0.026222, 0.026216,
    0.099310, -0.099329,
    0.324037, -0.323992,
    -0.446411, 0.446372,
    -0.209771, 0.209773,
    0.449963, -0.449962,
};

float Cg_init[2] = {
    -0.301091, -0.301085
};

float xstd_init[12] = {
    0.004552, 0.002131, 0.353505, 0.124639, 0.001082, 0.000196, 0.045455, 0.135083, 0.000665, 0.000165, 0.049448, 0.138954
};

float xmean_init[12] = {
    0.010552, -0.005606, 0.451332, 1.036667, 0.003406, -0.007758, 0.012333, 0.621267, 0.003541, -0.007730, 0.014000, 0.702000
};


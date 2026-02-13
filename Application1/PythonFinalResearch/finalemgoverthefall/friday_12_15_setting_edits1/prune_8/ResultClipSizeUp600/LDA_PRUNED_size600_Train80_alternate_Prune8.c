// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.87%
// test_accuracy: 73.86%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:15:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.552624, 0.552602,
    0.126919, -0.126933,
    0.529300, -0.529276,
    0.444391, -0.444385,
    -0.734950, 0.735046,
    0.223272, -0.223364,
    0.083322, -0.083323,
    0.325065, -0.325052,
    0.114388, -0.114274,
    -0.203695, 0.203533,
    -0.421393, 0.421437,
    0.276479, -0.276475,
};

float Cg_init[2] = {
    -0.336965, -0.336957
};

float xstd_init[12] = {
    0.004178, 0.001774, 0.332433, 0.121045, 0.001196, 0.000214, 0.054525, 0.133585, 0.000676, 0.000173, 0.050461, 0.142263
};

float xmean_init[12] = {
    0.010245, -0.005780, 0.432575, 1.033257, 0.003462, -0.007746, 0.014646, 0.613409, 0.003543, -0.007727, 0.017424, 0.703409
};


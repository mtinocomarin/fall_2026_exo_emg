// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.88%
// test_accuracy: 51.64%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 13:48:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.466675, 0.466548,
    0.276649, -0.276371,
    -0.026684, 0.026653,
    -0.109662, 0.109508,
    -0.323668, 0.323681,
    -0.286539, 0.286547,
    -0.304578, 0.304562,
    0.416429, -0.416419,
    -0.478868, 0.478942,
    0.325142, -0.325308,
    0.059163, -0.059108,
    0.166169, -0.166120,
};

float Cg_init[2] = {
    -0.224186, -0.224175
};

float xstd_init[12] = {
    0.001111, 0.000083, 0.013396, 0.082077, 0.003155, 0.000863, 0.088756, 0.184922, 0.000863, 0.000116, 0.020073, 0.076955
};

float xmean_init[12] = {
    0.006660, -0.007679, 0.005263, 0.151170, 0.008335, -0.006903, 0.097505, 0.424211, 0.004419, -0.007706, 0.010838, 0.133334
};


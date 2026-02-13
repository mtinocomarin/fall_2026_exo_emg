// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.18%
// test_accuracy: 81.25%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:50:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.003097, 1.003102,
    -0.749007, 0.748994,
    1.737642, -1.737641,
    0.470314, -0.470309,
    2.292777, -2.292902,
    -2.270476, 2.270700,
    -0.157101, 0.157012,
    0.133802, -0.133809,
    1.508029, -1.507989,
    -1.103910, 1.103865,
    -0.494018, 0.494034,
    0.789712, -0.789704,
};

float Cg_init[2] = {
    -1.201232, -1.201236
};

float xstd_init[12] = {
    0.003381, 0.001173, 0.096257, 0.165375, 0.001616, 0.000521, 0.028552, 0.081605, 0.000556, 0.000106, 0.019250, 0.065464
};

float xmean_init[12] = {
    0.009711, -0.006254, 0.165252, 0.569091, 0.003214, -0.007716, 0.007273, 0.050303, 0.003176, -0.007797, 0.005051, 0.072121
};


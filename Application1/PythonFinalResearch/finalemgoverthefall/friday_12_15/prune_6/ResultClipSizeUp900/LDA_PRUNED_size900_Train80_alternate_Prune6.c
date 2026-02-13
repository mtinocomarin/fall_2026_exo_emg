// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.15%
// test_accuracy: 66.54%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 12:42:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.646010, 0.646037,
    0.261422, -0.261434,
    0.426873, -0.426904,
    0.504774, -0.504766,
    -0.385827, 0.385645,
    0.139886, -0.139629,
    -0.086614, 0.086598,
    0.035412, -0.035477,
    0.302531, -0.302471,
    -0.111469, 0.111402,
    -0.492965, 0.492980,
    -0.004220, 0.004223,
};

float Cg_init[2] = {
    -0.248170, -0.248170
};

float xstd_init[12] = {
    0.003798, 0.001621, 0.147136, 0.204484, 0.000976, 0.000174, 0.024867, 0.077491, 0.000636, 0.000157, 0.029686, 0.103205
};

float xmean_init[12] = {
    0.009944, -0.005905, 0.237769, 0.678100, 0.003319, -0.007774, 0.007722, 0.071810, 0.003494, -0.007740, 0.012579, 0.114164
};


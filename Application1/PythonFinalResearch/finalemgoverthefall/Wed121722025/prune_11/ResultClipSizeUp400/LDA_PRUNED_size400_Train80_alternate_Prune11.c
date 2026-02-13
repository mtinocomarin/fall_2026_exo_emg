// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.61%
// test_accuracy: 52.68%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:46:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.797535, 0.797626,
    0.432860, -0.433069,
    0.245618, -0.245590,
    -0.210905, 0.211009,
    -0.534176, 0.534204,
    -0.104039, 0.104002,
    0.233125, -0.233127,
    0.066279, -0.066280,
    -0.863859, 0.863845,
    0.312030, -0.311963,
    -0.113283, 0.113257,
    0.371035, -0.371072,
};

float Cg_init[2] = {
    -0.366375, -0.366400
};

float xstd_init[12] = {
    0.001044, 0.000081, 0.010647, 0.079021, 0.002949, 0.000809, 0.084690, 0.168557, 0.000816, 0.000086, 0.016014, 0.072382
};

float xmean_init[12] = {
    0.006448, -0.007689, 0.003900, 0.140000, 0.008540, -0.006893, 0.098775, 0.435238, 0.004301, -0.007728, 0.007982, 0.125987
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.83%
// test_accuracy: 67.76%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:16:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.596037, 0.596041,
    0.091609, -0.091617,
    0.743402, -0.743403,
    0.230410, -0.230407,
    -0.616254, 0.616122,
    0.294133, -0.293976,
    0.031688, -0.031701,
    0.248900, -0.248907,
    0.330383, -0.330330,
    -0.374023, 0.373934,
    -0.299805, 0.299839,
    0.335490, -0.335476,
};

float Cg_init[2] = {
    -0.291508, -0.291501
};

float xstd_init[12] = {
    0.003718, 0.001570, 0.326674, 0.122794, 0.000981, 0.000176, 0.044867, 0.130885, 0.000628, 0.000156, 0.046715, 0.139857
};

float xmean_init[12] = {
    0.009891, -0.005934, 0.419538, 1.039761, 0.003319, -0.007773, 0.009729, 0.613110, 0.003467, -0.007746, 0.012839, 0.685550
};


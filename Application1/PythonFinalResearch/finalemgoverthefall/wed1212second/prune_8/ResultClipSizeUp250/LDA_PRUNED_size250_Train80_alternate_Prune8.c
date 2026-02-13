// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.10%
// test_accuracy: 71.88%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:02:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.164058, -0.164180,
    0.303485, -0.303202,
    -0.195333, 0.195277,
    -0.429868, 0.429722,
    1.670330, -1.670306,
    -1.451044, 1.450992,
    -0.289383, 0.289400,
    0.251896, -0.251877,
    -0.733518, 0.733524,
    -0.768519, 0.768475,
    0.464913, -0.464900,
    1.901409, -1.901389,
};

float Cg_init[2] = {
    -0.756475, -0.756442
};

float xstd_init[12] = {
    0.000902, 0.000065, 0.008067, 0.068031, 0.000801, 0.000140, 0.015772, 0.059094, 0.003126, 0.000911, 0.116712, 0.213534
};

float xmean_init[12] = {
    0.005575, -0.007761, 0.001389, 0.090208, 0.002380, -0.007847, 0.005833, 0.052292, 0.008878, -0.006649, 0.136250, 0.476042
};


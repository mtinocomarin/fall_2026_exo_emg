// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.85%
// test_accuracy: 67.28%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_10.txt']}
// generated: 2026-02-13 14:50:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.058821, -0.058859,
    -0.251800, 0.251908,
    0.017680, -0.017697,
    0.177559, -0.177618,
    2.006876, -2.007002,
    -1.463935, 1.464083,
    0.015535, -0.015562,
    0.165142, -0.165167,
    -1.132076, 1.132148,
    0.015405, -0.015475,
    0.758081, -0.758117,
    1.494359, -1.494347,
};

float Cg_init[2] = {
    -0.825666, -0.825724
};

float xstd_init[12] = {
    0.000940, 0.000077, 0.008744, 0.065817, 0.000726, 0.000114, 0.014797, 0.052673, 0.003288, 0.001047, 0.123378, 0.217148
};

float xmean_init[12] = {
    0.005606, -0.007752, 0.002484, 0.093791, 0.002390, -0.007850, 0.004924, 0.048170, 0.009068, -0.006500, 0.150371, 0.493856
};


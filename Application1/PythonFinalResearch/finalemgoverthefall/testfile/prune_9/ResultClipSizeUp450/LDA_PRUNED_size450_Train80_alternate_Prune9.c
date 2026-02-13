// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.22%
// test_accuracy: 71.88%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt']}
// generated: 2026-02-13 14:47:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.087423, -0.087502,
    -0.197896, 0.198088,
    0.010448, -0.010484,
    -0.129033, 0.128954,
    1.941610, -1.941735,
    -1.869087, 1.869222,
    -0.152195, 0.152184,
    0.272208, -0.272215,
    -0.938309, 0.938353,
    -0.584355, 0.584307,
    0.307213, -0.307207,
    2.004695, -2.004721,
};

float Cg_init[2] = {
    -0.743010, -0.743051
};

float xstd_init[12] = {
    0.000900, 0.000085, 0.008337, 0.067021, 0.000833, 0.000150, 0.014896, 0.057142, 0.003533, 0.001060, 0.122115, 0.213302
};

float xmean_init[12] = {
    0.005588, -0.007756, 0.002029, 0.091739, 0.002441, -0.007839, 0.005290, 0.050435, 0.009055, -0.006586, 0.134710, 0.471413
};


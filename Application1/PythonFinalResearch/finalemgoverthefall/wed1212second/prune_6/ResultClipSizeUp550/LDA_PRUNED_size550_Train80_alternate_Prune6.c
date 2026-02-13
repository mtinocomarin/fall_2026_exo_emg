// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.96%
// test_accuracy: 73.12%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 17:01:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.092944, 0.092963,
    -0.133292, 0.133249,
    0.002072, -0.002061,
    -0.018199, 0.018205,
    1.751169, -1.751137,
    -1.543647, 1.543607,
    -0.077270, 0.077281,
    0.130850, -0.130849,
    -0.584421, 0.584411,
    -0.456947, 0.456965,
    0.216631, -0.216665,
    1.349636, -1.349610,
};

float Cg_init[2] = {
    -0.510170, -0.510161
};

float xstd_init[12] = {
    0.000883, 0.000077, 0.008490, 0.063791, 0.000756, 0.000130, 0.014064, 0.053032, 0.003451, 0.001021, 0.119699, 0.209555
};

float xmean_init[12] = {
    0.005518, -0.007758, 0.002154, 0.091770, 0.002396, -0.007848, 0.004769, 0.047385, 0.009068, -0.006593, 0.136821, 0.473769
};


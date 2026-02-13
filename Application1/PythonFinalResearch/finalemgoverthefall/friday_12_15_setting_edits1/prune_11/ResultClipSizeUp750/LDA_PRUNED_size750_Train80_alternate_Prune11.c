// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.18%
// test_accuracy: 65.62%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:16:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.542429, 0.542391,
    0.027977, -0.027978,
    0.815253, -0.815202,
    0.347905, -0.347911,
    -0.798325, 0.798045,
    0.286587, -0.286291,
    0.135119, -0.135106,
    0.121781, -0.121788,
    0.322467, -0.322344,
    -0.259235, 0.259059,
    -0.314935, 0.314994,
    0.509216, -0.509192,
};

float Cg_init[2] = {
    -0.405751, -0.405729
};

float xstd_init[12] = {
    0.004128, 0.001831, 0.353069, 0.125722, 0.001162, 0.000204, 0.051692, 0.133018, 0.000583, 0.000131, 0.039772, 0.138019
};

float xmean_init[12] = {
    0.010363, -0.005701, 0.450452, 1.039252, 0.003436, -0.007754, 0.013492, 0.617959, 0.003478, -0.007747, 0.010317, 0.699116
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.43%
// test_accuracy: 80.36%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 12:39:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.099545, 1.099536,
    0.285846, -0.285815,
    0.366436, -0.366461,
    1.060362, -1.060351,
    -0.411290, 0.411242,
    -0.020784, 0.020831,
    -0.040565, 0.040572,
    -0.014923, 0.014916,
    0.041259, -0.041297,
    0.143565, -0.143492,
    -0.642207, 0.642196,
    -0.133987, 0.133957,
};

float Cg_init[2] = {
    -0.486256, -0.486258
};

float xstd_init[12] = {
    0.004468, 0.001888, 0.144911, 0.200700, 0.001359, 0.000247, 0.034415, 0.096500, 0.000679, 0.000166, 0.029701, 0.104558
};

float xmean_init[12] = {
    0.010741, -0.005640, 0.245867, 0.687657, 0.003545, -0.007732, 0.012648, 0.085143, 0.003549, -0.007726, 0.014400, 0.122515
};


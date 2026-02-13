// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.61%
// test_accuracy: 85.42%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt']}
// generated: 2025-12-17 12:42:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.225139, 1.225120,
    -0.204092, 0.204094,
    1.033653, -1.033641,
    1.738975, -1.738965,
    1.378597, -1.378472,
    -0.627912, 0.627793,
    -0.117798, 0.117781,
    -1.687575, 1.687590,
    0.726442, -0.726453,
    -1.368895, 1.368915,
    -0.219264, 0.219263,
    -0.179118, 0.179104,
};

float Cg_init[2] = {
    -1.087612, -1.087608
};

float xstd_init[12] = {
    0.004037, 0.001668, 0.134109, 0.185429, 0.001754, 0.000327, 0.043855, 0.108137, 0.000679, 0.000165, 0.024012, 0.101105
};

float xmean_init[12] = {
    0.010577, -0.005778, 0.239532, 0.701403, 0.003765, -0.007695, 0.015673, 0.091930, 0.003563, -0.007726, 0.010994, 0.123860
};


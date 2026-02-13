// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.72%
// test_accuracy: 72.08%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:15:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701026, 0.701032,
    0.143327, -0.143365,
    0.716009, -0.715988,
    0.326111, -0.326098,
    -0.457984, 0.458024,
    0.146832, -0.146862,
    -0.001167, 0.001162,
    0.185383, -0.185374,
    0.271690, -0.271534,
    -0.382656, 0.382404,
    -0.312466, 0.312547,
    0.462592, -0.462569,
};

float Cg_init[2] = {
    -0.327339, -0.327325
};

float xstd_init[12] = {
    0.003941, 0.001642, 0.331450, 0.120539, 0.001067, 0.000191, 0.049656, 0.129179, 0.000633, 0.000159, 0.047664, 0.134805
};

float xmean_init[12] = {
    0.010055, -0.005879, 0.419999, 1.037739, 0.003375, -0.007765, 0.012367, 0.613797, 0.003488, -0.007739, 0.013623, 0.698493
};


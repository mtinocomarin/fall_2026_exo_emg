// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.38%
// test_accuracy: 78.75%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 12:41:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.791606, 1.791617,
    0.650571, -0.650578,
    0.625293, -0.625310,
    1.577518, -1.577496,
    0.185215, -0.185052,
    -0.291161, 0.290960,
    -0.090282, 0.090277,
    -0.474428, 0.474462,
    0.172864, -0.172895,
    -0.114993, 0.115065,
    -0.576689, 0.576673,
    -0.271703, 0.271662,
};

float Cg_init[2] = {
    -0.800505, -0.800506
};

float xstd_init[12] = {
    0.004454, 0.001868, 0.147608, 0.202427, 0.001565, 0.000282, 0.039833, 0.099342, 0.000644, 0.000143, 0.026757, 0.096245
};

float xmean_init[12] = {
    0.011197, -0.005504, 0.258159, 0.709524, 0.003637, -0.007716, 0.014095, 0.086095, 0.003562, -0.007734, 0.012825, 0.119619
};


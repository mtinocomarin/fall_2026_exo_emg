// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.21%
// test_accuracy: 76.79%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-17 12:41:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.393504, 1.393491,
    0.416707, -0.416672,
    0.302783, -0.302802,
    1.415761, -1.415750,
    -0.515201, 0.515302,
    0.144436, -0.144588,
    -0.036319, 0.036335,
    -0.129096, 0.129127,
    0.121836, -0.121927,
    -0.001139, 0.001317,
    -0.590620, 0.590571,
    0.059919, -0.059982,
};

float Cg_init[2] = {
    -0.600026, -0.600031
};

float xstd_init[12] = {
    0.004564, 0.001978, 0.153033, 0.209284, 0.001365, 0.000261, 0.030788, 0.098650, 0.000660, 0.000156, 0.027163, 0.096352
};

float xmean_init[12] = {
    0.010890, -0.005542, 0.250286, 0.692286, 0.003597, -0.007723, 0.012857, 0.085857, 0.003553, -0.007733, 0.012190, 0.117429
};


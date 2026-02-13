// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.21%
// test_accuracy: 76.25%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 12:46:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.231918, 2.231911,
    0.751572, -0.751569,
    0.630919, -0.630928,
    2.230172, -2.230154,
    0.258456, -0.258345,
    -0.428531, 0.428386,
    0.189143, -0.189126,
    -0.734707, 0.734724,
    0.246443, -0.246437,
    -0.450724, 0.450697,
    -0.348703, 0.348716,
    -0.236899, 0.236897,
};

float Cg_init[2] = {
    -1.035838, -1.035836
};

float xstd_init[12] = {
    0.004477, 0.001908, 0.151221, 0.205480, 0.001481, 0.000282, 0.032064, 0.097019, 0.000657, 0.000148, 0.026409, 0.098700
};

float xmean_init[12] = {
    0.011313, -0.005428, 0.261474, 0.715368, 0.003620, -0.007715, 0.012351, 0.085895, 0.003597, -0.007730, 0.012632, 0.121474
};


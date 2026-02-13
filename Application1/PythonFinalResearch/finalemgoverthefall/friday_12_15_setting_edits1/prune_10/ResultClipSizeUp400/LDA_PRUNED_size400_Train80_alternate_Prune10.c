// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.01%
// test_accuracy: 71.43%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:15:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.705846, 0.705837,
    0.067105, -0.067103,
    0.670740, -0.670734,
    0.536733, -0.536733,
    -0.741996, 0.742010,
    0.214037, -0.214053,
    0.060736, -0.060738,
    0.270637, -0.270624,
    -0.101902, 0.101877,
    -0.117832, 0.117866,
    -0.393885, 0.393871,
    0.360324, -0.360316,
};

float Cg_init[2] = {
    -0.432220, -0.432215
};

float xstd_init[12] = {
    0.004525, 0.001910, 0.336009, 0.123881, 0.001372, 0.000242, 0.064569, 0.133520, 0.000699, 0.000170, 0.054694, 0.142888
};

float xmean_init[12] = {
    0.010617, -0.005706, 0.442857, 1.030779, 0.003568, -0.007731, 0.018615, 0.621298, 0.003555, -0.007731, 0.017965, 0.693766
};


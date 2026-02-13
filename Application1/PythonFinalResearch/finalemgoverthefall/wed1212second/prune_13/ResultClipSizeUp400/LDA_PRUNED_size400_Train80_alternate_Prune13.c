// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.23%
// test_accuracy: 72.32%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_27.txt']}
// generated: 2025-12-17 17:05:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.043604, -0.043553,
    -0.347257, 0.347065,
    0.076912, -0.076874,
    -0.074578, 0.074670,
    2.254905, -2.254713,
    -1.923100, 1.922871,
    -0.264142, 0.264166,
    0.296909, -0.296870,
    -0.682852, 0.682827,
    -0.673520, 0.673573,
    0.211464, -0.211517,
    2.002827, -2.002787,
};

float Cg_init[2] = {
    -0.858497, -0.858432
};

float xstd_init[12] = {
    0.000942, 0.000083, 0.007668, 0.070805, 0.000773, 0.000128, 0.014265, 0.054809, 0.003457, 0.001019, 0.118455, 0.213846
};

float xmean_init[12] = {
    0.005631, -0.007752, 0.001704, 0.096391, 0.002431, -0.007845, 0.005213, 0.051880, 0.009079, -0.006596, 0.133233, 0.473083
};


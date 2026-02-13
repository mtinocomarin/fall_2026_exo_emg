// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.89%
// test_accuracy: 73.21%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:12:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.745897, 0.745888,
    0.049890, -0.049872,
    0.505726, -0.505720,
    0.411360, -0.411358,
    -0.324795, 0.324837,
    0.019939, -0.019985,
    -0.004478, 0.004478,
    0.215298, -0.215285,
    -0.041043, 0.040897,
    -0.010493, 0.010694,
    -0.413811, 0.413751,
    0.251821, -0.251827,
};

float Cg_init[2] = {
    -0.295732, -0.295726
};

float xstd_init[12] = {
    0.004887, 0.002291, 0.346600, 0.120634, 0.001255, 0.000221, 0.057940, 0.132390, 0.000673, 0.000159, 0.051990, 0.143794
};

float xmean_init[12] = {
    0.011109, -0.005391, 0.474489, 1.035612, 0.003486, -0.007745, 0.015306, 0.621836, 0.003572, -0.007727, 0.018197, 0.702142
};


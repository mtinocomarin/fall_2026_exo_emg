// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.80%
// test_accuracy: 65.07%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_31.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-12 12:47:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.774966, 0.775002,
    0.373422, -0.373418,
    0.678713, -0.678774,
    0.832717, -0.832699,
    -0.752438, 0.752313,
    0.533388, -0.533234,
    -0.259729, 0.259714,
    0.070216, -0.070243,
    0.412129, -0.412128,
    -0.333475, 0.333498,
    -0.563165, 0.563160,
    0.109805, -0.109823,
};

float Cg_init[2] = {
    -0.523988, -0.523995
};

float xstd_init[12] = {
    0.003807, 0.001619, 0.151796, 0.207782, 0.001009, 0.000183, 0.024392, 0.078395, 0.000690, 0.000175, 0.030482, 0.107730
};

float xmean_init[12] = {
    0.010153, -0.005818, 0.251504, 0.685883, 0.003381, -0.007765, 0.008540, 0.076013, 0.003537, -0.007728, 0.012462, 0.120262
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.37%
// test_accuracy: 87.50%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 12:42:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.165955, 1.165950,
    -0.247515, 0.247510,
    1.014318, -1.014311,
    1.633160, -1.633155,
    1.277055, -1.277001,
    -0.583369, 0.583315,
    -0.086509, 0.086501,
    -1.679065, 1.679074,
    0.637586, -0.637593,
    -1.327947, 1.327966,
    -0.222212, 0.222205,
    -0.151129, 0.151122,
};

float Cg_init[2] = {
    -1.056127, -1.056124
};

float xstd_init[12] = {
    0.004108, 0.001700, 0.130778, 0.182970, 0.001780, 0.000333, 0.044924, 0.109591, 0.000684, 0.000168, 0.023890, 0.102008
};

float xmean_init[12] = {
    0.010560, -0.005787, 0.236790, 0.701481, 0.003795, -0.007689, 0.016296, 0.094815, 0.003582, -0.007724, 0.010617, 0.124074
};


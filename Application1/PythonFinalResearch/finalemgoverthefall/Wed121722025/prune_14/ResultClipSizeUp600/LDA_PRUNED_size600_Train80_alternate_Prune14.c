// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.59%
// test_accuracy: 55.11%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 13:48:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.183684, 1.183713,
    0.613615, -0.613677,
    -0.114570, 0.114580,
    -0.319799, 0.319827,
    -0.184030, 0.183980,
    -0.467609, 0.467685,
    0.138749, -0.138766,
    0.247110, -0.247098,
    -0.844745, 0.844800,
    0.319646, -0.319739,
    0.085954, -0.085939,
    0.137817, -0.137802,
};

float Cg_init[2] = {
    -0.424998, -0.425017
};

float xstd_init[12] = {
    0.001096, 0.000082, 0.010301, 0.083044, 0.003088, 0.000848, 0.094326, 0.186696, 0.000860, 0.000115, 0.017647, 0.071854
};

float xmean_init[12] = {
    0.006573, -0.007683, 0.003300, 0.145859, 0.008567, -0.006847, 0.108889, 0.440505, 0.004373, -0.007711, 0.009091, 0.132930
};


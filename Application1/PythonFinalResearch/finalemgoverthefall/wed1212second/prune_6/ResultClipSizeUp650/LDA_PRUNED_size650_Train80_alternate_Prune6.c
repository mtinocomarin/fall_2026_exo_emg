// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.62%
// test_accuracy: 73.44%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:01:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.193784, 0.193795,
    -0.102499, 0.102601,
    -0.033908, 0.033891,
    0.081730, -0.081791,
    1.549074, -1.549414,
    -1.290994, 1.291440,
    -0.100360, 0.100291,
    0.104894, -0.104975,
    -0.508472, 0.508498,
    -0.553565, 0.553536,
    0.471979, -0.472014,
    1.085338, -1.085312,
};

float Cg_init[2] = {
    -0.467766, -0.467858
};

float xstd_init[12] = {
    0.000881, 0.000075, 0.008275, 0.063334, 0.000726, 0.000121, 0.013737, 0.050436, 0.003391, 0.001024, 0.117418, 0.210451
};

float xmean_init[12] = {
    0.005508, -0.007760, 0.002137, 0.089359, 0.002374, -0.007853, 0.004487, 0.045192, 0.009016, -0.006602, 0.132778, 0.468590
};


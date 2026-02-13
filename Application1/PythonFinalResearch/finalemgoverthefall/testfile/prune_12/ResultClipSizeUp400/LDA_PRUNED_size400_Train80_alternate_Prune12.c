// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.79%
// test_accuracy: 73.21%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt']}
// generated: 2026-02-13 14:48:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.112245, -0.112201,
    -0.307766, 0.307574,
    0.059486, -0.059444,
    -0.087458, 0.087544,
    2.057823, -2.057503,
    -1.728408, 1.728011,
    -0.280872, 0.280922,
    0.274855, -0.274786,
    -0.622376, 0.622303,
    -0.796598, 0.796703,
    0.218271, -0.218345,
    2.027746, -2.027687,
};

float Cg_init[2] = {
    -0.823859, -0.823756
};

float xstd_init[12] = {
    0.000940, 0.000082, 0.007483, 0.070130, 0.000761, 0.000125, 0.014006, 0.054353, 0.003423, 0.001008, 0.117016, 0.211323
};

float xmean_init[12] = {
    0.005603, -0.007754, 0.001619, 0.095000, 0.002425, -0.007847, 0.005048, 0.051429, 0.009017, -0.006615, 0.129524, 0.468572
};


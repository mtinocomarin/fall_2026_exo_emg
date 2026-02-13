// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.39%
// test_accuracy: 76.56%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 12:42:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.787391, 2.787399,
    1.289512, -1.289506,
    0.351760, -0.351772,
    2.595885, -2.595875,
    0.378289, -0.378348,
    -0.265696, 0.265743,
    0.312525, -0.312515,
    -1.347489, 1.347491,
    -0.047596, 0.047556,
    -0.008326, 0.008393,
    -0.874407, 0.874392,
    0.183538, -0.183558,
};

float Cg_init[2] = {
    -1.239819, -1.239819
};

float xstd_init[12] = {
    0.004415, 0.001964, 0.158639, 0.203154, 0.001666, 0.000298, 0.042948, 0.107030, 0.000612, 0.000145, 0.025982, 0.097699
};

float xmean_init[12] = {
    0.011468, -0.005306, 0.264386, 0.720263, 0.003752, -0.007694, 0.014561, 0.094474, 0.003553, -0.007727, 0.011579, 0.125789
};


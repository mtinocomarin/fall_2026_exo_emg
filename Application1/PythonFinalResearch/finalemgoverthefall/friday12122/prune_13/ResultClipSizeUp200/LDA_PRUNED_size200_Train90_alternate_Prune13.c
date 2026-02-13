// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 95.65%
// test_accuracy: 95.83%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 16:08:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.273682, 1.273687,
    -0.600554, 0.600549,
    1.956793, -1.956780,
    0.524811, -0.524819,
    2.948478, -2.948463,
    -3.477328, 3.477292,
    0.460441, -0.460431,
    -0.176188, 0.176199,
    1.720921, -1.720891,
    -0.913232, 0.913156,
    -0.816421, 0.816439,
    0.689095, -0.689062,
};

float Cg_init[2] = {
    -1.454154, -1.454138
};

float xstd_init[12] = {
    0.003588, 0.001273, 0.097486, 0.160199, 0.001737, 0.000564, 0.029318, 0.084537, 0.000580, 0.000108, 0.019529, 0.070381
};

float xmean_init[12] = {
    0.009944, -0.006207, 0.163285, 0.576522, 0.003380, -0.007664, 0.008309, 0.057391, 0.003247, -0.007795, 0.005797, 0.075362
};


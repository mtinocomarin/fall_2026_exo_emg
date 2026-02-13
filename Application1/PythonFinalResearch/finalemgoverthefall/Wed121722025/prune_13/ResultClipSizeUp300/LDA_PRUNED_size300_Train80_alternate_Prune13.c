// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.37%
// test_accuracy: 50.00%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 13:47:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.142353, 1.142285,
    0.466104, -0.465967,
    0.332824, -0.332842,
    0.053878, -0.053944,
    -0.965406, 0.965360,
    -0.350766, 0.350805,
    0.604447, -0.604434,
    0.287987, -0.287985,
    -1.148178, 1.148171,
    0.488933, -0.488926,
    -0.248305, 0.248308,
    0.569709, -0.569710,
};

float Cg_init[2] = {
    -0.538563, -0.538543
};

float xstd_init[12] = {
    0.001091, 0.000085, 0.011625, 0.083594, 0.002654, 0.000773, 0.082792, 0.165344, 0.000880, 0.000089, 0.017106, 0.074905
};

float xmean_init[12] = {
    0.006524, -0.007684, 0.004772, 0.140632, 0.008696, -0.006861, 0.101474, 0.458947, 0.004341, -0.007723, 0.008702, 0.133684
};


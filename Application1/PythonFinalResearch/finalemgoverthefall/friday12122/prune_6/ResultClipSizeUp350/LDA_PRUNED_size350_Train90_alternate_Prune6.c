// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.33%
// test_accuracy: 77.08%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-12 16:05:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.852113, 0.852133,
    -0.208424, 0.208501,
    0.524948, -0.524966,
    0.850742, -0.850775,
    0.946181, -0.946295,
    -1.309340, 1.309483,
    0.152368, -0.152401,
    -0.028255, 0.028251,
    -0.280671, 0.280817,
    0.391793, -0.392269,
    -0.461295, 0.461459,
    0.200546, -0.200322,
};

float Cg_init[2] = {
    -0.429163, -0.429205
};

float xstd_init[12] = {
    0.003839, 0.001415, 0.096943, 0.168736, 0.001722, 0.000526, 0.032319, 0.087265, 0.001002, 0.000089, 0.019222, 0.065114
};

float xmean_init[12] = {
    0.009847, -0.006265, 0.160963, 0.572222, 0.003311, -0.007692, 0.008741, 0.053556, 0.003205, -0.007807, 0.004963, 0.066889
};


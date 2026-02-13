// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.89%
// test_accuracy: 79.17%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_3.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:07:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.893334, 0.893312,
    -0.215178, 0.215214,
    0.501171, -0.501189,
    0.913006, -0.912999,
    1.042474, -1.042322,
    -1.386260, 1.386059,
    0.006089, -0.006066,
    -0.064514, 0.064533,
    1.097239, -1.097156,
    -0.056692, 0.056499,
    -0.584196, 0.584260,
    0.026241, -0.026186,
};

float Cg_init[2] = {
    -0.731433, -0.731405
};

float xstd_init[12] = {
    0.003703, 0.001332, 0.100404, 0.168102, 0.001652, 0.000519, 0.029623, 0.084516, 0.000523, 0.000083, 0.017666, 0.063634
};

float xmean_init[12] = {
    0.009851, -0.006264, 0.168415, 0.585511, 0.003289, -0.007698, 0.008237, 0.054667, 0.003107, -0.007812, 0.004859, 0.066578
};


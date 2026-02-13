// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_14\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 37.50%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_15.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_8.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-17 14:43:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    381846159360.000000, -381861986304.000000,
    505446400000.000000, -505467764736.000000,
    -63231688704.000000, 63234404352.000000,
    -445614424064.000000, 445633200128.000000,
    -1260091604992.000000, 1260144164864.000000,
    411981512704.000000, -411998683136.000000,
    392604581888.000000, -392620900352.000000,
    -139753340928.000000, 139759157248.000000,
    128748273664.000000, -128753623040.000000,
    -132586225664.000000, 132591755264.000000,
    -219413790720.000000, 219422932992.000000,
    372250935296.000000, -372266434560.000000,
};

float Cg_init[2] = {
    -35709038592.000000, -35712024576.000000
};

float xstd_init[12] = {
    0.000723, 0.000141, 0.012060, 0.095664, 0.004542, 0.001823, 0.114345, 0.161920, 0.002116, 0.000248, 0.036772, 0.107872
};

float xmean_init[12] = {
    0.005692, -0.007630, 0.006667, 0.176667, 0.009421, -0.006279, 0.140000, 0.530000, 0.005280, -0.007512, 0.028889, 0.240000
};


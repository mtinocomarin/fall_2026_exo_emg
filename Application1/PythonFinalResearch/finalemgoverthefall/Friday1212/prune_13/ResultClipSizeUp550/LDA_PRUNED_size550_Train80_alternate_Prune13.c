// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.37%
// test_accuracy: 72.50%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:52:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.894359, 0.894405,
    -0.197452, 0.197428,
    0.536783, -0.536820,
    1.135773, -1.135753,
    1.117650, -1.117706,
    -0.842436, 0.842539,
    -0.282820, 0.282790,
    -0.260703, 0.260686,
    -0.839589, 0.839677,
    0.564910, -0.565063,
    -0.583017, 0.583078,
    0.240998, -0.240945,
};

float Cg_init[2] = {
    -0.552305, -0.552323
};

float xstd_init[12] = {
    0.003607, 0.001236, 0.107579, 0.182558, 0.001602, 0.000456, 0.023816, 0.077022, 0.002053, 0.000099, 0.019823, 0.069154
};

float xmean_init[12] = {
    0.009717, -0.006286, 0.174597, 0.585263, 0.003227, -0.007741, 0.005754, 0.050000, 0.003352, -0.007803, 0.005895, 0.072000
};


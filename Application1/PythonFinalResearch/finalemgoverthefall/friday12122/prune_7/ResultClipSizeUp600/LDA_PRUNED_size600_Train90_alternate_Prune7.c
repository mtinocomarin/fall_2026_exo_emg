// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.35%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:05:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.687713, 0.687717,
    -0.161003, 0.161002,
    0.303594, -0.303621,
    0.786986, -0.786978,
    0.678766, -0.678836,
    -0.798046, 0.798179,
    -0.026103, 0.026058,
    -0.010244, 0.010213,
    -0.423919, 0.423817,
    0.386386, -0.386037,
    -0.323841, 0.323718,
    0.110997, -0.111157,
};

float Cg_init[2] = {
    -0.312771, -0.312765
};

float xstd_init[12] = {
    0.003703, 0.001311, 0.105948, 0.167092, 0.001454, 0.000418, 0.020371, 0.070722, 0.001667, 0.000088, 0.016175, 0.066321
};

float xmean_init[12] = {
    0.009850, -0.006255, 0.171704, 0.586709, 0.003163, -0.007743, 0.005308, 0.048339, 0.003247, -0.007809, 0.004556, 0.067148
};


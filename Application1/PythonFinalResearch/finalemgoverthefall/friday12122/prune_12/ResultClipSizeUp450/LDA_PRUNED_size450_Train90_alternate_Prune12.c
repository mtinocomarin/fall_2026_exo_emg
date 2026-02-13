// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.94%
// test_accuracy: 75.00%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-12 16:08:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.147566, 1.147638,
    -0.071175, 0.071164,
    0.609444, -0.609480,
    1.044286, -1.044295,
    1.132748, -1.132890,
    -1.289838, 1.289984,
    -0.035435, 0.035439,
    -0.080886, 0.080888,
    -0.598885, 0.599051,
    0.586104, -0.586489,
    -0.608716, 0.608858,
    0.190354, -0.190186,
};

float Cg_init[2] = {
    -0.550684, -0.550740
};

float xstd_init[12] = {
    0.003847, 0.001435, 0.102272, 0.168887, 0.001738, 0.000539, 0.031260, 0.086224, 0.001561, 0.000091, 0.019687, 0.067400
};

float xmean_init[12] = {
    0.009919, -0.006253, 0.166875, 0.583125, 0.003368, -0.007690, 0.008681, 0.056875, 0.003316, -0.007803, 0.005972, 0.070521
};


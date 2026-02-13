// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.72%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:51:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701188, 0.701229,
    -0.341451, 0.341428,
    0.513270, -0.513305,
    0.913558, -0.913541,
    0.932870, -0.932857,
    -0.770858, 0.770857,
    -0.226070, 0.226065,
    -0.174228, 0.174223,
    -0.730414, 0.730413,
    0.624014, -0.624023,
    -0.465159, 0.465166,
    0.035307, -0.035314,
};

float Cg_init[2] = {
    -0.438595, -0.438601
};

float xstd_init[12] = {
    0.003749, 0.001293, 0.108704, 0.179483, 0.001552, 0.000446, 0.023943, 0.076563, 0.001934, 0.000096, 0.017918, 0.070608
};

float xmean_init[12] = {
    0.009718, -0.006277, 0.177725, 0.585238, 0.003249, -0.007733, 0.006561, 0.052619, 0.003320, -0.007806, 0.005026, 0.069207
};


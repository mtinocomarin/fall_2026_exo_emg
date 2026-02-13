// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.54%
// test_accuracy: 75.66%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_10.txt', 'act2\\trial_34.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-12 16:08:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.597550, 0.597523,
    -0.313829, 0.313875,
    0.511662, -0.511701,
    0.591352, -0.591337,
    0.874254, -0.874312,
    -0.880437, 0.880549,
    -0.166719, 0.166691,
    -0.045524, 0.045500,
    0.707180, -0.707187,
    0.079163, -0.079134,
    -0.366813, 0.366813,
    -0.010643, 0.010613,
};

float Cg_init[2] = {
    -0.491194, -0.491219
};

float xstd_init[12] = {
    0.003032, 0.001189, 0.099816, 0.163422, 0.001156, 0.000348, 0.017919, 0.064210, 0.000526, 0.000072, 0.013948, 0.060744
};

float xmean_init[12] = {
    0.009412, -0.006365, 0.173042, 0.585263, 0.003015, -0.007773, 0.004474, 0.045219, 0.003071, -0.007818, 0.003392, 0.061404
};


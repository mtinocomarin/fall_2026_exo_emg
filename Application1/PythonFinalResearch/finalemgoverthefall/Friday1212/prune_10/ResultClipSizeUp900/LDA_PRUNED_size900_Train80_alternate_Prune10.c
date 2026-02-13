// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.10%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:51:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.869532, 0.869609,
    -0.179838, 0.179821,
    0.737270, -0.737313,
    0.499879, -0.499888,
    1.132708, -1.132638,
    -1.058708, 1.058611,
    -0.206756, 0.206767,
    -0.094511, 0.094519,
    0.587667, -0.587502,
    0.035000, -0.035445,
    -0.372342, 0.372513,
    0.071842, -0.071700,
};

float Cg_init[2] = {
    -0.515692, -0.515692
};

float xstd_init[12] = {
    0.003277, 0.001286, 0.102941, 0.168260, 0.001192, 0.000359, 0.018852, 0.066770, 0.000516, 0.000075, 0.014928, 0.060860
};

float xmean_init[12] = {
    0.009567, -0.006287, 0.177398, 0.589144, 0.003022, -0.007770, 0.004742, 0.046631, 0.003078, -0.007816, 0.003636, 0.062835
};


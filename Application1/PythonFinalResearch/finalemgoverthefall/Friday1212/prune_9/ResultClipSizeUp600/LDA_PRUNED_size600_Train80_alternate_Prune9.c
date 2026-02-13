// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.61%
// test_accuracy: 73.86%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:50:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.706561, 0.706543,
    -0.242836, 0.242866,
    0.377868, -0.377896,
    0.812436, -0.812423,
    0.898469, -0.898485,
    -0.858067, 0.858093,
    -0.172375, 0.172370,
    0.048819, -0.048826,
    -0.648330, 0.648310,
    0.400242, -0.400153,
    -0.421459, 0.421431,
    0.275452, -0.275502,
};

float Cg_init[2] = {
    -0.379478, -0.379482
};

float xstd_init[12] = {
    0.003759, 0.001330, 0.106070, 0.169955, 0.001449, 0.000407, 0.020615, 0.071612, 0.001853, 0.000095, 0.017491, 0.067182
};

float xmean_init[12] = {
    0.009886, -0.006231, 0.175284, 0.593044, 0.003143, -0.007757, 0.005059, 0.048221, 0.003294, -0.007807, 0.004848, 0.066641
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.00%
// test_accuracy: 73.68%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:50:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.535781, 0.535762,
    -0.283203, 0.283220,
    0.455566, -0.455585,
    0.493095, -0.493082,
    0.813200, -0.813146,
    -0.901227, 0.901161,
    -0.012775, 0.012797,
    -0.095689, 0.095678,
    0.546295, -0.546344,
    0.099303, -0.099168,
    -0.343305, 0.343264,
    0.012465, -0.012538,
};

float Cg_init[2] = {
    -0.385530, -0.385530
};

float xstd_init[12] = {
    0.003261, 0.001297, 0.103224, 0.167267, 0.001251, 0.000378, 0.022138, 0.071640, 0.000510, 0.000071, 0.013962, 0.059155
};

float xmean_init[12] = {
    0.009474, -0.006324, 0.175059, 0.584562, 0.003050, -0.007764, 0.005234, 0.048465, 0.003073, -0.007817, 0.003333, 0.061667
};


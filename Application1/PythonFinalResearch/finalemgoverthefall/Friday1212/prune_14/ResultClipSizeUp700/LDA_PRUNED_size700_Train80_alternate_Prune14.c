// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.60%
// test_accuracy: 72.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 15:53:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.864174, 0.864198,
    -0.146059, 0.146054,
    0.623208, -0.623247,
    0.846141, -0.846128,
    1.263106, -1.263167,
    -1.211410, 1.211511,
    -0.340580, 0.340554,
    0.007266, -0.007281,
    0.890837, -0.890800,
    -0.087016, 0.087002,
    -0.550394, 0.550402,
    0.086919, -0.086940,
};

float Cg_init[2] = {
    -0.735529, -0.735539
};

float xstd_init[12] = {
    0.003238, 0.001130, 0.103382, 0.171560, 0.001399, 0.000433, 0.022042, 0.075980, 0.000533, 0.000082, 0.017695, 0.062742
};

float xmean_init[12] = {
    0.009605, -0.006313, 0.172935, 0.590513, 0.003141, -0.007743, 0.006154, 0.050940, 0.003112, -0.007812, 0.004672, 0.064530
};


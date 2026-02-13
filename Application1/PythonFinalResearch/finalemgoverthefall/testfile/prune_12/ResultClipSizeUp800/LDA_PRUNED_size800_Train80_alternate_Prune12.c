// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 69.17%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt']}
// generated: 2026-02-13 14:49:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.240937, 0.240795,
    -0.176842, 0.177210,
    -0.006542, 0.006487,
    0.115187, -0.115367,
    1.808600, -1.808779,
    -1.136516, 1.136702,
    -0.107675, 0.107652,
    0.137519, -0.137549,
    -1.046412, 1.046458,
    -0.082065, 0.082019,
    0.669411, -0.669437,
    1.204354, -1.204362,
};

float Cg_init[2] = {
    -0.689015, -0.689085
};

float xstd_init[12] = {
    0.000947, 0.000077, 0.008957, 0.067593, 0.000678, 0.000099, 0.014747, 0.051225, 0.003395, 0.001054, 0.122152, 0.215065
};

float xmean_init[12] = {
    0.005631, -0.007750, 0.002533, 0.096934, 0.002372, -0.007854, 0.004844, 0.047600, 0.009059, -0.006526, 0.144178, 0.486333
};


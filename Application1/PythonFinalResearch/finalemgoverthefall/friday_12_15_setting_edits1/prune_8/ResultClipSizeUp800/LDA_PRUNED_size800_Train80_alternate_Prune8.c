// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.28%
// test_accuracy: 71.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:15:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.690307, 0.690335,
    0.178176, -0.178216,
    0.732813, -0.732810,
    0.353375, -0.353365,
    -0.461343, 0.461391,
    0.133416, -0.133469,
    0.009423, -0.009420,
    0.173804, -0.173796,
    0.256865, -0.256748,
    -0.390527, 0.390334,
    -0.298715, 0.298778,
    0.451252, -0.451236,
};

float Cg_init[2] = {
    -0.336862, -0.336854
};

float xstd_init[12] = {
    0.004041, 0.001741, 0.342618, 0.122466, 0.001053, 0.000188, 0.048672, 0.129624, 0.000653, 0.000161, 0.047107, 0.134156
};

float xmean_init[12] = {
    0.010134, -0.005820, 0.428518, 1.037278, 0.003379, -0.007765, 0.011852, 0.615944, 0.003515, -0.007734, 0.013611, 0.700723
};


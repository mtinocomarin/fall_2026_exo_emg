// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.89%
// test_accuracy: 76.92%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.501482, 0.501496,
    -0.429323, 0.429315,
    0.341019, -0.341038,
    0.641304, -0.641293,
    0.749145, -0.749119,
    -0.796644, 0.796601,
    -0.136826, 0.136847,
    -0.112387, 0.112383,
    0.820553, -0.820595,
    -0.032201, 0.032311,
    -0.411063, 0.411031,
    0.022933, -0.022988,
};

float Cg_init[2] = {
    -0.481924, -0.481928
};

float xstd_init[12] = {
    0.003706, 0.001376, 0.107642, 0.171226, 0.001268, 0.000393, 0.019493, 0.068981, 0.000517, 0.000075, 0.015346, 0.062128
};

float xmean_init[12] = {
    0.009785, -0.006241, 0.176191, 0.589890, 0.003080, -0.007754, 0.005092, 0.047253, 0.003095, -0.007814, 0.004103, 0.063682
};


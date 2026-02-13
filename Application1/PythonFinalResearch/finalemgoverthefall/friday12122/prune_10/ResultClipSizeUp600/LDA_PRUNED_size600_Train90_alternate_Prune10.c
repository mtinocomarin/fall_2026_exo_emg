// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.36%
// test_accuracy: 79.55%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:07:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.630992, 0.630945,
    -0.231104, 0.231137,
    0.325945, -0.325949,
    0.787574, -0.787564,
    0.942117, -0.941975,
    -1.102598, 1.102389,
    -0.102141, 0.102197,
    -0.065433, 0.065446,
    1.065267, -1.065364,
    -0.232639, 0.232886,
    -0.416409, 0.416325,
    -0.002514, 0.002415,
};

float Cg_init[2] = {
    -0.603155, -0.603148
};

float xstd_init[12] = {
    0.003543, 0.001256, 0.105941, 0.169532, 0.001421, 0.000438, 0.021382, 0.072718, 0.000521, 0.000080, 0.016697, 0.063178
};

float xmean_init[12] = {
    0.009791, -0.006273, 0.172308, 0.588532, 0.003158, -0.007732, 0.005781, 0.049441, 0.003098, -0.007813, 0.004615, 0.064895
};


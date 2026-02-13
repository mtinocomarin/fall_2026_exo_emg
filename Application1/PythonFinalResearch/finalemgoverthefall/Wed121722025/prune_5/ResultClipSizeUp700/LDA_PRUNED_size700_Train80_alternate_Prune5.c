// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.23%
// test_accuracy: 52.40%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 13:43:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.414649, 0.414621,
    0.257780, -0.257713,
    -0.000902, 0.000898,
    -0.147744, 0.147696,
    -0.394740, 0.394797,
    -0.218421, 0.218374,
    0.045364, -0.045374,
    0.319155, -0.319165,
    -0.466125, 0.466127,
    0.244705, -0.244685,
    -0.004906, 0.004909,
    0.142202, -0.142228,
};

float Cg_init[2] = {
    -0.147059, -0.147054
};

float xstd_init[12] = {
    0.001016, 0.000080, 0.011431, 0.079349, 0.003079, 0.000841, 0.091024, 0.183363, 0.000860, 0.000113, 0.019909, 0.075257
};

float xmean_init[12] = {
    0.006458, -0.007690, 0.004292, 0.143362, 0.008574, -0.006866, 0.104540, 0.436467, 0.004376, -0.007713, 0.010712, 0.129744
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.42%
// test_accuracy: 73.96%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 15:52:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.228945, 1.228932,
    -0.312621, 0.312565,
    0.784366, -0.784372,
    1.187777, -1.187740,
    1.432235, -1.432225,
    -1.704015, 1.703988,
    0.217207, -0.217178,
    -0.133106, 0.133104,
    -0.539537, 0.539452,
    0.607783, -0.607470,
    -0.722921, 0.722807,
    0.333001, -0.333144,
};

float Cg_init[2] = {
    -0.672938, -0.672913
};

float xstd_init[12] = {
    0.004036, 0.001537, 0.104792, 0.177161, 0.001814, 0.000556, 0.035447, 0.094525, 0.001155, 0.000100, 0.022718, 0.068938
};

float xmean_init[12] = {
    0.010037, -0.006169, 0.171445, 0.573833, 0.003360, -0.007697, 0.009222, 0.057000, 0.003336, -0.007795, 0.006333, 0.074167
};


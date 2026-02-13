// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.42%
// test_accuracy: 72.22%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:01:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.076617, -0.076651,
    -0.190236, 0.190308,
    0.009461, -0.009469,
    -0.060250, 0.060208,
    1.540249, -1.540224,
    -1.336183, 1.336138,
    -0.216281, 0.216295,
    0.162105, -0.162095,
    -0.545811, 0.545782,
    -0.614557, 0.614602,
    0.366284, -0.366317,
    1.397453, -1.397447,
};

float Cg_init[2] = {
    -0.511626, -0.511626
};

float xstd_init[12] = {
    0.000866, 0.000078, 0.007454, 0.065118, 0.000763, 0.000132, 0.015432, 0.054929, 0.003469, 0.001051, 0.117492, 0.210989
};

float xmean_init[12] = {
    0.005514, -0.007760, 0.001756, 0.089712, 0.002412, -0.007847, 0.005213, 0.048395, 0.009071, -0.006600, 0.133279, 0.471687
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.21%
// test_accuracy: 71.25%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:16:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.649421, 0.649427,
    0.084632, -0.084668,
    0.741388, -0.741361,
    0.377393, -0.377389,
    -0.616467, 0.616397,
    0.246412, -0.246324,
    0.031265, -0.031275,
    0.174684, -0.174684,
    0.314822, -0.314692,
    -0.464049, 0.463847,
    -0.275057, 0.275120,
    0.451017, -0.450998,
};

float Cg_init[2] = {
    -0.347685, -0.347668
};

float xstd_init[12] = {
    0.003963, 0.001663, 0.334605, 0.120465, 0.001081, 0.000195, 0.050621, 0.128783, 0.000644, 0.000162, 0.048040, 0.135148
};

float xmean_init[12] = {
    0.010100, -0.005852, 0.425959, 1.036909, 0.003387, -0.007762, 0.012727, 0.613394, 0.003492, -0.007739, 0.013434, 0.697758
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.53%
// test_accuracy: 67.50%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 13:17:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.594254, 0.594233,
    -0.215406, 0.215427,
    0.836319, -0.836310,
    0.559961, -0.559954,
    -0.656975, 0.657081,
    0.063410, -0.063538,
    0.109544, -0.109531,
    0.317718, -0.317703,
    0.195502, -0.195558,
    -0.384959, 0.384997,
    -0.327334, 0.327336,
    0.489337, -0.489336,
};

float Cg_init[2] = {
    -0.460938, -0.460934
};

float xstd_init[12] = {
    0.004700, 0.002189, 0.353493, 0.127565, 0.001134, 0.000208, 0.049219, 0.139278, 0.000722, 0.000186, 0.055666, 0.137825
};

float xmean_init[12] = {
    0.010591, -0.005581, 0.449824, 1.029263, 0.003453, -0.007750, 0.013860, 0.620315, 0.003584, -0.007722, 0.016316, 0.705579
};


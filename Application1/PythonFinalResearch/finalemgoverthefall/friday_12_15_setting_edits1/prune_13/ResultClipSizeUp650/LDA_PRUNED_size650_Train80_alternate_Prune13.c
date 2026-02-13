// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.09%
// test_accuracy: 67.19%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt'], 'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_19.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-12 13:17:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.561565, 0.561579,
    -0.239718, 0.239713,
    0.909279, -0.909273,
    0.419974, -0.419983,
    -0.755265, 0.755252,
    0.244302, -0.244300,
    0.109112, -0.109108,
    0.168491, -0.168488,
    0.323134, -0.323244,
    -0.270254, 0.270434,
    -0.339474, 0.339413,
    0.590743, -0.590774,
};

float Cg_init[2] = {
    -0.454606, -0.454610
};

float xstd_init[12] = {
    0.004621, 0.002240, 0.356997, 0.127640, 0.001121, 0.000203, 0.049536, 0.136108, 0.000620, 0.000142, 0.043661, 0.139104
};

float xmean_init[12] = {
    0.010820, -0.005455, 0.473391, 1.040088, 0.003445, -0.007751, 0.013889, 0.623684, 0.003538, -0.007736, 0.012427, 0.706842
};


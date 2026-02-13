// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.83%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-12 12:45:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.442678, 2.442698,
    1.005054, -1.005049,
    0.299991, -0.300009,
    2.395411, -2.395401,
    0.077345, -0.077480,
    -0.110920, 0.111029,
    0.325513, -0.325488,
    -1.103217, 1.103215,
    -0.161837, 0.161785,
    -0.101455, 0.101546,
    -0.791015, 0.790993,
    0.490131, -0.490160,
};

float Cg_init[2] = {
    -1.138722, -1.138722
};

float xstd_init[12] = {
    0.004262, 0.001896, 0.153075, 0.197393, 0.001602, 0.000285, 0.041266, 0.104126, 0.000596, 0.000142, 0.026020, 0.097296
};

float xmean_init[12] = {
    0.011353, -0.005393, 0.260794, 0.715476, 0.003691, -0.007704, 0.013968, 0.093571, 0.003539, -0.007730, 0.011270, 0.124286
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.10%
// test_accuracy: 66.52%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 12:43:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.636298, 0.636311,
    0.124955, -0.124949,
    0.394542, -0.394574,
    0.658622, -0.658599,
    -0.286476, 0.286355,
    0.074384, -0.074237,
    -0.037649, 0.037643,
    -0.160202, 0.160166,
    0.280461, -0.280496,
    -0.092210, 0.092395,
    -0.582504, 0.582443,
    0.011617, -0.011709,
};

float Cg_init[2] = {
    -0.296355, -0.296355
};

float xstd_init[12] = {
    0.004016, 0.001733, 0.149934, 0.203991, 0.001099, 0.000194, 0.028180, 0.083328, 0.000654, 0.000165, 0.030292, 0.106133
};

float xmean_init[12] = {
    0.010125, -0.005798, 0.241350, 0.683750, 0.003392, -0.007761, 0.008889, 0.077322, 0.003511, -0.007735, 0.012897, 0.116191
};


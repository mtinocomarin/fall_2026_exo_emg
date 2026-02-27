// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.220164, 0.220163,
    -0.110441, 0.110492,
    0.000000, 0.000000,
    -0.381417, -0.381417,
    0.258790, 0.258790,
    0.214748, 0.214748,
    0.547414, 0.547414,
    0.402791, 0.402791,
    -0.022647, -0.022647,
    0.126657, 0.126657,
    0.840838, 0.840838,
    1.375272, 1.375272,
};

float Cg_init[2] = {
    -0.757699, 0.686460
};

float xstd_init[12] = {
    0.000181, 0.000013, 1.000000, 0.016526, 0.001907, 0.000699, 0.057288, 0.148705, 0.001633, 0.000507, 0.075089, 0.154916
};

float xmean_init[12] = {
    0.002756, -0.007910, 0.000000, 0.008421, 0.008156, -0.006657, 0.108772, 0.410526, 0.006357, -0.007068, 0.099649, 0.358947
};


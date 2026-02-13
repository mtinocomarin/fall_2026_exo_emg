// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.77%
// test_accuracy: 73.75%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:48:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.571752, 0.571770,
    -0.360497, 0.360477,
    0.375327, -0.375351,
    0.784064, -0.784043,
    0.816849, -0.816812,
    -0.859532, 0.859510,
    0.003378, -0.003377,
    -0.121133, 0.121119,
    -0.512124, 0.512043,
    0.281312, -0.281136,
    -0.405306, 0.405256,
    0.295105, -0.295196,
};

float Cg_init[2] = {
    -0.344251, -0.344247
};

float xstd_init[12] = {
    0.003925, 0.001446, 0.107299, 0.175807, 0.001579, 0.000468, 0.028175, 0.078953, 0.001781, 0.000095, 0.017536, 0.067928
};

float xmean_init[12] = {
    0.009954, -0.006214, 0.177898, 0.586615, 0.003205, -0.007733, 0.007077, 0.050077, 0.003265, -0.007806, 0.004615, 0.068462
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.00%
// test_accuracy: 72.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 15:48:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.891566, 0.891598,
    -0.259642, 0.259656,
    0.785520, -0.785538,
    0.738406, -0.738419,
    0.946598, -0.946630,
    -1.636440, 1.636500,
    0.238655, -0.238681,
    0.262361, -0.262365,
    -0.275602, 0.275643,
    0.695298, -0.695451,
    -0.624125, 0.624181,
    0.124925, -0.124862,
};

float Cg_init[2] = {
    -0.484527, -0.484550
};

float xstd_init[12] = {
    0.003617, 0.001303, 0.100091, 0.170803, 0.001721, 0.000531, 0.032156, 0.088977, 0.000967, 0.000102, 0.020985, 0.067785
};

float xmean_init[12] = {
    0.009718, -0.006274, 0.169231, 0.567231, 0.003284, -0.007706, 0.008000, 0.053231, 0.003227, -0.007802, 0.005128, 0.068308
};


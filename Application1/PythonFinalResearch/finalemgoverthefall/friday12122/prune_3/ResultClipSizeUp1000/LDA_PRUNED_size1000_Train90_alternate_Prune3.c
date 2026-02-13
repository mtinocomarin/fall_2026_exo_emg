// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 73.29%
// test_accuracy: 74.34%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:03:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.327545, 0.327554,
    -0.306632, 0.306665,
    0.308990, -0.309053,
    0.451843, -0.451817,
    0.581109, -0.581430,
    -0.631252, 0.631719,
    0.012279, -0.012394,
    -0.083243, 0.083193,
    -0.238705, 0.238869,
    0.227491, -0.227618,
    -0.183481, 0.183529,
    0.075212, -0.075186,
};

float Cg_init[2] = {
    -0.179538, -0.179582
};

float xstd_init[12] = {
    0.003269, 0.001274, 0.099581, 0.160934, 0.001229, 0.000348, 0.020150, 0.066137, 0.001268, 0.000075, 0.012453, 0.062381
};

float xmean_init[12] = {
    0.009530, -0.006330, 0.171718, 0.581914, 0.003021, -0.007775, 0.004678, 0.044594, 0.003139, -0.007817, 0.002892, 0.062265
};


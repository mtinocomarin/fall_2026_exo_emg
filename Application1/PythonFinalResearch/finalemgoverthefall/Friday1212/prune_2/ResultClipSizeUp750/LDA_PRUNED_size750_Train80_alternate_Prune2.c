// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.79%
// test_accuracy: 72.77%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:46:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.518139, 0.518112,
    -0.334014, 0.334022,
    0.384647, -0.384678,
    0.548660, -0.548630,
    0.653707, -0.653697,
    -0.674472, 0.674493,
    -0.033375, 0.033373,
    -0.060718, 0.060687,
    -0.374024, 0.373833,
    0.268520, -0.268038,
    -0.245170, 0.245037,
    0.095703, -0.095946,
};

float Cg_init[2] = {
    -0.229002, -0.228991
};

float xstd_init[12] = {
    0.003801, 0.001466, 0.107653, 0.173365, 0.001364, 0.000395, 0.023723, 0.071615, 0.001540, 0.000085, 0.014355, 0.065884
};

float xmean_init[12] = {
    0.009857, -0.006204, 0.181493, 0.591524, 0.003079, -0.007762, 0.005746, 0.046572, 0.003199, -0.007812, 0.003302, 0.063857
};


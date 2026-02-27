// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 58.33%
// test_accuracy: 55.56%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt']}
// generated: 2026-02-13 17:10:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.779705, 0.779704,
    -0.198422, 0.198313,
    0.000000, 0.000000,
    -0.400213, -0.400213,
    -1.193439, -1.193439,
    -1.091650, -1.091650,
    -0.576114, -0.576114,
    -1.092765, -1.092765,
    -0.979476, -0.979476,
    -0.933523, -0.933523,
    -0.562655, -0.562655,
    -1.037390, -1.037390,
};

float Cg_init[2] = {
    1.090984, -1.656648
};

float xstd_init[12] = {
    0.000314, 0.000015, 1.000000, 0.013322, 0.002089, 0.000639, 0.063819, 0.139536, 0.001966, 0.000553, 0.062280, 0.182851
};

float xmean_init[12] = {
    0.002668, -0.007910, 0.000000, 0.005000, 0.007903, -0.006728, 0.128518, 0.440000, 0.006141, -0.007100, 0.085185, 0.332778
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.83%
// test_accuracy: 62.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.368940, 0.368937,
    -0.339689, 0.339692,
    0.000000, 0.000000,
    -0.429209, -0.429209,
    0.056319, 0.056319,
    -0.263236, -0.263236,
    0.056490, 0.056490,
    1.578485, 1.578485,
    0.613884, 0.613884,
    0.813369, 0.813369,
    -0.675527, -0.675527,
    0.124972, 0.124972,
};

float Cg_init[2] = {
    -0.473173, 0.191659
};

float xstd_init[12] = {
    0.000214, 0.000015, 1.000000, 0.017693, 0.002005, 0.000728, 0.062157, 0.155554, 0.001574, 0.000515, 0.071171, 0.139803
};

float xmean_init[12] = {
    0.002756, -0.007912, 0.000000, 0.010000, 0.008380, -0.006567, 0.114444, 0.436667, 0.006446, -0.007051, 0.104444, 0.358333
};


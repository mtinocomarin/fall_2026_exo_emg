// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.31%
// test_accuracy: 61.54%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.196179, 1.196181,
    0.398552, -0.398538,
    0.000000, 0.000000,
    -0.402512, -0.402512,
    2.314428, 2.314428,
    3.019963, 3.019963,
    1.446669, 1.446669,
    1.240719, 1.240719,
    -0.051004, -0.051004,
    -0.217016, -0.217016,
    -0.359234, -0.359234,
    0.515488, 0.515488,
};

float Cg_init[2] = {
    0.771158, -1.541766
};

float xstd_init[12] = {
    0.000347, 0.000016, 1.000000, 0.016495, 0.001835, 0.000658, 0.071640, 0.126365, 0.001842, 0.000602, 0.068353, 0.178101
};

float xmean_init[12] = {
    0.002518, -0.007914, 0.000000, 0.008462, 0.008212, -0.006684, 0.138462, 0.460769, 0.006422, -0.006990, 0.098462, 0.372308
};


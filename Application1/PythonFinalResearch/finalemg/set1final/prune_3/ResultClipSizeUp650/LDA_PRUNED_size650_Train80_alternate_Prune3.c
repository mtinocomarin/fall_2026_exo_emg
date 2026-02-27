// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.33%
// test_accuracy: 68.75%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.573283, 0.573284,
    0.113724, -0.113453,
    0.000000, 0.000000,
    -0.429209, -0.429209,
    1.270763, 1.270763,
    1.119825, 1.119825,
    1.073290, 1.073290,
    1.878258, 1.878258,
    0.354322, 0.354322,
    -0.182208, -0.182208,
    -0.675527, -0.675527,
    0.952378, 0.952378,
};

float Cg_init[2] = {
    -0.143103, -0.125080
};

float xstd_init[12] = {
    0.000294, 0.000016, 1.000000, 0.014663, 0.002001, 0.000638, 0.071079, 0.118473, 0.001861, 0.000540, 0.071453, 0.176347
};

float xmean_init[12] = {
    0.002596, -0.007913, 0.000000, 0.006333, 0.008173, -0.006699, 0.140444, 0.451000, 0.006354, -0.007037, 0.099111, 0.361000
};


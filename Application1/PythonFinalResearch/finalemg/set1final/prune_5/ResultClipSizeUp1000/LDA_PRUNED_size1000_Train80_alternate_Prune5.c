// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.169813, 0.169817,
    0.072694, -0.072773,
    0.000000, 0.000000,
    -0.381417, -0.381417,
    -1.213004, -1.213004,
    -0.442680, -0.442680,
    -1.241991, -1.241991,
    -1.687800, -1.687800,
    -2.179119, -2.179119,
    -1.564942, -1.564942,
    -1.341242, -1.341242,
    -1.971172, -1.971172,
};

float Cg_init[2] = {
    2.573955, -2.603476
};

float xstd_init[12] = {
    0.000239, 0.000019, 1.000000, 0.019597, 0.001724, 0.000628, 0.067552, 0.129693, 0.001633, 0.000472, 0.074912, 0.157794
};

float xmean_init[12] = {
    0.002692, -0.007906, 0.000000, 0.009825, 0.008231, -0.006649, 0.135672, 0.443860, 0.006378, -0.007090, 0.101520, 0.367018
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.67%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:10:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.643328, 0.643325,
    -0.592834, 0.592906,
    0.000000, 0.000000,
    -0.337426, -0.337426,
    -0.721373, -0.721373,
    -0.871948, -0.871948,
    -0.640918, -0.640918,
    -0.894527, -0.894527,
    -1.113094, -1.113094,
    -0.893557, -0.893557,
    -0.425080, -0.425080,
    -0.943227, -0.943227,
};

float Cg_init[2] = {
    -0.550093, -0.195310
};

float xstd_init[12] = {
    0.000139, 0.000012, 1.000000, 0.016330, 0.003531, 0.001116, 0.083338, 0.120665, 0.000933, 0.000312, 0.061776, 0.135647
};

float xmean_init[12] = {
    0.002796, -0.007918, 0.000000, 0.006667, 0.009664, -0.005977, 0.164444, 0.620000, 0.006676, -0.007091, 0.111111, 0.380000
};


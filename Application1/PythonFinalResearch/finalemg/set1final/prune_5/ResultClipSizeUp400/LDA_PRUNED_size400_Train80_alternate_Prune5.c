// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 64.29%
// test_accuracy: 64.29%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.915998, 0.915996,
    -0.187303, 0.187326,
    0.000000, 0.000000,
    -0.421129, -0.421129,
    0.626400, 0.626400,
    -0.119778, -0.119778,
    -0.236667, -0.236667,
    0.352447, 0.352447,
    0.162916, 0.162916,
    0.483207, 0.483207,
    1.412812, 1.412812,
    0.766420, 0.766420,
};

float Cg_init[2] = {
    -1.520102, 0.813632
};

float xstd_init[12] = {
    0.000258, 0.000014, 1.000000, 0.013111, 0.002264, 0.000673, 0.061035, 0.147553, 0.002064, 0.000491, 0.067792, 0.192730
};

float xmean_init[12] = {
    0.002749, -0.007909, 0.000000, 0.004762, 0.008159, -0.006656, 0.131429, 0.455238, 0.006113, -0.007169, 0.088254, 0.326667
};


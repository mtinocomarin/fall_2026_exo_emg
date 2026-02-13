// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.74%
// test_accuracy: 72.73%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:51:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.564190, 0.564163,
    -0.326239, 0.326276,
    0.328527, -0.328549,
    0.832896, -0.832889,
    1.081118, -1.081161,
    -1.049233, 1.049311,
    -0.306125, 0.306103,
    -0.006073, 0.006060,
    1.046917, -1.046940,
    -0.363689, 0.363796,
    -0.451919, 0.451884,
    0.156113, -0.156169,
};

float Cg_init[2] = {
    -0.652424, -0.652439
};

float xstd_init[12] = {
    0.003542, 0.001249, 0.105719, 0.170178, 0.001383, 0.000425, 0.021514, 0.073076, 0.000515, 0.000084, 0.017658, 0.060534
};

float xmean_init[12] = {
    0.009839, -0.006245, 0.175816, 0.594806, 0.003111, -0.007750, 0.005541, 0.048398, 0.003087, -0.007813, 0.004618, 0.062424
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.23%
// test_accuracy: 74.43%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:00:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.094252, 0.094266,
    -0.161747, 0.161741,
    0.013327, -0.013323,
    0.012518, -0.012527,
    1.511608, -1.511655,
    -1.247478, 1.247538,
    -0.123487, 0.123480,
    0.105051, -0.105070,
    -0.545880, 0.545941,
    -0.457547, 0.457482,
    0.325895, -0.325917,
    1.005533, -1.005504,
};

float Cg_init[2] = {
    -0.398405, -0.398416
};

float xstd_init[12] = {
    0.000849, 0.000073, 0.007458, 0.063378, 0.000705, 0.000118, 0.013872, 0.051939, 0.003480, 0.001035, 0.116178, 0.208677
};

float xmean_init[12] = {
    0.005496, -0.007760, 0.001881, 0.090721, 0.002368, -0.007853, 0.004305, 0.045705, 0.009117, -0.006597, 0.132791, 0.472539
};


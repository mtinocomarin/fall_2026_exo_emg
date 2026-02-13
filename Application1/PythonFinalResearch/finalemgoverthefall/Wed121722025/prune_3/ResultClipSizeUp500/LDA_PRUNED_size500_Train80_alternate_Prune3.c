// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.20%
// test_accuracy: 55.56%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:42:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.301079, 0.301035,
    0.158689, -0.158602,
    0.083594, -0.083600,
    -0.144806, 0.144755,
    -0.463493, 0.463516,
    -0.062371, 0.062378,
    0.033276, -0.033295,
    0.283438, -0.283450,
    -0.428573, 0.428556,
    0.142798, -0.142747,
    -0.032404, 0.032396,
    0.189272, -0.189306,
};

float Cg_init[2] = {
    -0.129923, -0.129919
};

float xstd_init[12] = {
    0.000993, 0.000078, 0.011353, 0.078676, 0.002907, 0.000794, 0.086335, 0.175749, 0.000820, 0.000106, 0.017968, 0.072385
};

float xmean_init[12] = {
    0.006426, -0.007692, 0.004138, 0.141686, 0.008703, -0.006846, 0.106616, 0.447050, 0.004309, -0.007721, 0.009298, 0.124905
};


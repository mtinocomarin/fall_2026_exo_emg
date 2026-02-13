// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.49%
// test_accuracy: 55.36%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 13:43:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.464006, 0.464014,
    0.346736, -0.346766,
    0.192691, -0.192681,
    -0.268881, 0.268894,
    -0.460143, 0.460194,
    -0.251392, 0.251346,
    0.270385, -0.270391,
    0.199592, -0.199607,
    -0.620697, 0.620654,
    0.251750, -0.251642,
    -0.085925, 0.085894,
    0.266131, -0.266177,
};

float Cg_init[2] = {
    -0.212814, -0.212814
};

float xstd_init[12] = {
    0.001022, 0.000081, 0.010664, 0.078188, 0.002896, 0.000803, 0.083784, 0.174218, 0.000851, 0.000111, 0.017977, 0.073218
};

float xmean_init[12] = {
    0.006443, -0.007690, 0.003810, 0.140318, 0.008685, -0.006854, 0.102928, 0.448572, 0.004337, -0.007717, 0.008748, 0.126773
};


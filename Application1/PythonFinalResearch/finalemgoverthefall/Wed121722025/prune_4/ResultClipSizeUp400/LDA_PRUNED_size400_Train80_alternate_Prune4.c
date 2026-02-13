// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.17%
// test_accuracy: 54.46%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:43:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.447145, 0.447081,
    0.316044, -0.315931,
    0.143222, -0.143223,
    -0.256189, 0.256131,
    -0.382104, 0.382180,
    -0.199726, 0.199654,
    0.165293, -0.165290,
    0.167403, -0.167433,
    -0.527058, 0.526962,
    0.229689, -0.229485,
    -0.102456, 0.102398,
    0.245100, -0.245175,
};

float Cg_init[2] = {
    -0.178660, -0.178639
};

float xstd_init[12] = {
    0.001017, 0.000081, 0.010740, 0.077505, 0.002849, 0.000790, 0.083288, 0.172342, 0.000853, 0.000110, 0.017764, 0.072886
};

float xmean_init[12] = {
    0.006423, -0.007690, 0.003946, 0.140408, 0.008678, -0.006855, 0.104422, 0.449388, 0.004344, -0.007718, 0.008571, 0.126327
};


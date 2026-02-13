// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.87%
// test_accuracy: 77.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:15:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.120066, 1.120062,
    0.271561, -0.271553,
    0.983008, -0.983003,
    0.637023, -0.637025,
    -0.795193, 0.795275,
    0.286022, -0.286110,
    0.027859, -0.027858,
    0.331870, -0.331861,
    -0.460774, 0.460670,
    0.169010, -0.168869,
    -0.410353, 0.410305,
    0.397891, -0.397888,
};

float Cg_init[2] = {
    -0.575880, -0.575876
};

float xstd_init[12] = {
    0.004482, 0.001886, 0.332023, 0.121438, 0.001535, 0.000279, 0.071828, 0.138217, 0.000691, 0.000159, 0.049318, 0.147869
};

float xmean_init[12] = {
    0.010896, -0.005626, 0.457971, 1.036000, 0.003631, -0.007717, 0.021159, 0.617043, 0.003553, -0.007734, 0.015652, 0.691652
};


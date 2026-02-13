// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.96%
// test_accuracy: 70.31%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 17:00:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.220505, -0.220607,
    0.168188, -0.167958,
    -0.111273, 0.111232,
    -0.412255, 0.412136,
    1.321403, -1.321355,
    -1.258737, 1.258664,
    -0.172500, 0.172519,
    0.215304, -0.215288,
    -0.577929, 0.577929,
    -0.593353, 0.593335,
    0.398590, -0.398580,
    1.575560, -1.575559,
};

float Cg_init[2] = {
    -0.574197, -0.574173
};

float xstd_init[12] = {
    0.000877, 0.000063, 0.007616, 0.066530, 0.000802, 0.000143, 0.015175, 0.058675, 0.003184, 0.000980, 0.119237, 0.212315
};

float xmean_init[12] = {
    0.005528, -0.007763, 0.001235, 0.088704, 0.002398, -0.007845, 0.005556, 0.051667, 0.008899, -0.006632, 0.137160, 0.472963
};


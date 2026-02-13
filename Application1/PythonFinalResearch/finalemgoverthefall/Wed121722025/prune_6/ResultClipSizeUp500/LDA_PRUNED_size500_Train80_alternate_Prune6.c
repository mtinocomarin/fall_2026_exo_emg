// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.29%
// test_accuracy: 54.86%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:44:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.430895, 0.430962,
    0.242701, -0.242871,
    0.077212, -0.077188,
    -0.184281, 0.184370,
    -0.578850, 0.578877,
    -0.165296, 0.165297,
    0.235313, -0.235344,
    0.250838, -0.250844,
    -0.519242, 0.519220,
    0.231717, -0.231647,
    -0.023107, 0.023084,
    0.181537, -0.181576,
};

float Cg_init[2] = {
    -0.187766, -0.187779
};

float xstd_init[12] = {
    0.001023, 0.000079, 0.010756, 0.078597, 0.002974, 0.000816, 0.086955, 0.178002, 0.000829, 0.000107, 0.017276, 0.072783
};

float xmean_init[12] = {
    0.006439, -0.007690, 0.003704, 0.142564, 0.008619, -0.006864, 0.102507, 0.439658, 0.004372, -0.007716, 0.008889, 0.129402
};


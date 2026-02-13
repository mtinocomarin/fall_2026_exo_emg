// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_2\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.33%
// test_accuracy: 53.75%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:42:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.251899, 0.252025,
    0.122122, -0.122399,
    0.041266, -0.041240,
    -0.117994, 0.118130,
    -0.507951, 0.507956,
    -0.102268, 0.102262,
    0.154196, -0.154226,
    0.279679, -0.279656,
    -0.294177, 0.294227,
    0.088608, -0.088675,
    -0.007919, 0.007924,
    0.163115, -0.163108,
};

float Cg_init[2] = {
    -0.103551, -0.103569
};

float xstd_init[12] = {
    0.001002, 0.000078, 0.012699, 0.079429, 0.002907, 0.000780, 0.085372, 0.174190, 0.000836, 0.000107, 0.018663, 0.069976
};

float xmean_init[12] = {
    0.006397, -0.007693, 0.004889, 0.140400, 0.008664, -0.006853, 0.104578, 0.442067, 0.004315, -0.007722, 0.009467, 0.124267
};


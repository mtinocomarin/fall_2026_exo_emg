// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.61%
// test_accuracy: 58.33%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 13:45:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.866171, 0.866218,
    0.260057, -0.260150,
    0.167697, -0.167684,
    -0.028442, 0.028482,
    -0.561838, 0.561839,
    -0.092646, 0.092634,
    0.286067, -0.286064,
    -0.088025, 0.088018,
    -1.012784, 1.012764,
    0.408947, -0.408874,
    -0.096735, 0.096709,
    0.391445, -0.391475,
};

float Cg_init[2] = {
    -0.393187, -0.393194
};

float xstd_init[12] = {
    0.001041, 0.000082, 0.011409, 0.081175, 0.002862, 0.000800, 0.080145, 0.167875, 0.000880, 0.000120, 0.018122, 0.072182
};

float xmean_init[12] = {
    0.006456, -0.007687, 0.004444, 0.141594, 0.008596, -0.006861, 0.099130, 0.441159, 0.004370, -0.007714, 0.008792, 0.131160
};


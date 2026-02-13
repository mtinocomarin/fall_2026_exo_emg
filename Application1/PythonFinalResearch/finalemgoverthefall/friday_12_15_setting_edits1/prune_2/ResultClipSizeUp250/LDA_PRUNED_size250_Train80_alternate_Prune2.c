// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.25%
// test_accuracy: 79.69%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:11:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.221239, 1.221239,
    0.402012, -0.402013,
    0.769322, -0.769321,
    0.199401, -0.199397,
    0.245932, -0.245891,
    -0.348697, 0.348654,
    -0.170339, 0.170334,
    0.159741, -0.159731,
    -0.060827, 0.060807,
    -0.303376, 0.303366,
    0.004014, -0.004000,
    0.168261, -0.168245,
};

float Cg_init[2] = {
    -0.295792, -0.295787
};

float xstd_init[12] = {
    0.004624, 0.002144, 0.338676, 0.123554, 0.001459, 0.000268, 0.065847, 0.144893, 0.000638, 0.000158, 0.050287, 0.142166
};

float xmean_init[12] = {
    0.011157, -0.005436, 0.470833, 1.037833, 0.003561, -0.007725, 0.019167, 0.633166, 0.003545, -0.007730, 0.016111, 0.702500
};


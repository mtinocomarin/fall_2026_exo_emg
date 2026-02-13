// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.82%
// test_accuracy: 53.12%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt']}
// generated: 2025-12-17 13:42:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.356063, 0.356107,
    0.183851, -0.183949,
    0.005985, -0.005973,
    -0.124944, 0.124987,
    -0.278601, 0.278637,
    -0.214385, 0.214340,
    0.011725, -0.011739,
    0.277839, -0.277809,
    -0.460669, 0.460747,
    0.220742, -0.220856,
    -0.032578, 0.032605,
    0.150077, -0.150060,
};

float Cg_init[2] = {
    -0.126625, -0.126639
};

float xstd_init[12] = {
    0.000993, 0.000079, 0.013213, 0.081113, 0.003007, 0.000819, 0.088463, 0.178897, 0.000847, 0.000111, 0.019687, 0.072108
};

float xmean_init[12] = {
    0.006463, -0.007688, 0.005287, 0.144311, 0.008641, -0.006850, 0.105364, 0.443793, 0.004320, -0.007719, 0.010268, 0.126150
};


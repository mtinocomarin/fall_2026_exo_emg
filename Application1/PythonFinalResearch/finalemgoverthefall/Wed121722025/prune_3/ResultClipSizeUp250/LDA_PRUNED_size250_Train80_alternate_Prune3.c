// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.71%
// test_accuracy: 56.25%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 13:42:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.376751, 0.376683,
    0.081104, -0.080959,
    0.116592, -0.116608,
    0.029047, -0.029122,
    -0.563971, 0.563977,
    -0.102598, 0.102602,
    0.260129, -0.260125,
    0.032440, -0.032448,
    -0.534642, 0.534623,
    0.241900, -0.241853,
    -0.124180, 0.124166,
    0.269011, -0.269030,
};

float Cg_init[2] = {
    -0.187543, -0.187538
};

float xstd_init[12] = {
    0.001025, 0.000079, 0.011066, 0.079491, 0.002345, 0.000649, 0.075188, 0.154939, 0.000883, 0.000121, 0.018462, 0.069193
};

float xmean_init[12] = {
    0.006386, -0.007694, 0.004368, 0.136552, 0.008607, -0.006900, 0.101839, 0.450862, 0.004340, -0.007713, 0.009310, 0.131379
};


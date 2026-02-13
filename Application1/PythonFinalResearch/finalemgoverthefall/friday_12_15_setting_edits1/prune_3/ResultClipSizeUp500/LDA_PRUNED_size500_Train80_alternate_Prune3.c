// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.31%
// test_accuracy: 73.61%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:12:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.679317, 0.679286,
    0.028503, -0.028495,
    0.463786, -0.463767,
    0.345409, -0.345405,
    -0.400338, 0.400478,
    0.071199, -0.071328,
    0.011673, -0.011685,
    0.255721, -0.255712,
    0.164293, -0.164263,
    -0.183472, 0.183421,
    -0.343322, 0.343338,
    0.216530, -0.216532,
};

float Cg_init[2] = {
    -0.245269, -0.245265
};

float xstd_init[12] = {
    0.004814, 0.002259, 0.349351, 0.121541, 0.001187, 0.000211, 0.053304, 0.133667, 0.000675, 0.000164, 0.049706, 0.145632
};

float xmean_init[12] = {
    0.010822, -0.005483, 0.460025, 1.032414, 0.003450, -0.007751, 0.013665, 0.621379, 0.003549, -0.007731, 0.016603, 0.698851
};


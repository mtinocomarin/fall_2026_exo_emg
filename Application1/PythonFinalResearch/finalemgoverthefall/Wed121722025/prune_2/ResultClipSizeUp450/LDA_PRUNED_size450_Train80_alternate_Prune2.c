// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_2\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.12%
// test_accuracy: 57.81%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:42:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.237068, 0.236966,
    0.143926, -0.143669,
    0.105552, -0.105573,
    -0.103346, 0.103201,
    -0.580076, 0.580138,
    -0.112602, 0.112561,
    0.234466, -0.234478,
    0.263841, -0.263844,
    -0.258683, 0.258693,
    0.026434, -0.026421,
    -0.006545, 0.006547,
    0.157418, -0.157443,
};

float Cg_init[2] = {
    -0.114750, -0.114742
};

float xstd_init[12] = {
    0.001010, 0.000079, 0.011644, 0.079533, 0.002828, 0.000758, 0.080536, 0.171316, 0.000836, 0.000108, 0.017975, 0.070306
};

float xmean_init[12] = {
    0.006368, -0.007695, 0.004333, 0.139000, 0.008712, -0.006850, 0.103000, 0.445667, 0.004311, -0.007719, 0.009056, 0.125834
};


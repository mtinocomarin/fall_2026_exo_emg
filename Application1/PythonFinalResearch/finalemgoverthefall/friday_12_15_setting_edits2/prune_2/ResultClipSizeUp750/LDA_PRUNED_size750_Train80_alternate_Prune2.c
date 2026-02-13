// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.93%
// test_accuracy: 68.30%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 12:37:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.661370, 0.661380,
    0.059910, -0.059882,
    0.306022, -0.306053,
    0.468677, -0.468662,
    -0.281768, 0.281738,
    0.084378, -0.084345,
    -0.050329, 0.050324,
    0.028887, -0.028906,
    0.216178, -0.216247,
    -0.123144, 0.123399,
    -0.379966, 0.379897,
    0.095376, -0.095505,
};

float Cg_init[2] = {
    -0.169266, -0.169272
};

float xstd_init[12] = {
    0.004439, 0.002070, 0.151223, 0.204921, 0.001012, 0.000178, 0.026098, 0.078827, 0.000634, 0.000155, 0.028838, 0.103619
};

float xmean_init[12] = {
    0.010323, -0.005685, 0.244096, 0.684381, 0.003340, -0.007769, 0.008095, 0.074191, 0.003492, -0.007739, 0.012508, 0.114334
};


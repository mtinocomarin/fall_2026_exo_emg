// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.33%
// test_accuracy: 72.22%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:14:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.529800, 0.529757,
    -0.091640, 0.091673,
    0.601390, -0.601376,
    0.432720, -0.432725,
    -0.574722, 0.574593,
    0.113745, -0.113608,
    0.048937, -0.048936,
    0.257634, -0.257630,
    0.182331, -0.182365,
    -0.253949, 0.254004,
    -0.409391, 0.409375,
    0.233654, -0.233652,
};

float Cg_init[2] = {
    -0.331772, -0.331766
};

float xstd_init[12] = {
    0.004542, 0.002065, 0.332251, 0.120830, 0.001257, 0.000225, 0.056883, 0.135006, 0.000685, 0.000173, 0.052123, 0.146562
};

float xmean_init[12] = {
    0.010533, -0.005656, 0.441185, 1.029867, 0.003490, -0.007742, 0.015111, 0.617599, 0.003544, -0.007729, 0.017926, 0.698578
};


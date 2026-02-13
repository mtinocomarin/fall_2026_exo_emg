// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.69%
// test_accuracy: 68.27%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 12:44:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.718503, 0.718560,
    0.290717, -0.290751,
    0.448367, -0.448408,
    0.792646, -0.792636,
    -0.637551, 0.637284,
    0.303102, -0.302779,
    -0.099603, 0.099600,
    -0.007074, 0.007015,
    0.301693, -0.301640,
    -0.149739, 0.149620,
    -0.529599, 0.529636,
    -0.058411, 0.058456,
};

float Cg_init[2] = {
    -0.384845, -0.384845
};

float xstd_init[12] = {
    0.004009, 0.001722, 0.147330, 0.206211, 0.001140, 0.000199, 0.029742, 0.083814, 0.000692, 0.000176, 0.029369, 0.110188
};

float xmean_init[12] = {
    0.010193, -0.005802, 0.241866, 0.682168, 0.003442, -0.007754, 0.010443, 0.080350, 0.003536, -0.007728, 0.012634, 0.121679
};


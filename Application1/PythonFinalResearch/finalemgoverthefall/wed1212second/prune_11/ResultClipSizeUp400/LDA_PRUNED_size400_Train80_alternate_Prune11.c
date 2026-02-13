// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.18%
// test_accuracy: 73.21%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 17:04:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.095224, -0.095226,
    -0.242433, 0.242407,
    0.004589, -0.004578,
    -0.113944, 0.113949,
    2.059764, -2.059613,
    -1.760955, 1.760752,
    -0.353500, 0.353529,
    0.172893, -0.172857,
    -0.410762, 0.410716,
    -0.921504, 0.921565,
    0.342125, -0.342153,
    1.829688, -1.829672,
};

float Cg_init[2] = {
    -0.774427, -0.774386
};

float xstd_init[12] = {
    0.000919, 0.000081, 0.007596, 0.069526, 0.000778, 0.000132, 0.016450, 0.058824, 0.003401, 0.000995, 0.115617, 0.211851
};

float xmean_init[12] = {
    0.005609, -0.007755, 0.001723, 0.094150, 0.002444, -0.007843, 0.005714, 0.053469, 0.008958, -0.006641, 0.127256, 0.461905
};


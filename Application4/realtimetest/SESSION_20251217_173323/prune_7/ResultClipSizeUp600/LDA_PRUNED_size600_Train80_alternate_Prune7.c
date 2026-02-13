// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.74%
// test_accuracy: 68.18%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:09:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.818117, 0.818258,
    1.300516, -1.300875,
    -0.324189, 0.324332,
    -0.136664, 0.136763,
    0.330886, -0.330747,
    -0.069766, 0.069620,
    -1.390017, 1.390108,
    0.341723, -0.341768,
    -0.148334, 0.148341,
    -0.561183, 0.561195,
    0.399217, -0.399244,
    1.067387, -1.067375,
};

float Cg_init[2] = {
    -0.601046, -0.601093
};

float xstd_init[12] = {
    0.001087, 0.000120, 0.026463, 0.089594, 0.002944, 0.000941, 0.054385, 0.143442, 0.006001, 0.002494, 0.161519, 0.256841
};

float xmean_init[12] = {
    0.005525, -0.007716, 0.008990, 0.130606, 0.004373, -0.007487, 0.021717, 0.128485, 0.012028, -0.005578, 0.184142, 0.556818
};


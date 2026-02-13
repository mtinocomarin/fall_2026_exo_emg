// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.36%
// test_accuracy: 85.42%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 12:43:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.174683, 1.174699,
    -0.221403, 0.221399,
    1.051412, -1.051421,
    1.242429, -1.242420,
    0.299779, -0.299689,
    -0.173552, 0.173411,
    0.197810, -0.197805,
    -0.970188, 0.970235,
    0.443965, -0.444035,
    -0.961065, 0.961203,
    -0.400324, 0.400293,
    0.206339, -0.206384,
};

float Cg_init[2] = {
    -0.823591, -0.823604
};

float xstd_init[12] = {
    0.004013, 0.001645, 0.135473, 0.177019, 0.001624, 0.000300, 0.039766, 0.102700, 0.000658, 0.000162, 0.022741, 0.101953
};

float xmean_init[12] = {
    0.010600, -0.005782, 0.242593, 0.703889, 0.003664, -0.007709, 0.013519, 0.086944, 0.003543, -0.007732, 0.010185, 0.120278
};


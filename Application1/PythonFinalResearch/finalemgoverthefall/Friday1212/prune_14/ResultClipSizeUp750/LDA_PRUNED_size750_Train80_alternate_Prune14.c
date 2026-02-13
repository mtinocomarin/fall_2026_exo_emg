// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.49%
// test_accuracy: 76.79%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:53:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.525111, 0.525120,
    -0.421879, 0.421878,
    0.530767, -0.530816,
    0.806891, -0.806845,
    1.431562, -1.431704,
    -1.202391, 1.202606,
    -0.452891, 0.452845,
    -0.087093, 0.087070,
    0.732279, -0.732320,
    0.066478, -0.066369,
    -0.374930, 0.374902,
    -0.034649, 0.034602,
};

float Cg_init[2] = {
    -0.658066, -0.658091
};

float xstd_init[12] = {
    0.003210, 0.001085, 0.103208, 0.176391, 0.001414, 0.000444, 0.024467, 0.076423, 0.000508, 0.000068, 0.013177, 0.060662
};

float xmean_init[12] = {
    0.009472, -0.006369, 0.171112, 0.582857, 0.003173, -0.007737, 0.006984, 0.052460, 0.003121, -0.007814, 0.003598, 0.064762
};


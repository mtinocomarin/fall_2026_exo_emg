// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.90%
// test_accuracy: 84.38%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt']}
// generated: 2025-12-12 16:07:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.137854, 1.137840,
    0.038520, -0.038563,
    0.674036, -0.674051,
    0.872612, -0.872568,
    1.185234, -1.185247,
    -1.558072, 1.558095,
    0.360984, -0.360970,
    -0.357364, 0.357363,
    0.931391, -0.931531,
    -0.558704, 0.559059,
    -0.447009, 0.446911,
    0.443220, -0.443353,
};

float Cg_init[2] = {
    -0.739101, -0.739124
};

float xstd_init[12] = {
    0.003991, 0.001470, 0.098654, 0.169812, 0.001816, 0.000563, 0.035093, 0.092812, 0.000567, 0.000096, 0.020224, 0.068387
};

float xmean_init[12] = {
    0.010051, -0.006180, 0.167821, 0.571538, 0.003391, -0.007664, 0.009872, 0.056538, 0.003168, -0.007805, 0.004872, 0.067308
};


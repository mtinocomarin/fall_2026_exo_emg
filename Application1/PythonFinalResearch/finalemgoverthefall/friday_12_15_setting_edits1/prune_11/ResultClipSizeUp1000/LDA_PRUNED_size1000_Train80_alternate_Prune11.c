// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.32%
// test_accuracy: 67.43%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_10.txt', 'act2\\trial_26.txt', 'act2\\trial_17.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:16:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.583256, 0.583248,
    0.082345, -0.082335,
    0.773474, -0.773473,
    0.222295, -0.222293,
    -0.579898, 0.579681,
    0.271801, -0.271563,
    -0.005340, 0.005339,
    0.270179, -0.270192,
    0.310465, -0.310456,
    -0.364308, 0.364295,
    -0.314727, 0.314731,
    0.367449, -0.367441,
};

float Cg_init[2] = {
    -0.310253, -0.310244
};

float xstd_init[12] = {
    0.003722, 0.001583, 0.328733, 0.122472, 0.000900, 0.000158, 0.039827, 0.131281, 0.000635, 0.000159, 0.047729, 0.140685
};

float xmean_init[12] = {
    0.009996, -0.005889, 0.431329, 1.042205, 0.003294, -0.007777, 0.008688, 0.611930, 0.003484, -0.007743, 0.013450, 0.688120
};


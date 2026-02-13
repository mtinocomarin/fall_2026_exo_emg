// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.62%
// test_accuracy: 75.00%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt']}
// generated: 2025-12-17 17:02:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.015825, -0.015844,
    -0.002990, 0.002967,
    -0.088208, 0.088221,
    -0.134721, 0.134736,
    1.626580, -1.626350,
    -1.419894, 1.419584,
    -0.270560, 0.270606,
    0.244907, -0.244852,
    -0.552976, 0.552967,
    -0.788406, 0.788417,
    0.354464, -0.354491,
    1.551665, -1.551646,
};

float Cg_init[2] = {
    -0.597910, -0.597852
};

float xstd_init[12] = {
    0.000887, 0.000080, 0.007711, 0.067872, 0.000783, 0.000137, 0.016146, 0.059071, 0.003278, 0.000948, 0.115026, 0.209383
};

float xmean_init[12] = {
    0.005557, -0.007760, 0.001574, 0.091945, 0.002399, -0.007846, 0.005833, 0.051806, 0.008941, -0.006651, 0.130185, 0.470000
};


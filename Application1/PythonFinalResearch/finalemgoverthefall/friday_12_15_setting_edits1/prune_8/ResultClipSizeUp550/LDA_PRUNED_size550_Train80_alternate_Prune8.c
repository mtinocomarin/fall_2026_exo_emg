// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.62%
// test_accuracy: 66.88%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:15:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712260, 0.712249,
    0.003244, -0.003232,
    0.689638, -0.689623,
    0.379136, -0.379140,
    -0.597170, 0.597258,
    0.218335, -0.218428,
    0.028769, -0.028768,
    0.197521, -0.197514,
    0.218097, -0.218194,
    -0.327182, 0.327319,
    -0.272014, 0.271971,
    0.401814, -0.401833,
};

float Cg_init[2] = {
    -0.326641, -0.326645
};

float xstd_init[12] = {
    0.004672, 0.002165, 0.355790, 0.125403, 0.001165, 0.000212, 0.048219, 0.137017, 0.000698, 0.000173, 0.052794, 0.137054
};

float xmean_init[12] = {
    0.010788, -0.005517, 0.465693, 1.033667, 0.003454, -0.007749, 0.013750, 0.624333, 0.003571, -0.007727, 0.015694, 0.703917
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.58%
// test_accuracy: 72.22%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:16:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.645351, 0.645339,
    0.018595, -0.018581,
    0.755302, -0.755293,
    0.478983, -0.478987,
    -0.528705, 0.528669,
    0.062837, -0.062795,
    0.041377, -0.041381,
    0.271594, -0.271588,
    0.209623, -0.209697,
    -0.249734, 0.249824,
    -0.478634, 0.478612,
    0.171848, -0.171843,
};

float Cg_init[2] = {
    -0.387493, -0.387491
};

float xstd_init[12] = {
    0.004309, 0.001848, 0.339951, 0.123740, 0.001241, 0.000218, 0.057253, 0.136835, 0.000695, 0.000180, 0.053025, 0.148071
};

float xmean_init[12] = {
    0.010499, -0.005710, 0.448316, 1.028283, 0.003482, -0.007744, 0.014478, 0.616767, 0.003562, -0.007725, 0.018687, 0.698990
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 76.14%
// test_accuracy: 74.34%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:05:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.483781, 0.483763,
    -0.249732, 0.249771,
    0.388490, -0.388533,
    0.491303, -0.491286,
    0.653248, -0.653319,
    -0.723354, 0.723479,
    0.032961, -0.032993,
    -0.068953, 0.068924,
    -0.310132, 0.310168,
    0.332263, -0.332263,
    -0.248106, 0.248114,
    0.102292, -0.102317,
};

float Cg_init[2] = {
    -0.223230, -0.223248
};

float xstd_init[12] = {
    0.003216, 0.001257, 0.100208, 0.162795, 0.001276, 0.000363, 0.020925, 0.068240, 0.001324, 0.000077, 0.012971, 0.063381
};

float xmean_init[12] = {
    0.009487, -0.006344, 0.170714, 0.580912, 0.003052, -0.007768, 0.004912, 0.046597, 0.003157, -0.007815, 0.003111, 0.063193
};


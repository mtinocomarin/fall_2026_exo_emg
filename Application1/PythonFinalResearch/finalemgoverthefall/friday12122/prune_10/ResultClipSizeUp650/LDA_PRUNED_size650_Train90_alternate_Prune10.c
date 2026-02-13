// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.17%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 16:07:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.778238, 0.778236,
    -0.163041, 0.163024,
    0.571524, -0.571540,
    0.761592, -0.761571,
    1.010587, -1.010436,
    -0.867598, 0.867412,
    -0.187549, 0.187595,
    -0.183027, 0.183025,
    -0.552642, 0.552467,
    0.405637, -0.405343,
    -0.313094, 0.313007,
    0.042221, -0.042365,
};

float Cg_init[2] = {
    -0.386954, -0.386928
};

float xstd_init[12] = {
    0.003439, 0.001184, 0.101149, 0.169173, 0.001514, 0.000440, 0.023259, 0.073557, 0.001758, 0.000092, 0.016366, 0.069470
};

float xmean_init[12] = {
    0.009646, -0.006340, 0.169872, 0.580897, 0.003216, -0.007730, 0.006410, 0.051346, 0.003263, -0.007808, 0.004573, 0.067308
};


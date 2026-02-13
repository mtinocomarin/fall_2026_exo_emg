// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.05%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 16:04:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.787509, 0.787552,
    -0.228834, 0.228869,
    0.473152, -0.473197,
    0.794368, -0.794379,
    0.978880, -0.979026,
    -1.092560, 1.092721,
    0.013809, -0.013828,
    -0.029695, 0.029693,
    -0.443922, 0.444068,
    0.438834, -0.439165,
    -0.453629, 0.453738,
    0.209729, -0.209583,
};

float Cg_init[2] = {
    -0.382611, -0.382658
};

float xstd_init[12] = {
    0.003695, 0.001374, 0.100545, 0.169836, 0.001576, 0.000481, 0.027736, 0.078635, 0.001398, 0.000088, 0.017523, 0.066236
};

float xmean_init[12] = {
    0.009831, -0.006258, 0.170162, 0.579032, 0.003179, -0.007730, 0.006720, 0.048226, 0.003238, -0.007807, 0.004677, 0.067339
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.60%
// test_accuracy: 65.62%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.920806, 0.920777,
    0.148997, -0.148988,
    0.631428, -0.631413,
    0.341336, -0.341340,
    0.033460, -0.033440,
    -0.273086, 0.273064,
    -0.059395, 0.059394,
    0.151806, -0.151793,
    -0.015404, 0.015456,
    -0.383082, 0.382983,
    -0.063180, 0.063221,
    0.408331, -0.408314,
};

float Cg_init[2] = {
    -0.297544, -0.297536
};

float xstd_init[12] = {
    0.004768, 0.002169, 0.344035, 0.122553, 0.001374, 0.000246, 0.061267, 0.138602, 0.000662, 0.000163, 0.053173, 0.136161
};

float xmean_init[12] = {
    0.011066, -0.005449, 0.467241, 1.032069, 0.003543, -0.007733, 0.018199, 0.626321, 0.003559, -0.007726, 0.016475, 0.708620
};


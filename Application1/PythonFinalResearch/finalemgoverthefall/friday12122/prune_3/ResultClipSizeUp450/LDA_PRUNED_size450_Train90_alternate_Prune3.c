// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 79.92%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-12 16:03:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.704516, 0.704547,
    -0.242749, 0.242743,
    0.388926, -0.388960,
    0.745142, -0.745132,
    0.838804, -0.838823,
    -0.956640, 0.956663,
    0.000668, -0.000670,
    -0.034444, 0.034442,
    -0.363848, 0.363857,
    0.353414, -0.353435,
    -0.379913, 0.379923,
    0.182138, -0.182138,
};

float Cg_init[2] = {
    -0.327350, -0.327361
};

float xstd_init[12] = {
    0.003738, 0.001407, 0.101706, 0.169627, 0.001601, 0.000492, 0.028644, 0.079522, 0.001364, 0.000087, 0.017019, 0.065783
};

float xmean_init[12] = {
    0.009884, -0.006240, 0.171011, 0.581515, 0.003205, -0.007720, 0.007424, 0.049394, 0.003210, -0.007810, 0.004394, 0.065682
};


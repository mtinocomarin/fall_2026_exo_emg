// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.48%
// test_accuracy: 70.83%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-17 16:59:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.073718, -0.073653,
    0.383175, -0.383340,
    -0.092863, 0.092896,
    -0.504927, 0.505022,
    1.249791, -1.249841,
    -0.897349, 0.897411,
    -0.189806, 0.189784,
    0.052119, -0.052121,
    -0.602128, 0.602122,
    -0.325499, 0.325521,
    0.336605, -0.336609,
    1.323418, -1.323429,
};

float Cg_init[2] = {
    -0.489012, -0.489036
};

float xstd_init[12] = {
    0.000864, 0.000059, 0.007729, 0.067412, 0.000731, 0.000120, 0.016503, 0.057490, 0.003016, 0.001029, 0.119255, 0.206808
};

float xmean_init[12] = {
    0.005523, -0.007765, 0.001379, 0.087816, 0.002355, -0.007851, 0.005977, 0.050345, 0.008819, -0.006644, 0.132720, 0.468046
};


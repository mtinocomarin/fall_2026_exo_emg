// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.46%
// test_accuracy: 78.57%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:06:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.461047, 0.461013,
    -0.516075, 0.516096,
    0.420000, -0.420014,
    0.667861, -0.667845,
    1.026727, -1.026591,
    -0.920795, 0.920612,
    -0.212686, 0.212733,
    -0.163814, 0.163817,
    0.730809, -0.730980,
    -0.047559, 0.048007,
    -0.360019, 0.359881,
    -0.065755, 0.065555,
};

float Cg_init[2] = {
    -0.471428, -0.471424
};

float xstd_init[12] = {
    0.003520, 0.001222, 0.101432, 0.167048, 0.001308, 0.000406, 0.021546, 0.069555, 0.000527, 0.000074, 0.015132, 0.064429
};

float xmean_init[12] = {
    0.009593, -0.006336, 0.171565, 0.579643, 0.003099, -0.007748, 0.005782, 0.048010, 0.003101, -0.007813, 0.003912, 0.066480
};


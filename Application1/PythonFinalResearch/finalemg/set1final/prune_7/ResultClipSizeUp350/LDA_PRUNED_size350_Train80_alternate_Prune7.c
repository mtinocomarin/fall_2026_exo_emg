// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.806520, 0.806521,
    -0.767668, 0.767804,
    0.000000, 0.000000,
    -0.428084, -0.428084,
    0.348831, 0.348831,
    0.226751, 0.226751,
    0.043870, 0.043870,
    0.662230, 0.662230,
    0.285697, 0.285697,
    -0.042554, -0.042554,
    1.113568, 1.113568,
    1.192297, 1.192297,
};

float Cg_init[2] = {
    -1.154230, 0.093292
};

float xstd_init[12] = {
    0.000210, 0.000014, 1.000000, 0.015570, 0.002515, 0.000775, 0.064657, 0.120755, 0.001043, 0.000356, 0.067110, 0.143548
};

float xmean_init[12] = {
    0.002778, -0.007917, 0.000000, 0.006667, 0.008919, -0.006294, 0.151111, 0.530000, 0.006559, -0.007072, 0.111111, 0.393333
};


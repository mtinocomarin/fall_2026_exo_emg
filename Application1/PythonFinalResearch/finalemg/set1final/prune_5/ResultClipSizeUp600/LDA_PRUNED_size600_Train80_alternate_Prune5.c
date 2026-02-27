// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.520383, 0.520382,
    0.033064, -0.033093,
    0.000000, 0.000000,
    -0.405737, -0.405737,
    1.710984, 1.710984,
    2.179852, 2.179852,
    2.104698, 2.104698,
    3.340077, 3.340077,
    -1.095766, -1.095766,
    -1.002991, -1.002991,
    -0.936715, -0.936715,
    -0.898591, -0.898591,
};

float Cg_init[2] = {
    2.142643, -2.380839
};

float xstd_init[12] = {
    0.000222, 0.000015, 1.000000, 0.015021, 0.001843, 0.000711, 0.072311, 0.127888, 0.001710, 0.000477, 0.066182, 0.167708
};

float xmean_init[12] = {
    0.002675, -0.007912, 0.000000, 0.006667, 0.008455, -0.006558, 0.144242, 0.461212, 0.006351, -0.007105, 0.092121, 0.356970
};


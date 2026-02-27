// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.029536, 0.029539,
    0.028487, -0.028603,
    0.000000, 0.000000,
    -0.381417, -0.381417,
    -0.337389, -0.337389,
    0.148186, 0.148186,
    0.547414, 0.547414,
    0.701447, 0.701447,
    -1.408213, -1.408213,
    -1.299989, -1.299989,
    -0.717790, -0.717790,
    -1.524979, -1.524979,
};

float Cg_init[2] = {
    1.724310, -1.725501
};

float xstd_init[12] = {
    0.000235, 0.000015, 1.000000, 0.015162, 0.001687, 0.000599, 0.067569, 0.141605, 0.001732, 0.000487, 0.079398, 0.161727
};

float xmean_init[12] = {
    0.002734, -0.007909, 0.000000, 0.006842, 0.008284, -0.006667, 0.131228, 0.444737, 0.006417, -0.007077, 0.107719, 0.372105
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.83%
// test_accuracy: 73.66%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:47:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.621449, 0.621399,
    -0.294790, 0.294825,
    0.461718, -0.461748,
    0.581462, -0.581433,
    0.685135, -0.685061,
    -0.714163, 0.714113,
    -0.031310, 0.031313,
    -0.069231, 0.069203,
    -0.465004, 0.464835,
    0.478734, -0.478372,
    -0.323834, 0.323731,
    0.009270, -0.009454,
};

float Cg_init[2] = {
    -0.269230, -0.269210
};

float xstd_init[12] = {
    0.003760, 0.001438, 0.106998, 0.172846, 0.001403, 0.000408, 0.024495, 0.073439, 0.001587, 0.000086, 0.014831, 0.067041
};

float xmean_init[12] = {
    0.009779, -0.006227, 0.179661, 0.588980, 0.003114, -0.007754, 0.006122, 0.048163, 0.003223, -0.007811, 0.003537, 0.065051
};


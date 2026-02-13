// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.33%
// test_accuracy: 72.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 16:05:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.751747, 0.751768,
    -0.159956, 0.159929,
    0.378121, -0.378148,
    0.770122, -0.770101,
    0.751899, -0.751869,
    -0.826816, 0.826798,
    -0.007871, 0.007876,
    -0.093854, 0.093844,
    -0.430178, 0.430104,
    0.319059, -0.318893,
    -0.367340, 0.367296,
    0.198881, -0.198970,
};

float Cg_init[2] = {
    -0.332571, -0.332567
};

float xstd_init[12] = {
    0.003668, 0.001352, 0.102015, 0.168108, 0.001581, 0.000472, 0.027666, 0.077618, 0.001668, 0.000090, 0.016548, 0.067504
};

float xmean_init[12] = {
    0.009809, -0.006286, 0.169956, 0.580200, 0.003219, -0.007723, 0.007244, 0.050400, 0.003245, -0.007807, 0.004533, 0.068334
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.22%
// test_accuracy: 73.12%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:50:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.760579, 0.760602,
    -0.246646, 0.246641,
    0.521815, -0.521851,
    0.884053, -0.884035,
    1.056880, -1.056915,
    -0.865851, 0.865910,
    -0.243567, 0.243551,
    -0.181112, 0.181104,
    -0.609033, 0.609049,
    0.292975, -0.292985,
    -0.398659, 0.398668,
    0.282414, -0.282421,
};

float Cg_init[2] = {
    -0.438885, -0.438896
};

float xstd_init[12] = {
    0.003539, 0.001205, 0.103023, 0.175739, 0.001567, 0.000455, 0.024446, 0.075601, 0.001882, 0.000098, 0.018205, 0.067787
};

float xmean_init[12] = {
    0.009743, -0.006304, 0.172870, 0.581913, 0.003227, -0.007732, 0.006609, 0.050609, 0.003294, -0.007803, 0.004986, 0.070348
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.22%
// test_accuracy: 77.08%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_36.txt', 'act1\\trial_39.txt']}
// generated: 2025-12-12 16:09:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.019328, 1.019318,
    -0.407699, 0.407687,
    0.588429, -0.588444,
    1.096812, -1.096787,
    1.298741, -1.298785,
    -1.840822, 1.840893,
    0.320885, -0.320891,
    -0.124338, 0.124329,
    0.897470, -0.897537,
    -0.264408, 0.264582,
    -0.630381, 0.630331,
    0.222608, -0.222672,
};

float Cg_init[2] = {
    -0.788905, -0.788920
};

float xstd_init[12] = {
    0.004105, 0.001539, 0.102780, 0.173441, 0.001812, 0.000568, 0.034373, 0.093360, 0.000549, 0.000091, 0.021200, 0.063649
};

float xmean_init[12] = {
    0.010076, -0.006176, 0.169469, 0.577971, 0.003381, -0.007670, 0.009372, 0.057681, 0.003131, -0.007808, 0.005604, 0.066232
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.86%
// test_accuracy: 77.08%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 12:45:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.343385, 1.343436,
    0.153826, -0.153840,
    0.226761, -0.226789,
    1.933618, -1.933607,
    -0.465841, 0.465598,
    0.040795, -0.040560,
    0.141810, -0.141774,
    -0.418269, 0.418231,
    -0.025725, 0.025678,
    -0.232164, 0.232276,
    -0.491727, 0.491697,
    0.198361, -0.198400,
};

float Cg_init[2] = {
    -0.792742, -0.792746
};

float xstd_init[12] = {
    0.004495, 0.001881, 0.151517, 0.204412, 0.001474, 0.000259, 0.038625, 0.098308, 0.000681, 0.000174, 0.031713, 0.108988
};

float xmean_init[12] = {
    0.011085, -0.005503, 0.255556, 0.699365, 0.003592, -0.007723, 0.014392, 0.089048, 0.003567, -0.007722, 0.013439, 0.125397
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.40%
// test_accuracy: 75.78%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_1.txt', 'act2\\trial_16.txt']}
// generated: 2026-02-13 14:50:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.052498, 0.052349,
    -0.270316, 0.270663,
    0.043201, -0.043270,
    -0.082451, 0.082312,
    2.325072, -2.325147,
    -2.205369, 2.205402,
    -0.197067, 0.197078,
    0.341971, -0.341943,
    -0.905630, 0.905657,
    -0.835862, 0.835804,
    0.264297, -0.264263,
    2.192424, -2.192448,
};

float Cg_init[2] = {
    -0.869264, -0.869284
};

float xstd_init[12] = {
    0.000919, 0.000091, 0.008787, 0.066511, 0.000863, 0.000152, 0.015238, 0.058654, 0.003567, 0.001056, 0.118597, 0.214598
};

float xmean_init[12] = {
    0.005618, -0.007756, 0.002130, 0.089861, 0.002457, -0.007841, 0.005278, 0.052222, 0.008999, -0.006609, 0.127593, 0.464306
};


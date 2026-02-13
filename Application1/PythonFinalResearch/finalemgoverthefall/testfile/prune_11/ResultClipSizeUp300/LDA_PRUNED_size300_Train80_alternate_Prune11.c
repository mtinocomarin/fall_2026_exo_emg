// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.76%
// test_accuracy: 77.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2026-02-13 14:48:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.239956, -0.239838,
    -0.132384, 0.132081,
    -0.088853, 0.088897,
    -0.244126, 0.244301,
    1.924543, -1.924468,
    -1.714319, 1.714225,
    -0.380073, 0.380079,
    0.339716, -0.339698,
    -0.847274, 0.847259,
    -0.584407, 0.584468,
    0.217842, -0.217875,
    2.151775, -2.151778,
};

float Cg_init[2] = {
    -0.862834, -0.862824
};

float xstd_init[12] = {
    0.000926, 0.000065, 0.007675, 0.071630, 0.000749, 0.000129, 0.017009, 0.060557, 0.003251, 0.000979, 0.117414, 0.216970
};

float xmean_init[12] = {
    0.005644, -0.007759, 0.001524, 0.094286, 0.002423, -0.007843, 0.006095, 0.054857, 0.008890, -0.006650, 0.128762, 0.466286
};


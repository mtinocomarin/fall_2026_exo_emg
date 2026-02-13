// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.49%
// test_accuracy: 55.26%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 13:46:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.365222, 0.365015,
    0.229678, -0.229190,
    -0.027856, 0.027806,
    -0.054994, 0.054728,
    -0.316359, 0.316373,
    -0.225397, 0.225412,
    -0.187628, 0.187623,
    0.372250, -0.372263,
    -0.522219, 0.522266,
    0.289095, -0.289216,
    0.044550, -0.044493,
    0.106389, -0.106366,
};

float Cg_init[2] = {
    -0.171608, -0.171582
};

float xstd_init[12] = {
    0.001070, 0.000083, 0.013110, 0.080292, 0.003191, 0.000876, 0.093360, 0.186367, 0.000876, 0.000112, 0.019880, 0.076982
};

float xmean_init[12] = {
    0.006565, -0.007683, 0.005231, 0.149235, 0.008451, -0.006876, 0.102010, 0.428852, 0.004371, -0.007713, 0.010909, 0.127608
};


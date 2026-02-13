// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.57%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:45:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.543230, 0.543309,
    0.404951, -0.405095,
    -0.026302, 0.026312,
    -0.235866, 0.235931,
    -0.444556, 0.444561,
    -0.273947, 0.273968,
    0.102195, -0.102232,
    0.337132, -0.337092,
    -0.498387, 0.498529,
    0.302141, -0.302388,
    -0.030722, 0.030777,
    0.151086, -0.151027,
};

float Cg_init[2] = {
    -0.187212, -0.187250
};

float xstd_init[12] = {
    0.001037, 0.000082, 0.012518, 0.081303, 0.003117, 0.000834, 0.090306, 0.184051, 0.000858, 0.000114, 0.019929, 0.073992
};

float xmean_init[12] = {
    0.006493, -0.007686, 0.004724, 0.145486, 0.008485, -0.006883, 0.100648, 0.432457, 0.004399, -0.007710, 0.010743, 0.131029
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.79%
// test_accuracy: 71.88%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 12:41:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.796485, 0.796512,
    0.099843, -0.099887,
    0.171544, -0.171561,
    0.724706, -0.724700,
    -0.385348, 0.385742,
    0.109672, -0.110107,
    -0.036043, 0.036040,
    -0.007798, 0.007842,
    0.207678, -0.207538,
    -0.012134, 0.011826,
    -0.481682, 0.481778,
    -0.005391, 0.005460,
};

float Cg_init[2] = {
    -0.252789, -0.252793
};

float xstd_init[12] = {
    0.004785, 0.002220, 0.151072, 0.205398, 0.001180, 0.000207, 0.030374, 0.088437, 0.000678, 0.000167, 0.030556, 0.104962
};

float xmean_init[12] = {
    0.010615, -0.005572, 0.244524, 0.685214, 0.003437, -0.007753, 0.010000, 0.081214, 0.003528, -0.007732, 0.013048, 0.117643
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.13%
// test_accuracy: 78.41%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:09:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.845302, 0.845292,
    -0.101587, 0.101604,
    0.443127, -0.443146,
    0.952804, -0.952797,
    1.189864, -1.189811,
    -1.284516, 1.284451,
    -0.165431, 0.165438,
    -0.165101, 0.165102,
    1.214489, -1.214483,
    -0.295941, 0.295963,
    -0.466234, 0.466227,
    -0.067182, 0.067157,
};

float Cg_init[2] = {
    -0.750276, -0.750268
};

float xstd_init[12] = {
    0.003406, 0.001179, 0.103246, 0.170288, 0.001493, 0.000463, 0.022612, 0.076010, 0.000532, 0.000083, 0.017355, 0.063305
};

float xmean_init[12] = {
    0.009766, -0.006310, 0.168538, 0.587115, 0.003222, -0.007717, 0.006482, 0.052253, 0.003104, -0.007811, 0.004901, 0.066561
};


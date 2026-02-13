// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.86%
// test_accuracy: 81.25%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 15:51:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.947988, 0.947996,
    -0.802490, 0.802471,
    1.765184, -1.765174,
    0.519258, -0.519258,
    2.560987, -2.561030,
    -2.382605, 2.382691,
    -0.157392, 0.157353,
    -0.085624, 0.085623,
    1.634614, -1.634582,
    -1.263267, 1.263221,
    -0.521391, 0.521405,
    0.862279, -0.862265,
};

float Cg_init[2] = {
    -1.286578, -1.286568
};

float xstd_init[12] = {
    0.003429, 0.001193, 0.097547, 0.166266, 0.001649, 0.000533, 0.029184, 0.083083, 0.000556, 0.000108, 0.019674, 0.066370
};

float xmean_init[12] = {
    0.009798, -0.006231, 0.165503, 0.571428, 0.003241, -0.007709, 0.007619, 0.051111, 0.003201, -0.007794, 0.005291, 0.073968
};


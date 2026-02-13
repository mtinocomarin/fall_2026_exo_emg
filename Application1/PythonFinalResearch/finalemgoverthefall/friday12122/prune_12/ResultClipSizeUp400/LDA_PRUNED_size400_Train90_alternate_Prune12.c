// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.18%
// test_accuracy: 82.14%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 16:08:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.021628, 1.021635,
    -0.350226, 0.350218,
    0.752841, -0.752859,
    0.928853, -0.928834,
    1.519202, -1.519076,
    -2.053631, 2.053457,
    0.186142, -0.186115,
    -0.108163, 0.108183,
    0.984299, -0.984302,
    -0.100555, 0.100540,
    -0.610943, 0.610949,
    0.120084, -0.120079,
};

float Cg_init[2] = {
    -0.807732, -0.807716
};

float xstd_init[12] = {
    0.003909, 0.001456, 0.101237, 0.169475, 0.001827, 0.000575, 0.033581, 0.092410, 0.000548, 0.000093, 0.019624, 0.065265
};

float xmean_init[12] = {
    0.009991, -0.006192, 0.167937, 0.587023, 0.003421, -0.007658, 0.010159, 0.059881, 0.003154, -0.007806, 0.005556, 0.068214
};


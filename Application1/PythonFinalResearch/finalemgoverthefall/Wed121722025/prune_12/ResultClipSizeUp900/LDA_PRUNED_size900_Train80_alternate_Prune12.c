// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.79%
// test_accuracy: 52.57%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-17 13:47:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.464251, 0.464205,
    0.275439, -0.275357,
    -0.035924, 0.035922,
    -0.112921, 0.112871,
    -0.382358, 0.382459,
    -0.239973, 0.239876,
    -0.079213, 0.079213,
    0.266510, -0.266523,
    -0.592310, 0.592314,
    0.376945, -0.376932,
    0.049743, -0.049732,
    0.148341, -0.148362,
};

float Cg_init[2] = {
    -0.204665, -0.204658
};

float xstd_init[12] = {
    0.001087, 0.000082, 0.012651, 0.081239, 0.003197, 0.000879, 0.091664, 0.183625, 0.000871, 0.000116, 0.019704, 0.077408
};

float xmean_init[12] = {
    0.006561, -0.007684, 0.004706, 0.147706, 0.008405, -0.006889, 0.099726, 0.427647, 0.004417, -0.007709, 0.010980, 0.129471
};


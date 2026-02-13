// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 87.18%
// test_accuracy: 79.81%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:08:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.724937, 0.724863,
    -0.202396, 0.202445,
    0.546145, -0.546157,
    0.704858, -0.704827,
    1.045492, -1.045482,
    -1.076821, 1.076795,
    -0.223472, 0.223509,
    -0.035807, 0.035797,
    0.824364, -0.824623,
    -0.179669, 0.180335,
    -0.364582, 0.364349,
    0.083327, -0.083563,
};

float Cg_init[2] = {
    -0.578423, -0.578448
};

float xstd_init[12] = {
    0.003189, 0.001121, 0.103430, 0.168213, 0.001306, 0.000406, 0.020687, 0.070669, 0.000518, 0.000078, 0.015940, 0.062146
};

float xmean_init[12] = {
    0.009686, -0.006298, 0.175428, 0.592243, 0.003111, -0.007747, 0.005556, 0.048974, 0.003100, -0.007815, 0.004188, 0.062372
};


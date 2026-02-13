// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_13\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.62%
// test_accuracy: 73.44%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_11.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 15:52:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.708335, 0.708397,
    -0.295715, 0.295682,
    0.561426, -0.561461,
    0.910660, -0.910656,
    1.079862, -1.079870,
    -0.868306, 0.868324,
    -0.241345, 0.241337,
    -0.240635, 0.240638,
    -0.948902, 0.948993,
    0.748192, -0.748369,
    -0.398995, 0.399044,
    0.085264, -0.085200,
};

float Cg_init[2] = {
    -0.475016, -0.475041
};

float xstd_init[12] = {
    0.003477, 0.001175, 0.104587, 0.177770, 0.001615, 0.000466, 0.025046, 0.079310, 0.002021, 0.000090, 0.014143, 0.066924
};

float xmean_init[12] = {
    0.009531, -0.006362, 0.170000, 0.576667, 0.003296, -0.007722, 0.007135, 0.054298, 0.003316, -0.007809, 0.004327, 0.066579
};


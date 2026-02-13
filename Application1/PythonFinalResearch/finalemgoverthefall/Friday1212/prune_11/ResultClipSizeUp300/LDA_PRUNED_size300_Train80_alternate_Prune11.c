// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.43%
// test_accuracy: 75.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 15:51:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.397451, 1.397455,
    -0.188795, 0.188798,
    1.320878, -1.320873,
    1.009089, -1.009095,
    1.781737, -1.781686,
    -2.473994, 2.473912,
    0.325933, -0.325916,
    -0.035583, 0.035599,
    -0.525990, 0.525992,
    0.712727, -0.712778,
    -0.416291, 0.416306,
    0.271258, -0.271229,
};

float Cg_init[2] = {
    -0.827774, -0.827771
};

float xstd_init[12] = {
    0.003712, 0.001350, 0.100202, 0.174161, 0.001870, 0.000583, 0.035505, 0.096417, 0.001029, 0.000089, 0.015919, 0.061052
};

float xmean_init[12] = {
    0.009848, -0.006221, 0.171048, 0.570286, 0.003428, -0.007671, 0.009651, 0.058857, 0.003272, -0.007803, 0.004698, 0.067619
};


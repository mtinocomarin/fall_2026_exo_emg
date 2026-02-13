// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.93%
// test_accuracy: 73.30%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_23.txt']}
// generated: 2025-12-12 13:17:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.906116, 0.906078,
    0.387686, -0.387673,
    0.851685, -0.851663,
    0.528158, -0.528146,
    -0.611066, 0.611196,
    -0.010740, 0.010600,
    0.048396, -0.048395,
    0.477094, -0.477076,
    0.206373, -0.206273,
    -0.435841, 0.435689,
    -0.376224, 0.376261,
    0.441135, -0.441126,
};

float Cg_init[2] = {
    -0.523527, -0.523506
};

float xstd_init[12] = {
    0.004183, 0.001753, 0.341991, 0.123238, 0.001081, 0.000187, 0.050880, 0.136741, 0.000710, 0.000188, 0.052853, 0.142677
};

float xmean_init[12] = {
    0.010191, -0.005794, 0.436522, 1.033301, 0.003429, -0.007754, 0.013876, 0.612344, 0.003535, -0.007727, 0.017225, 0.695598
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.65%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:48:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.855844, 0.855854,
    -0.199611, 0.199622,
    0.535435, -0.535477,
    0.851595, -0.851575,
    0.956890, -0.956999,
    -1.057186, 1.057348,
    -0.006085, 0.006052,
    -0.028326, 0.028305,
    -0.579423, 0.579437,
    0.604392, -0.604348,
    -0.583876, 0.583864,
    0.243372, -0.243402,
};

float Cg_init[2] = {
    -0.432144, -0.432159
};

float xstd_init[12] = {
    0.003657, 0.001360, 0.103495, 0.176061, 0.001583, 0.000481, 0.028514, 0.080644, 0.001502, 0.000089, 0.018551, 0.065318
};

float xmean_init[12] = {
    0.009763, -0.006256, 0.174680, 0.580192, 0.003165, -0.007741, 0.006731, 0.047115, 0.003258, -0.007807, 0.004744, 0.067692
};


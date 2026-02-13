// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.86%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:00:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.088875, 0.088979,
    -0.129507, 0.129269,
    -0.007082, 0.007123,
    -0.002606, 0.002701,
    1.609443, -1.609437,
    -1.369190, 1.369209,
    -0.115752, 0.115749,
    0.085218, -0.085239,
    -0.474206, 0.474206,
    -0.492891, 0.492923,
    0.182730, -0.182762,
    1.245383, -1.245374,
};

float Cg_init[2] = {
    -0.451393, -0.451397
};

float xstd_init[12] = {
    0.000863, 0.000076, 0.008265, 0.062790, 0.000736, 0.000126, 0.014390, 0.052973, 0.003433, 0.001006, 0.117413, 0.205554
};

float xmean_init[12] = {
    0.005490, -0.007760, 0.002048, 0.090357, 0.002383, -0.007850, 0.004810, 0.047857, 0.009041, -0.006613, 0.135000, 0.471214
};


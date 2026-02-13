// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.46%
// test_accuracy: 73.56%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:52:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.950579, 0.950563,
    -0.140229, 0.140251,
    0.677763, -0.677802,
    0.746764, -0.746728,
    1.184009, -1.184089,
    -1.026073, 1.026189,
    -0.408555, 0.408533,
    -0.030624, 0.030610,
    0.666210, -0.666246,
    0.071755, -0.071612,
    -0.527085, 0.527031,
    0.036507, -0.036572,
};

float Cg_init[2] = {
    -0.628819, -0.628829
};

float xstd_init[12] = {
    0.003501, 0.001232, 0.105914, 0.171534, 0.001353, 0.000416, 0.021714, 0.073869, 0.000524, 0.000080, 0.017140, 0.062097
};

float xmean_init[12] = {
    0.009716, -0.006253, 0.178667, 0.593538, 0.003109, -0.007749, 0.005949, 0.049769, 0.003112, -0.007813, 0.004615, 0.064000
};


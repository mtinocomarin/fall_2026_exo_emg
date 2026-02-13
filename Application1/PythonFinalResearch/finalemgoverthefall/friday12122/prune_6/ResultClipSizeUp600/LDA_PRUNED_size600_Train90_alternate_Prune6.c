// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.61%
// test_accuracy: 77.27%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 16:05:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.633342, 0.633354,
    -0.199435, 0.199432,
    0.292793, -0.292825,
    0.748821, -0.748811,
    0.697314, -0.697407,
    -0.811759, 0.811919,
    -0.013541, 0.013493,
    -0.020748, 0.020721,
    -0.412708, 0.412702,
    0.352199, -0.352072,
    -0.312228, 0.312190,
    0.143005, -0.143079,
};

float Cg_init[2] = {
    -0.296683, -0.296693
};

float xstd_init[12] = {
    0.003710, 0.001322, 0.105375, 0.166211, 0.001435, 0.000412, 0.020050, 0.069892, 0.001643, 0.000090, 0.015969, 0.066854
};

float xmean_init[12] = {
    0.009846, -0.006258, 0.170263, 0.584546, 0.003145, -0.007746, 0.005131, 0.047636, 0.003247, -0.007807, 0.004485, 0.068546
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.23%
// test_accuracy: 54.37%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:44:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.469173, 0.469201,
    0.289565, -0.289603,
    0.034555, -0.034553,
    -0.223152, 0.223167,
    -0.648072, 0.648126,
    -0.175387, 0.175346,
    0.291908, -0.291926,
    0.316485, -0.316474,
    -0.498227, 0.498300,
    0.199354, -0.199459,
    -0.011275, 0.011301,
    0.169477, -0.169461,
};

float Cg_init[2] = {
    -0.197418, -0.197437
};

float xstd_init[12] = {
    0.001017, 0.000079, 0.012039, 0.079687, 0.003031, 0.000818, 0.088654, 0.179397, 0.000828, 0.000109, 0.018759, 0.069922
};

float xmean_init[12] = {
    0.006463, -0.007690, 0.004410, 0.142616, 0.008608, -0.006859, 0.102667, 0.436692, 0.004378, -0.007714, 0.009795, 0.129462
};


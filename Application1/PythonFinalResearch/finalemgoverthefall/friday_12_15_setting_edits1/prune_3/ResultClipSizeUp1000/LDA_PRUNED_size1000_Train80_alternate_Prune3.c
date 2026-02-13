// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 72.78%
// test_accuracy: 70.07%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:12:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.584650, 0.584735,
    -0.019128, 0.019063,
    0.530095, -0.530128,
    0.176656, -0.176657,
    -0.330776, 0.331206,
    0.158195, -0.158710,
    -0.022338, 0.022379,
    0.184915, -0.184875,
    0.269570, -0.269578,
    -0.283074, 0.283081,
    -0.222347, 0.222339,
    0.273972, -0.273975,
};

float Cg_init[2] = {
    -0.166143, -0.166155
};

float xstd_init[12] = {
    0.004174, 0.001932, 0.342165, 0.122699, 0.000887, 0.000157, 0.039813, 0.130545, 0.000612, 0.000146, 0.043081, 0.139068
};

float xmean_init[12] = {
    0.010075, -0.005793, 0.420872, 1.039565, 0.003277, -0.007782, 0.007864, 0.617459, 0.003463, -0.007749, 0.011918, 0.685081
};


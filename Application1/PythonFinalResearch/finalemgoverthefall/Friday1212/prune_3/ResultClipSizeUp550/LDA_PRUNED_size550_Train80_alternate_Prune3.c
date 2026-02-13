// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.45%
// test_accuracy: 72.50%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:46:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.585635, 0.585645,
    -0.305371, 0.305390,
    0.362657, -0.362693,
    0.694283, -0.694273,
    0.684674, -0.684639,
    -0.742011, 0.741989,
    -0.007613, 0.007605,
    -0.072449, 0.072443,
    -0.421058, 0.421073,
    0.290753, -0.290816,
    -0.355212, 0.355236,
    0.203541, -0.203526,
};

float Cg_init[2] = {
    -0.286099, -0.286106
};

float xstd_init[12] = {
    0.003917, 0.001474, 0.108621, 0.174438, 0.001515, 0.000446, 0.026798, 0.075919, 0.001693, 0.000091, 0.016737, 0.066434
};

float xmean_init[12] = {
    0.009958, -0.006194, 0.180552, 0.587724, 0.003145, -0.007745, 0.006483, 0.047655, 0.003236, -0.007808, 0.004276, 0.066621
};


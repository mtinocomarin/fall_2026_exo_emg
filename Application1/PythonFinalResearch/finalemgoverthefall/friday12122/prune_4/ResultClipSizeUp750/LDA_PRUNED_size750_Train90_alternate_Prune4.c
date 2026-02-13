// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.01%
// test_accuracy: 74.11%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:04:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.513624, 0.513558,
    -0.350989, 0.351000,
    0.409200, -0.409220,
    0.605883, -0.605850,
    0.671753, -0.671664,
    -0.706427, 0.706367,
    -0.010440, 0.010446,
    -0.100867, 0.100830,
    -0.410482, 0.410126,
    0.399253, -0.398436,
    -0.301332, 0.301096,
    0.051155, -0.051549,
};

float Cg_init[2] = {
    -0.261367, -0.261320
};

float xstd_init[12] = {
    0.003693, 0.001405, 0.103859, 0.167283, 0.001398, 0.000409, 0.024025, 0.071967, 0.001499, 0.000083, 0.014254, 0.066652
};

float xmean_init[12] = {
    0.009770, -0.006257, 0.175090, 0.585759, 0.003109, -0.007751, 0.006012, 0.047545, 0.003198, -0.007812, 0.003482, 0.065179
};


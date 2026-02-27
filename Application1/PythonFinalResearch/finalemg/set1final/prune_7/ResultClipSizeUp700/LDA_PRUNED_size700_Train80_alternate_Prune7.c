// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:11:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.324336, 0.324338,
    -0.327748, 0.327671,
    0.000000, 0.000000,
    -0.402512, -0.402512,
    -1.179568, -1.179568,
    -0.475911, -0.475911,
    -1.291959, -1.291959,
    -1.691890, -1.691890,
    -2.005810, -2.005810,
    -1.486504, -1.486504,
    -1.313116, -1.313116,
    -1.792610, -1.792610,
};

float Cg_init[2] = {
    1.523962, -1.764244
};

float xstd_init[12] = {
    0.000207, 0.000013, 1.000000, 0.018094, 0.002139, 0.000772, 0.061427, 0.170147, 0.001710, 0.000511, 0.072224, 0.144784
};

float xmean_init[12] = {
    0.002757, -0.007912, 0.000000, 0.010769, 0.008278, -0.006598, 0.109744, 0.423077, 0.006454, -0.007043, 0.102564, 0.347692
};


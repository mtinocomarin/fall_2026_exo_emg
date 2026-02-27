// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 54.62%
// test_accuracy: 50.00%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_8.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:10:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.114497, 1.114501,
    0.316241, -0.316217,
    0.000000, 0.000000,
    -0.402512, -0.402512,
    -1.302891, -1.302891,
    -1.234660, -1.234660,
    -1.634288, -1.634288,
    -0.812107, -0.812107,
    1.341467, 1.341467,
    0.812660, 0.812660,
    1.230571, 1.230571,
    0.725315, 0.725315,
};

float Cg_init[2] = {
    -1.772869, 1.034757
};

float xstd_init[12] = {
    0.000345, 0.000018, 1.000000, 0.016112, 0.002071, 0.000673, 0.074408, 0.126242, 0.001956, 0.000612, 0.072365, 0.191139
};

float xmean_init[12] = {
    0.002542, -0.007912, 0.000000, 0.007077, 0.008360, -0.006631, 0.147487, 0.447077, 0.006459, -0.006997, 0.100923, 0.367385
};


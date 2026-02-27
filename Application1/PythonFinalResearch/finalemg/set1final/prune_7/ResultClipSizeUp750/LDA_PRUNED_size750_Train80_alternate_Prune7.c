// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 60.71%
// test_accuracy: 53.57%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:11:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.322458, 0.322455,
    -0.304883, 0.304969,
    0.000000, 0.000000,
    -0.429369, -0.429369,
    -0.715243, -0.715243,
    -0.554648, -0.554648,
    -0.262886, -0.262886,
    -0.517562, -0.517562,
    -1.165326, -1.165326,
    -1.038437, -1.038437,
    -0.084140, -0.084140,
    -0.965332, -0.965332,
};

float Cg_init[2] = {
    0.539162, -0.763041
};

float xstd_init[12] = {
    0.000201, 0.000014, 1.000000, 0.018402, 0.002000, 0.000713, 0.059565, 0.156381, 0.001704, 0.000552, 0.072025, 0.140836
};

float xmean_init[12] = {
    0.002759, -0.007912, 0.000000, 0.011429, 0.008229, -0.006649, 0.112381, 0.424286, 0.006450, -0.007019, 0.105714, 0.351429
};


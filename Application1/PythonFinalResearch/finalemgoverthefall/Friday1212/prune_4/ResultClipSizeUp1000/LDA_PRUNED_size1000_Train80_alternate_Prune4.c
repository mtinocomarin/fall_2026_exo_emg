// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.03%
// test_accuracy: 69.74%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:47:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.483879, 0.483930,
    -0.275404, 0.275415,
    0.454993, -0.455051,
    0.423597, -0.423579,
    0.671256, -0.671296,
    -0.703578, 0.703636,
    -0.019630, 0.019612,
    -0.056147, 0.056143,
    -0.321866, 0.322043,
    0.276306, -0.276731,
    -0.225789, 0.225935,
    0.103574, -0.103403,
};

float Cg_init[2] = {
    -0.213099, -0.213133
};

float xstd_init[12] = {
    0.003400, 0.001318, 0.102621, 0.167395, 0.001250, 0.000352, 0.020640, 0.068595, 0.001362, 0.000078, 0.013247, 0.062778
};

float xmean_init[12] = {
    0.009598, -0.006287, 0.177645, 0.586880, 0.003038, -0.007775, 0.004637, 0.046128, 0.003164, -0.007815, 0.003133, 0.063384
};


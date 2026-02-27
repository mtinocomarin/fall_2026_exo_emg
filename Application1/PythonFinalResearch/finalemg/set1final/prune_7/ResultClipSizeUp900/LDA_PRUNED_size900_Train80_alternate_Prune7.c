// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:11:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.245842, 0.245841,
    -0.222378, 0.222464,
    0.000000, 0.000000,
    -0.592887, -0.592887,
    -1.021190, -1.021190,
    -0.655854, -0.655854,
    0.411532, 0.411532,
    0.163412, 0.163412,
    0.835447, 0.835447,
    1.025750, 1.025750,
    1.133932, 1.133932,
    1.446890, 1.446890,
};

float Cg_init[2] = {
    -2.158839, 2.029403
};

float xstd_init[12] = {
    0.000190, 0.000012, 1.000000, 0.017222, 0.001976, 0.000712, 0.056231, 0.155007, 0.001720, 0.000517, 0.077970, 0.158496
};

float xmean_init[12] = {
    0.002749, -0.007911, 0.000000, 0.009412, 0.008147, -0.006672, 0.109020, 0.408235, 0.006355, -0.007058, 0.100392, 0.350588
};


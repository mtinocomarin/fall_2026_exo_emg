// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 50.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt']}
// generated: 2026-02-13 17:10:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.758460, 0.758462,
    -0.205785, 0.205822,
    0.000000, 0.000000,
    -0.429209, -0.429209,
    -0.416300, -0.416300,
    -0.921886, -0.921886,
    -0.960309, -0.960309,
    -1.419235, -1.419235,
    -1.937586, -1.937586,
    -1.442615, -1.442615,
    -1.303621, -1.303621,
    -1.736691, -1.736691,
};

float Cg_init[2] = {
    2.021288, -2.563450
};

float xstd_init[12] = {
    0.000249, 0.000016, 1.000000, 0.013369, 0.002331, 0.000719, 0.059499, 0.156912, 0.001834, 0.000525, 0.079031, 0.181335
};

float xmean_init[12] = {
    0.002800, -0.007909, 0.000000, 0.005000, 0.008065, -0.006714, 0.120556, 0.425000, 0.006372, -0.007058, 0.105000, 0.351667
};


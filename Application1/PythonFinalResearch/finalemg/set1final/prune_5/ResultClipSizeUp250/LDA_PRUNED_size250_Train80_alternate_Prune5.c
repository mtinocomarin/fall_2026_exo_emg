// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 56.25%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.138038, 1.138037,
    -0.230000, 0.229925,
    0.000000, 0.000000,
    -0.337426, -0.337426,
    0.166207, 0.166207,
    0.108092, 0.108092,
    0.859768, 0.859768,
    1.321592, 1.321592,
    -0.372445, -0.372445,
    -0.430832, -0.430832,
    -0.425080, -0.425080,
    -0.058951, -0.058951,
};

float Cg_init[2] = {
    -0.113411, -0.827002
};

float xstd_init[12] = {
    0.000267, 0.000013, 1.000000, 0.011293, 0.002408, 0.000711, 0.067635, 0.154610, 0.002116, 0.000498, 0.075621, 0.196992
};

float xmean_init[12] = {
    0.002769, -0.007913, 0.000000, 0.003333, 0.008058, -0.006700, 0.138889, 0.465000, 0.006003, -0.007197, 0.087778, 0.303333
};


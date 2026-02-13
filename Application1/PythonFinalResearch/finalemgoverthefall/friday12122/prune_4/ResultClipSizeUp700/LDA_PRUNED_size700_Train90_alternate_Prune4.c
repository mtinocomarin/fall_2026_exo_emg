// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 80.89%
// test_accuracy: 76.92%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 16:04:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.462376, 0.462331,
    -0.366752, 0.366768,
    0.249920, -0.249920,
    0.573102, -0.573086,
    0.672298, -0.672209,
    -0.833395, 0.833309,
    0.023032, -0.023021,
    -0.078346, 0.078333,
    0.693309, -0.693522,
    -0.122335, 0.122856,
    -0.304578, 0.304417,
    0.042053, -0.042257,
};

float Cg_init[2] = {
    -0.368422, -0.368437
};

float xstd_init[12] = {
    0.003789, 0.001451, 0.105408, 0.166439, 0.001333, 0.000410, 0.023411, 0.071866, 0.000509, 0.000075, 0.014504, 0.060920
};

float xmean_init[12] = {
    0.009785, -0.006240, 0.173302, 0.586827, 0.003070, -0.007751, 0.005737, 0.046587, 0.003083, -0.007814, 0.003718, 0.064039
};


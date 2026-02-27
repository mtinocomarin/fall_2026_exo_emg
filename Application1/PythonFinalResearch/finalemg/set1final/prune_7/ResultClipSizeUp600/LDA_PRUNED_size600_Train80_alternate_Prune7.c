// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.27%
// test_accuracy: 65.91%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt']}
// generated: 2026-02-13 17:11:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.389948, 1.389948,
    0.470488, -0.470395,
    0.000000, 0.000000,
    -0.405737, -0.405737,
    -0.246039, -0.246039,
    0.021279, 0.021279,
    1.086110, 1.086110,
    0.378598, 0.378598,
    -0.650984, -0.650984,
    -0.869151, -0.869151,
    -0.622093, -0.622093,
    -0.490457, -0.490457,
};

float Cg_init[2] = {
    0.374448, -1.286885
};

float xstd_init[12] = {
    0.000392, 0.000015, 1.000000, 0.019069, 0.002228, 0.000784, 0.061396, 0.132168, 0.001574, 0.000673, 0.057713, 0.141922
};

float xmean_init[12] = {
    0.002533, -0.007912, 0.000000, 0.012727, 0.008462, -0.006504, 0.144242, 0.487273, 0.006551, -0.006916, 0.087273, 0.349091
};


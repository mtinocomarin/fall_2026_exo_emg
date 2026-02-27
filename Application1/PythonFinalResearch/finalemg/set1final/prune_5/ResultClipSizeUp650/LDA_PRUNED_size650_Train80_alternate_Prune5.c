// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 65.28%
// test_accuracy: 66.67%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.434863, 0.434863,
    0.075709, -0.075752,
    0.000000, 0.000000,
    -0.429209, -0.429209,
    1.270763, 1.270763,
    1.119825, 1.119825,
    1.073290, 1.073290,
    1.878258, 1.878258,
    0.354322, 0.354322,
    -0.182208, -0.182208,
    -0.675527, -0.675527,
    0.952378, 0.952378,
};

float Cg_init[2] = {
    0.045676, -0.216641
};

float xstd_init[12] = {
    0.000230, 0.000016, 1.000000, 0.016359, 0.001696, 0.000650, 0.073235, 0.121213, 0.001671, 0.000488, 0.070431, 0.161843
};

float xmean_init[12] = {
    0.002680, -0.007911, 0.000000, 0.008333, 0.008466, -0.006579, 0.144444, 0.459444, 0.006350, -0.007088, 0.098518, 0.356111
};


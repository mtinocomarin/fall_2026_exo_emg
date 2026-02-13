// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.03%
// test_accuracy: 70.91%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_1.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 18:08:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.238281, 0.238239,
    0.486334, -0.486217,
    -0.189507, 0.189466,
    -0.047120, 0.047073,
    0.385280, -0.385292,
    -0.150697, 0.150704,
    -1.024385, 1.024382,
    0.119534, -0.119539,
    -0.162221, 0.162206,
    -0.436892, 0.436920,
    0.325944, -0.325968,
    0.892324, -0.892315,
};

float Cg_init[2] = {
    -0.395528, -0.395523
};

float xstd_init[12] = {
    0.001073, 0.000117, 0.024318, 0.091000, 0.003148, 0.000969, 0.065601, 0.158107, 0.005962, 0.002443, 0.153363, 0.239905
};

float xmean_init[12] = {
    0.005567, -0.007714, 0.008485, 0.131273, 0.004511, -0.007451, 0.028121, 0.138788, 0.012145, -0.005595, 0.182465, 0.565091
};


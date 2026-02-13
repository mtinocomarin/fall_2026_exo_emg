// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.78%
// test_accuracy: 85.94%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 12:40:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.450912, 1.450933,
    0.479817, -0.479824,
    0.321735, -0.321755,
    1.118652, -1.118639,
    0.142942, -0.142921,
    -0.267577, 0.267550,
    0.023082, -0.023086,
    -0.356361, 0.356365,
    -0.071248, 0.071223,
    0.146157, -0.146138,
    -0.418837, 0.418839,
    -0.169625, 0.169619,
};

float Cg_init[2] = {
    -0.482720, -0.482722
};

float xstd_init[12] = {
    0.004641, 0.002163, 0.144827, 0.191062, 0.001483, 0.000272, 0.036698, 0.098679, 0.000645, 0.000160, 0.030280, 0.104947
};

float xmean_init[12] = {
    0.011182, -0.005433, 0.252184, 0.705000, 0.003571, -0.007724, 0.012069, 0.084655, 0.003559, -0.007726, 0.012644, 0.125173
};


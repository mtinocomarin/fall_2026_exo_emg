// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.94%
// test_accuracy: 68.38%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 12:40:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.640991, 0.641030,
    0.118484, -0.118506,
    0.329647, -0.329679,
    0.476615, -0.476615,
    -0.372602, 0.372728,
    0.172612, -0.172757,
    -0.068132, 0.068148,
    0.045224, -0.045230,
    0.255915, -0.255840,
    -0.068357, 0.068278,
    -0.437804, 0.437828,
    0.010225, -0.010244,
};

float Cg_init[2] = {
    -0.179212, -0.179221
};

float xstd_init[12] = {
    0.004026, 0.001817, 0.148119, 0.203807, 0.000931, 0.000166, 0.023808, 0.075730, 0.000629, 0.000152, 0.028618, 0.102103
};

float xmean_init[12] = {
    0.010060, -0.005829, 0.238838, 0.679027, 0.003293, -0.007778, 0.007248, 0.069858, 0.003483, -0.007744, 0.012116, 0.111441
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.42%
// test_accuracy: 74.11%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2026-02-13 14:46:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.263267, 0.263513,
    -0.118125, 0.117690,
    -0.033525, 0.033578,
    0.187596, -0.187411,
    1.384025, -1.384279,
    -1.003463, 1.003896,
    -0.108925, 0.108837,
    0.111651, -0.111774,
    -0.467679, 0.467642,
    -0.584769, 0.584845,
    0.529816, -0.529855,
    0.952340, -0.952333,
};

float Cg_init[2] = {
    -0.443850, -0.443931
};

float xstd_init[12] = {
    0.000898, 0.000074, 0.008188, 0.063064, 0.000659, 0.000102, 0.013098, 0.048574, 0.003369, 0.001017, 0.117102, 0.208238
};

float xmean_init[12] = {
    0.005495, -0.007760, 0.002088, 0.089011, 0.002340, -0.007859, 0.004029, 0.043901, 0.008954, -0.006607, 0.132528, 0.468517
};


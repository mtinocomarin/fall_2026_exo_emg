// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.91%
// test_accuracy: 58.33%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt'], 'act1': ['act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_20.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt']}
// generated: 2025-12-17 14:40:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.619147, 1.619200,
    0.746883, -0.747020,
    -0.064805, 0.064828,
    -0.269950, 0.270016,
    0.840667, -0.840694,
    -1.448536, 1.448552,
    0.232690, -0.232698,
    -0.283002, 0.283009,
    -0.196988, 0.197035,
    0.159634, -0.159684,
    0.406298, -0.406278,
    0.182063, -0.182062,
};

float Cg_init[2] = {
    -0.587343, -0.587357
};

float xstd_init[12] = {
    0.000986, 0.000170, 0.025208, 0.117909, 0.003952, 0.001221, 0.093476, 0.149789, 0.001228, 0.000190, 0.031736, 0.117805
};

float xmean_init[12] = {
    0.005924, -0.007618, 0.016566, 0.185758, 0.010986, -0.006169, 0.169091, 0.580000, 0.005142, -0.007546, 0.030303, 0.254242
};


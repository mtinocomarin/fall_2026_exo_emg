// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.14%
// test_accuracy: 75.45%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_16.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:50:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.511868, 0.511914,
    -0.433446, 0.433444,
    0.493579, -0.493630,
    0.682307, -0.682291,
    0.945094, -0.945137,
    -0.732689, 0.732789,
    -0.251278, 0.251235,
    -0.084891, 0.084872,
    -0.605413, 0.605527,
    0.400374, -0.400600,
    -0.322170, 0.322244,
    0.113888, -0.113800,
};

float Cg_init[2] = {
    -0.338817, -0.338842
};

float xstd_init[12] = {
    0.003379, 0.001185, 0.103350, 0.172036, 0.001399, 0.000398, 0.021905, 0.070824, 0.001734, 0.000091, 0.015844, 0.070201
};

float xmean_init[12] = {
    0.009630, -0.006320, 0.174286, 0.584720, 0.003136, -0.007758, 0.005673, 0.048944, 0.003285, -0.007806, 0.003934, 0.069255
};


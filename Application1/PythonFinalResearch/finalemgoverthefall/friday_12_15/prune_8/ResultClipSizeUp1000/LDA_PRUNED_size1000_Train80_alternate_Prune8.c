// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.30%
// test_accuracy: 65.13%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 12:43:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.564377, 0.564423,
    0.248905, -0.248957,
    0.553785, -0.553826,
    0.453715, -0.453708,
    -0.374359, 0.374176,
    0.163280, -0.163021,
    -0.106063, 0.106052,
    -0.003825, 0.003765,
    0.280679, -0.280458,
    -0.121608, 0.121178,
    -0.468552, 0.468663,
    0.012780, -0.012645,
};

float Cg_init[2] = {
    -0.283256, -0.283252
};

float xstd_init[12] = {
    0.003684, 0.001586, 0.147856, 0.204170, 0.000960, 0.000171, 0.024512, 0.076979, 0.000636, 0.000158, 0.029105, 0.101009
};

float xmean_init[12] = {
    0.009869, -0.005928, 0.238948, 0.677237, 0.003310, -0.007775, 0.007456, 0.070921, 0.003478, -0.007743, 0.011871, 0.110659
};


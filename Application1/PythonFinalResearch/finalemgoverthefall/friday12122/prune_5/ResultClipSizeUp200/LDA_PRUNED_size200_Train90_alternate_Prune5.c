// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.56%
// test_accuracy: 87.50%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 16:04:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.763697, 0.763709,
    -0.172911, 0.172917,
    0.597951, -0.597943,
    0.445040, -0.445059,
    1.223916, -1.223927,
    -1.642509, 1.642511,
    0.240437, -0.240441,
    0.097086, -0.097077,
    0.830658, -0.830586,
    -0.497022, 0.496857,
    -0.426552, 0.426593,
    0.610664, -0.610600,
};

float Cg_init[2] = {
    -0.565498, -0.565484
};

float xstd_init[12] = {
    0.003288, 0.001144, 0.095071, 0.155109, 0.001548, 0.000495, 0.025532, 0.076032, 0.000548, 0.000097, 0.017073, 0.065825
};

float xmean_init[12] = {
    0.009619, -0.006319, 0.162437, 0.567312, 0.003176, -0.007715, 0.006308, 0.047527, 0.003140, -0.007805, 0.004444, 0.066882
};


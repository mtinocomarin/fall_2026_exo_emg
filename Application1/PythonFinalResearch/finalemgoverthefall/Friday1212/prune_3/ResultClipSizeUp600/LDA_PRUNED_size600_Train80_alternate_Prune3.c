// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.06%
// test_accuracy: 71.02%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 15:46:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.638176, 0.638180,
    -0.208478, 0.208529,
    0.303911, -0.303953,
    0.676170, -0.676164,
    0.652569, -0.652597,
    -0.814627, 0.814657,
    0.028774, -0.028773,
    -0.004329, 0.004325,
    -0.432257, 0.432411,
    0.369776, -0.370138,
    -0.346319, 0.346455,
    0.160515, -0.160384,
};

float Cg_init[2] = {
    -0.269829, -0.269858
};

float xstd_init[12] = {
    0.003869, 0.001461, 0.110303, 0.170279, 0.001467, 0.000424, 0.024737, 0.074957, 0.001665, 0.000090, 0.015943, 0.064748
};

float xmean_init[12] = {
    0.009873, -0.006202, 0.176803, 0.589216, 0.003124, -0.007750, 0.005768, 0.048088, 0.003239, -0.007808, 0.004263, 0.066019
};


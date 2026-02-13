// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 90.70%
// test_accuracy: 77.27%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_32.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:09:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.872175, 0.872170,
    -0.105575, 0.105591,
    0.529607, -0.529624,
    0.956901, -0.956894,
    1.183046, -1.182939,
    -1.346912, 1.346765,
    -0.171654, 0.171689,
    -0.121128, 0.121129,
    1.313252, -1.313228,
    -0.388328, 0.388297,
    -0.507555, 0.507564,
    0.039710, -0.039717,
};

float Cg_init[2] = {
    -0.815594, -0.815575
};

float xstd_init[12] = {
    0.003306, 0.001123, 0.104594, 0.172869, 0.001457, 0.000460, 0.022164, 0.076163, 0.000535, 0.000084, 0.017688, 0.063739
};

float xmean_init[12] = {
    0.009749, -0.006316, 0.170248, 0.588099, 0.003231, -0.007717, 0.006336, 0.053223, 0.003105, -0.007812, 0.005069, 0.066446
};


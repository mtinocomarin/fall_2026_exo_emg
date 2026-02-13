// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.57%
// test_accuracy: 54.17%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-17 13:48:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.893397, 0.893426,
    0.263936, -0.263989,
    0.204304, -0.204300,
    -0.281181, 0.281204,
    -0.476001, 0.475951,
    -0.049063, 0.049123,
    0.036126, -0.036129,
    -0.043297, 0.043307,
    -0.762071, 0.762135,
    0.341251, -0.341361,
    -0.086554, 0.086578,
    0.309872, -0.309848,
};

float Cg_init[2] = {
    -0.434170, -0.434187
};

float xstd_init[12] = {
    0.001054, 0.000077, 0.010757, 0.080776, 0.003121, 0.000860, 0.088916, 0.174847, 0.000845, 0.000110, 0.015809, 0.071922
};

float xmean_init[12] = {
    0.006507, -0.007684, 0.003457, 0.149383, 0.008559, -0.006869, 0.100576, 0.435926, 0.004370, -0.007717, 0.008313, 0.132716
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.71%
// test_accuracy: 73.68%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_22.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_19.txt', 'act2\\trial_10.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:52:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.771158, 0.771093,
    -0.239271, 0.239310,
    0.644417, -0.644409,
    0.528039, -0.528032,
    0.977344, -0.977193,
    -0.864376, 0.864082,
    -0.165555, 0.165689,
    -0.093035, 0.093052,
    0.566613, -0.566752,
    0.080605, -0.080238,
    -0.349255, 0.349126,
    0.032218, -0.032368,
};

float Cg_init[2] = {
    -0.480202, -0.480185
};

float xstd_init[12] = {
    0.003196, 0.001257, 0.102423, 0.167285, 0.001085, 0.000314, 0.015966, 0.062394, 0.000525, 0.000074, 0.014736, 0.060241
};

float xmean_init[12] = {
    0.009507, -0.006312, 0.177544, 0.588471, 0.002938, -0.007795, 0.003442, 0.042757, 0.003079, -0.007816, 0.003609, 0.061905
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.18%
// test_accuracy: 76.47%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:05:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.504221, 0.504176,
    -0.279673, 0.279695,
    0.335197, -0.335216,
    0.534921, -0.534895,
    0.733169, -0.733211,
    -0.879083, 0.879166,
    0.018658, -0.018666,
    -0.070299, 0.070268,
    0.567912, -0.568059,
    0.045600, -0.045178,
    -0.319800, 0.319665,
    0.009595, -0.009782,
};

float Cg_init[2] = {
    -0.356340, -0.356352
};

float xstd_init[12] = {
    0.003283, 0.001298, 0.100591, 0.162527, 0.001257, 0.000383, 0.022051, 0.069808, 0.000496, 0.000069, 0.013331, 0.060065
};

float xmean_init[12] = {
    0.009483, -0.006342, 0.169465, 0.579961, 0.003051, -0.007759, 0.005490, 0.047020, 0.003075, -0.007816, 0.003163, 0.063373
};


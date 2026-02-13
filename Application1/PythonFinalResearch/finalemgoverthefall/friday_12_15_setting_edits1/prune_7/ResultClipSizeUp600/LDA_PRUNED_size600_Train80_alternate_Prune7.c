// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.09%
// test_accuracy: 73.86%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:14:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.486211, 0.486198,
    0.070378, -0.070408,
    0.542500, -0.542472,
    0.438332, -0.438323,
    -0.697311, 0.697600,
    0.199473, -0.199765,
    0.066132, -0.066136,
    0.313438, -0.313420,
    0.120999, -0.120848,
    -0.200831, 0.200599,
    -0.429962, 0.430028,
    0.282847, -0.282842,
};

float Cg_init[2] = {
    -0.334241, -0.334234
};

float xstd_init[12] = {
    0.004133, 0.001750, 0.329015, 0.121899, 0.001184, 0.000211, 0.053498, 0.132654, 0.000671, 0.000170, 0.049558, 0.142560
};

float xmean_init[12] = {
    0.010205, -0.005806, 0.429575, 1.030909, 0.003453, -0.007749, 0.014061, 0.612872, 0.003532, -0.007730, 0.016727, 0.699637
};


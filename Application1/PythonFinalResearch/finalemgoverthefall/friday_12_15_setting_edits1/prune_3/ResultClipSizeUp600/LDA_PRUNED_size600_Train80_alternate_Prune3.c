// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.59%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.648990, 0.648953,
    0.068223, -0.068249,
    0.466774, -0.466755,
    0.366152, -0.366132,
    -0.462286, 0.462148,
    0.108062, -0.107902,
    0.039188, -0.039184,
    0.274313, -0.274311,
    0.116823, -0.116543,
    -0.190934, 0.190531,
    -0.320982, 0.321097,
    0.269761, -0.269723,
};

float Cg_init[2] = {
    -0.248173, -0.248154
};

float xstd_init[12] = {
    0.004550, 0.002114, 0.348129, 0.120450, 0.001112, 0.000198, 0.049902, 0.132891, 0.000669, 0.000163, 0.046861, 0.142572
};

float xmean_init[12] = {
    0.010552, -0.005604, 0.447648, 1.031786, 0.003413, -0.007757, 0.012121, 0.618809, 0.003537, -0.007732, 0.015674, 0.698496
};


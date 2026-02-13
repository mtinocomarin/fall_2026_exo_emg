// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.29%
// test_accuracy: 73.30%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:13:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.511911, 0.511892,
    -0.049368, 0.049365,
    0.508032, -0.508014,
    0.406203, -0.406199,
    -0.581452, 0.581229,
    0.173513, -0.173268,
    0.047356, -0.047359,
    0.281431, -0.281437,
    0.154537, -0.154480,
    -0.233632, 0.233559,
    -0.363619, 0.363641,
    0.292401, -0.292394,
};

float Cg_init[2] = {
    -0.284905, -0.284894
};

float xstd_init[12] = {
    0.004393, 0.001984, 0.332209, 0.119926, 0.001148, 0.000204, 0.051607, 0.132684, 0.000667, 0.000166, 0.048009, 0.141907
};

float xmean_init[12] = {
    0.010308, -0.005733, 0.430077, 1.031380, 0.003423, -0.007755, 0.013019, 0.613939, 0.003521, -0.007734, 0.015825, 0.698317
};


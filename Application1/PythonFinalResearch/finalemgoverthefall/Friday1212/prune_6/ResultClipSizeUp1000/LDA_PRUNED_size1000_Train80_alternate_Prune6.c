// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.17%
// test_accuracy: 72.70%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:49:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.513554, 0.513569,
    -0.304946, 0.304955,
    0.423985, -0.424014,
    0.400156, -0.400150,
    0.765400, -0.765227,
    -0.834694, 0.834436,
    -0.016710, 0.016786,
    -0.081837, 0.081842,
    0.551888, -0.551863,
    -0.033903, 0.033796,
    -0.271566, 0.271606,
    0.069746, -0.069718,
};

float Cg_init[2] = {
    -0.335126, -0.335113
};

float xstd_init[12] = {
    0.003437, 0.001342, 0.104164, 0.169884, 0.001209, 0.000364, 0.021336, 0.069613, 0.000505, 0.000071, 0.013619, 0.059116
};

float xmean_init[12] = {
    0.009539, -0.006293, 0.177922, 0.585911, 0.003026, -0.007771, 0.004885, 0.047045, 0.003070, -0.007816, 0.003239, 0.062268
};


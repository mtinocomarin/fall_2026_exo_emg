// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.12%
// test_accuracy: 81.25%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 15:47:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.644907, 0.644958,
    -0.306957, 0.306946,
    0.686488, -0.686479,
    0.318694, -0.318730,
    1.168814, -1.168777,
    -1.271848, 1.271883,
    -0.014974, 0.014911,
    0.101822, -0.101830,
    0.987405, -0.987205,
    -0.696619, 0.696128,
    -0.345030, 0.345164,
    0.632358, -0.632168,
};

float Cg_init[2] = {
    -0.560872, -0.560822
};

float xstd_init[12] = {
    0.003141, 0.001072, 0.095836, 0.158208, 0.001470, 0.000468, 0.025512, 0.074447, 0.000524, 0.000098, 0.017176, 0.062985
};

float xmean_init[12] = {
    0.009563, -0.006318, 0.167143, 0.570476, 0.003078, -0.007747, 0.005873, 0.043810, 0.003114, -0.007805, 0.003968, 0.064286
};


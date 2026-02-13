// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.88%
// test_accuracy: 50.52%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:44:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.514950, 0.514986,
    0.334032, -0.334099,
    0.042300, -0.042293,
    -0.214822, 0.214850,
    -0.529896, 0.529936,
    -0.209426, 0.209400,
    0.176736, -0.176756,
    0.374097, -0.374075,
    -0.529113, 0.529203,
    0.205999, -0.206153,
    -0.000934, 0.000970,
    0.156495, -0.156461,
};

float Cg_init[2] = {
    -0.189456, -0.189475
};

float xstd_init[12] = {
    0.001021, 0.000081, 0.013098, 0.082317, 0.003104, 0.000846, 0.090157, 0.184203, 0.000865, 0.000113, 0.019458, 0.072709
};

float xmean_init[12] = {
    0.006470, -0.007688, 0.005085, 0.145449, 0.008640, -0.006839, 0.104872, 0.440769, 0.004366, -0.007714, 0.010256, 0.129936
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.75%
// test_accuracy: 81.25%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:50:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.188004, 1.188022,
    -0.456741, 0.456724,
    1.645381, -1.645365,
    0.345382, -0.345394,
    2.233970, -2.234046,
    -2.217582, 2.217742,
    -0.153080, 0.153000,
    0.193792, -0.193794,
    1.327949, -1.327864,
    -1.068401, 1.068230,
    -0.418863, 0.418912,
    0.832531, -0.832472,
};

float Cg_init[2] = {
    -1.064670, -1.064654
};

float xstd_init[12] = {
    0.003320, 0.001150, 0.096238, 0.163018, 0.001585, 0.000511, 0.027960, 0.080253, 0.000548, 0.000105, 0.018852, 0.065694
};

float xmean_init[12] = {
    0.009703, -0.006268, 0.168696, 0.568695, 0.003190, -0.007724, 0.006957, 0.048696, 0.003162, -0.007799, 0.004831, 0.068985
};


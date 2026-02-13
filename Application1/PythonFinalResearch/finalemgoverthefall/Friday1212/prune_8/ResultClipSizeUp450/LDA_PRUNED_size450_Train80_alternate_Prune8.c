// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.68%
// test_accuracy: 73.44%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:50:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.970013, 0.970063,
    -0.118553, 0.118535,
    0.499652, -0.499689,
    0.959857, -0.959848,
    0.998332, -0.998434,
    -1.094922, 1.095068,
    -0.023664, 0.023639,
    -0.037367, 0.037352,
    -0.592702, 0.592754,
    0.594289, -0.594367,
    -0.587970, 0.588001,
    0.218026, -0.217999,
};

float Cg_init[2] = {
    -0.466898, -0.466922
};

float xstd_init[12] = {
    0.003699, 0.001365, 0.102325, 0.174855, 0.001637, 0.000499, 0.029612, 0.083248, 0.001558, 0.000091, 0.019258, 0.064708
};

float xmean_init[12] = {
    0.009718, -0.006283, 0.171112, 0.577708, 0.003214, -0.007731, 0.007292, 0.049375, 0.003269, -0.007805, 0.005139, 0.069063
};


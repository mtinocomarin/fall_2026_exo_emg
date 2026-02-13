// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.81%
// test_accuracy: 67.08%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:45:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.843452, 0.843506,
    0.309899, -0.309910,
    0.586377, -0.586419,
    0.760252, -0.760257,
    -0.439717, 0.439720,
    0.207752, -0.207761,
    -0.136566, 0.136577,
    -0.036576, 0.036560,
    0.287475, -0.287456,
    -0.060610, 0.060598,
    -0.645660, 0.645678,
    -0.057960, 0.057935,
};

float Cg_init[2] = {
    -0.395809, -0.395824
};

float xstd_init[12] = {
    0.003894, 0.001690, 0.149170, 0.206308, 0.001080, 0.000189, 0.028344, 0.080652, 0.000676, 0.000171, 0.030139, 0.108448
};

float xmean_init[12] = {
    0.010179, -0.005793, 0.246181, 0.687366, 0.003405, -0.007762, 0.009524, 0.076889, 0.003530, -0.007729, 0.013122, 0.122985
};


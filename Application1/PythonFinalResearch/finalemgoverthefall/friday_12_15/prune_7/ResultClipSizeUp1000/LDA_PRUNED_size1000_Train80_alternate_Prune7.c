// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.05%
// test_accuracy: 66.12%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 12:43:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.577699, 0.577751,
    0.257021, -0.257072,
    0.495558, -0.495598,
    0.441276, -0.441276,
    -0.304943, 0.304853,
    0.109144, -0.109004,
    -0.109478, 0.109477,
    0.008346, -0.008393,
    0.244180, -0.243979,
    -0.066248, 0.065897,
    -0.485407, 0.485497,
    -0.023829, 0.023916,
};

float Cg_init[2] = {
    -0.251429, -0.251432
};

float xstd_init[12] = {
    0.003693, 0.001587, 0.147444, 0.204394, 0.000946, 0.000169, 0.024082, 0.076273, 0.000635, 0.000157, 0.029667, 0.101660
};

float xmean_init[12] = {
    0.009862, -0.005928, 0.238625, 0.678653, 0.003304, -0.007776, 0.007242, 0.070779, 0.003485, -0.007741, 0.012491, 0.112295
};


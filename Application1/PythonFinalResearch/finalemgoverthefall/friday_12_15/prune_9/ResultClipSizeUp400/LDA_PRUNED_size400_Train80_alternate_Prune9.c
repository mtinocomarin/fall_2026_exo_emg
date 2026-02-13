// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.65%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 12:44:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.203295, 1.203281,
    0.284997, -0.284935,
    0.290557, -0.290579,
    1.332416, -1.332405,
    -0.607821, 0.607828,
    0.133883, -0.133941,
    -0.020738, 0.020753,
    -0.000351, 0.000378,
    0.031570, -0.031764,
    0.032741, -0.032337,
    -0.612740, 0.612632,
    -0.042297, 0.042162,
};

float Cg_init[2] = {
    -0.563979, -0.563981
};

float xstd_init[12] = {
    0.004509, 0.001928, 0.147411, 0.202279, 0.001296, 0.000246, 0.029219, 0.094853, 0.000690, 0.000171, 0.029921, 0.106727
};

float xmean_init[12] = {
    0.010836, -0.005577, 0.248779, 0.692422, 0.003534, -0.007731, 0.011760, 0.084969, 0.003575, -0.007721, 0.014244, 0.125342
};


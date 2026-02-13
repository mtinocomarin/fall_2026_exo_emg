// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.77%
// test_accuracy: 76.47%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:06:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.618376, 0.618373,
    -0.249141, 0.249159,
    0.446643, -0.446682,
    0.557419, -0.557401,
    0.860052, -0.860149,
    -0.888384, 0.888548,
    -0.105252, 0.105210,
    -0.107050, 0.107025,
    0.662786, -0.662829,
    0.016365, -0.016239,
    -0.319344, 0.319308,
    -0.042849, 0.042786,
};

float Cg_init[2] = {
    -0.421762, -0.421787
};

float xstd_init[12] = {
    0.003237, 0.001238, 0.101215, 0.164061, 0.001217, 0.000367, 0.018631, 0.066870, 0.000503, 0.000070, 0.013771, 0.060168
};

float xmean_init[12] = {
    0.009494, -0.006344, 0.170953, 0.582521, 0.003046, -0.007762, 0.004874, 0.046639, 0.003075, -0.007816, 0.003389, 0.063236
};


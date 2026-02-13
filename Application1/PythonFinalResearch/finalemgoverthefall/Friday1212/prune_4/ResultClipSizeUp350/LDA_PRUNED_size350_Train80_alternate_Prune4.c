// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.85%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 15:47:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.792455, 0.792474,
    -0.232727, 0.232811,
    0.431443, -0.431471,
    0.861522, -0.861556,
    0.780847, -0.780953,
    -1.121355, 1.121535,
    0.173202, -0.173272,
    0.011215, -0.011225,
    -0.319482, 0.319624,
    0.543567, -0.544024,
    -0.500864, 0.501025,
    0.153778, -0.153566,
};

float Cg_init[2] = {
    -0.383778, -0.383822
};

float xstd_init[12] = {
    0.003723, 0.001373, 0.101140, 0.172012, 0.001667, 0.000503, 0.032376, 0.086481, 0.001017, 0.000090, 0.019473, 0.063833
};

float xmean_init[12] = {
    0.009808, -0.006245, 0.170080, 0.573452, 0.003222, -0.007720, 0.008254, 0.049286, 0.003194, -0.007808, 0.004683, 0.065714
};


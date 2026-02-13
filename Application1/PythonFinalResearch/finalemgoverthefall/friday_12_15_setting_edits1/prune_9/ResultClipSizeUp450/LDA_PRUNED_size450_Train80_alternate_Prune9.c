// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.97%
// test_accuracy: 65.62%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:15:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.678332, 0.678342,
    0.000057, -0.000047,
    0.761085, -0.761088,
    0.401129, -0.401139,
    -0.608408, 0.608472,
    0.109667, -0.109749,
    0.067422, -0.067420,
    0.195643, -0.195633,
    0.143710, -0.143823,
    -0.374063, 0.374210,
    -0.295745, 0.295707,
    0.464135, -0.464145,
};

float Cg_init[2] = {
    -0.393003, -0.393009
};

float xstd_init[12] = {
    0.004504, 0.001913, 0.343693, 0.126525, 0.001359, 0.000239, 0.060892, 0.138099, 0.000695, 0.000178, 0.055788, 0.136466
};

float xmean_init[12] = {
    0.010594, -0.005683, 0.445289, 1.030218, 0.003554, -0.007733, 0.018659, 0.624891, 0.003545, -0.007729, 0.016667, 0.701196
};


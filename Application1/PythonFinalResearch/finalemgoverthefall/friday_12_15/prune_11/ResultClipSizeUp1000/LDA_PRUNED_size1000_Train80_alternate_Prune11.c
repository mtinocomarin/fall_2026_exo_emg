// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.08%
// test_accuracy: 62.83%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt', 'act1\\trial_29.txt', 'act1\\trial_39.txt', 'act1\\trial_26.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_3.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 12:45:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.683742, 0.683753,
    0.402669, -0.402703,
    0.646159, -0.646203,
    0.602051, -0.602030,
    -0.439241, 0.438953,
    0.190439, -0.190042,
    -0.091096, 0.091079,
    -0.046122, 0.046044,
    0.338942, -0.338704,
    -0.221470, 0.221003,
    -0.473514, 0.473637,
    0.036594, -0.036442,
};

float Cg_init[2] = {
    -0.402983, -0.402971
};

float xstd_init[12] = {
    0.003677, 0.001571, 0.150993, 0.204793, 0.000999, 0.000179, 0.025803, 0.079000, 0.000654, 0.000164, 0.029568, 0.102145
};

float xmean_init[12] = {
    0.009977, -0.005883, 0.246083, 0.685564, 0.003346, -0.007770, 0.008053, 0.073334, 0.003485, -0.007739, 0.012130, 0.112682
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.80%
// test_accuracy: 64.06%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:16:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.734028, 0.734034,
    0.045972, -0.045956,
    0.791183, -0.791180,
    0.434624, -0.434642,
    -0.709378, 0.709297,
    0.071731, -0.071672,
    0.206900, -0.206887,
    0.196354, -0.196351,
    0.111782, -0.111918,
    -0.374832, 0.375039,
    -0.308527, 0.308464,
    0.523421, -0.523439,
};

float Cg_init[2] = {
    -0.425016, -0.425023
};

float xstd_init[12] = {
    0.004541, 0.001940, 0.346247, 0.127315, 0.001298, 0.000224, 0.060948, 0.138190, 0.000702, 0.000181, 0.056929, 0.137248
};

float xmean_init[12] = {
    0.010668, -0.005643, 0.453409, 1.031705, 0.003524, -0.007739, 0.017992, 0.623522, 0.003563, -0.007725, 0.017424, 0.702727
};


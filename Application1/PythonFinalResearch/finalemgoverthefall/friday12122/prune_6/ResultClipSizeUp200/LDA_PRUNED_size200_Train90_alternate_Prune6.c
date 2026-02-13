// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.44%
// test_accuracy: 87.50%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:04:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.627061, 0.627072,
    -0.372570, 0.372583,
    0.767926, -0.767914,
    0.485704, -0.485727,
    1.165946, -1.165957,
    -1.832127, 1.832117,
    0.295513, -0.295515,
    0.257759, -0.257744,
    1.023089, -1.022991,
    -0.578977, 0.578744,
    -0.473312, 0.473369,
    0.562168, -0.562077,
};

float Cg_init[2] = {
    -0.676665, -0.676642
};

float xstd_init[12] = {
    0.003303, 0.001153, 0.093548, 0.155246, 0.001571, 0.000503, 0.025930, 0.077052, 0.000552, 0.000097, 0.017337, 0.066275
};

float xmean_init[12] = {
    0.009629, -0.006313, 0.160741, 0.566444, 0.003192, -0.007710, 0.006519, 0.047778, 0.003152, -0.007803, 0.004593, 0.068222
};


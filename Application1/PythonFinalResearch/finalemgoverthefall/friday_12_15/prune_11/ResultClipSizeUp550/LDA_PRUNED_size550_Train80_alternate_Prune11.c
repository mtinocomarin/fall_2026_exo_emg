// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.05%
// test_accuracy: 72.50%
// prune_trials_per_label: 11
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_1.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 12:45:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.038287, 1.038272,
    0.209921, -0.209899,
    0.399627, -0.399645,
    1.145721, -1.145703,
    -0.400721, 0.401002,
    0.224250, -0.224558,
    -0.026368, 0.026346,
    -0.332986, 0.333026,
    0.300627, -0.300641,
    -0.153852, 0.153871,
    -0.602028, 0.602030,
    0.090942, -0.090969,
};

float Cg_init[2] = {
    -0.486930, -0.486934
};

float xstd_init[12] = {
    0.004245, 0.001850, 0.154922, 0.210221, 0.001283, 0.000220, 0.033915, 0.092022, 0.000624, 0.000149, 0.025741, 0.099246
};

float xmean_init[12] = {
    0.010586, -0.005613, 0.248953, 0.690857, 0.003526, -0.007741, 0.011873, 0.084952, 0.003531, -0.007734, 0.011238, 0.118476
};


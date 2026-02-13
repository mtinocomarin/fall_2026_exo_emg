// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.06%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:50:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.675022, 0.675042,
    -0.316035, 0.316026,
    0.495311, -0.495342,
    0.804748, -0.804728,
    0.824910, -0.824861,
    -0.676507, 0.676463,
    -0.229374, 0.229379,
    -0.149659, 0.149653,
    -0.712621, 0.712583,
    0.686057, -0.686011,
    -0.499503, 0.499492,
    0.059165, -0.059196,
};

float Cg_init[2] = {
    -0.394745, -0.394743
};

float xstd_init[12] = {
    0.003696, 0.001261, 0.107103, 0.176639, 0.001498, 0.000430, 0.023071, 0.074190, 0.001854, 0.000094, 0.017227, 0.070862
};

float xmean_init[12] = {
    0.009707, -0.006304, 0.174831, 0.582971, 0.003209, -0.007741, 0.006377, 0.050290, 0.003301, -0.007806, 0.004686, 0.070870
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.01%
// test_accuracy: 77.08%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-12 16:06:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.867383, 0.867390,
    -0.312944, 0.313005,
    0.544925, -0.544941,
    1.008777, -1.008795,
    1.182689, -1.182776,
    -1.529250, 1.529371,
    0.238014, -0.238049,
    -0.080993, 0.080987,
    -0.322853, 0.322953,
    0.291572, -0.291899,
    -0.469255, 0.469368,
    0.317793, -0.317639,
};

float Cg_init[2] = {
    -0.499219, -0.499247
};

float xstd_init[12] = {
    0.003889, 0.001443, 0.098114, 0.169124, 0.001702, 0.000522, 0.031378, 0.086722, 0.001026, 0.000092, 0.019851, 0.066253
};

float xmean_init[12] = {
    0.009942, -0.006234, 0.162937, 0.575000, 0.003288, -0.007702, 0.007857, 0.052024, 0.003236, -0.007805, 0.005317, 0.067857
};


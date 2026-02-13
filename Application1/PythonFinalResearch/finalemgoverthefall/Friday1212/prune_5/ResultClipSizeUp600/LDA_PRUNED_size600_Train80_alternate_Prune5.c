// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.64%
// test_accuracy: 73.30%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:48:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.611746, 0.611692,
    -0.243282, 0.243325,
    0.344032, -0.344049,
    0.717434, -0.717423,
    0.698052, -0.698029,
    -0.712467, 0.712452,
    -0.146504, 0.146510,
    -0.011297, 0.011286,
    -0.480838, 0.480723,
    0.394629, -0.394321,
    -0.365378, 0.365274,
    0.162534, -0.162677,
};

float Cg_init[2] = {
    -0.303152, -0.303140
};

float xstd_init[12] = {
    0.003731, 0.001321, 0.108637, 0.170924, 0.001417, 0.000401, 0.020118, 0.070680, 0.001720, 0.000092, 0.016480, 0.065856
};

float xmean_init[12] = {
    0.009827, -0.006238, 0.174232, 0.587812, 0.003126, -0.007754, 0.005073, 0.047610, 0.003262, -0.007806, 0.004579, 0.067542
};


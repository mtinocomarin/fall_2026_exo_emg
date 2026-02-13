// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.70%
// test_accuracy: 76.47%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:03:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.328392, 0.328407,
    -0.356007, 0.356023,
    0.207290, -0.207346,
    0.487628, -0.487604,
    0.679979, -0.680197,
    -0.798672, 0.799007,
    0.013208, -0.013298,
    -0.076437, 0.076406,
    0.559020, -0.559002,
    -0.122709, 0.122736,
    -0.205533, 0.205529,
    0.031466, -0.031505,
};

float Cg_init[2] = {
    -0.287187, -0.287217
};

float xstd_init[12] = {
    0.003419, 0.001351, 0.102501, 0.163452, 0.001210, 0.000367, 0.021120, 0.067604, 0.000490, 0.000069, 0.012781, 0.059038
};

float xmean_init[12] = {
    0.009603, -0.006301, 0.173429, 0.584492, 0.003015, -0.007768, 0.005086, 0.045063, 0.003060, -0.007818, 0.002923, 0.061890
};


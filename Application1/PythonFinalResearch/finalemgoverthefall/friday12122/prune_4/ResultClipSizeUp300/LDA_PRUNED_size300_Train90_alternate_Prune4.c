// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.19%
// test_accuracy: 80.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 16:03:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.727571, 0.727593,
    -0.129931, 0.129941,
    0.560550, -0.560567,
    0.673785, -0.673783,
    1.005810, -1.005716,
    -1.472332, 1.472175,
    0.135012, -0.134978,
    0.094704, -0.094677,
    -0.159822, 0.159847,
    0.318219, -0.318383,
    -0.435473, 0.435533,
    0.209596, -0.209524,
};

float Cg_init[2] = {
    -0.385572, -0.385570
};

float xstd_init[12] = {
    0.003647, 0.001323, 0.096532, 0.164177, 0.001711, 0.000527, 0.030946, 0.085489, 0.000907, 0.000096, 0.019588, 0.067855
};

float xmean_init[12] = {
    0.009732, -0.006289, 0.164417, 0.570500, 0.003292, -0.007694, 0.008083, 0.052625, 0.003199, -0.007805, 0.004917, 0.068375
};


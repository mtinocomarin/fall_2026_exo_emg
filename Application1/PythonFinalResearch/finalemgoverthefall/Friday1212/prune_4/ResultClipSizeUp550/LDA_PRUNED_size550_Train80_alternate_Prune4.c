// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.46%
// test_accuracy: 73.12%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.623452, 0.623471,
    -0.283823, 0.283830,
    0.439991, -0.440031,
    0.702593, -0.702577,
    0.774547, -0.774608,
    -0.824336, 0.824436,
    -0.025351, 0.025322,
    -0.075786, 0.075773,
    -0.461629, 0.461649,
    0.303482, -0.303476,
    -0.374621, 0.374625,
    0.209185, -0.209202,
};

float Cg_init[2] = {
    -0.315703, -0.315717
};

float xstd_init[12] = {
    0.003850, 0.001412, 0.106092, 0.174298, 0.001535, 0.000453, 0.027245, 0.076962, 0.001720, 0.000092, 0.017014, 0.066953
};

float xmean_init[12] = {
    0.009914, -0.006216, 0.179715, 0.585857, 0.003168, -0.007741, 0.006714, 0.048214, 0.003244, -0.007807, 0.004429, 0.067143
};


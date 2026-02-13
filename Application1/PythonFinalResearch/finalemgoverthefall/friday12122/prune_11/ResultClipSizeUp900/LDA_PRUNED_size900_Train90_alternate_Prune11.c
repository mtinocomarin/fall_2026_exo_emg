// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.41%
// test_accuracy: 77.94%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 16:08:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.716456, 0.716440,
    -0.244722, 0.244741,
    0.597001, -0.597032,
    0.556208, -0.556188,
    0.943930, -0.943942,
    -0.936306, 0.936326,
    -0.129585, 0.129598,
    -0.139345, 0.139328,
    0.623891, -0.623966,
    0.084366, -0.084167,
    -0.377837, 0.377774,
    0.021509, -0.021598,
};

float Cg_init[2] = {
    -0.484364, -0.484378
};

float xstd_init[12] = {
    0.003178, 0.001232, 0.100524, 0.163436, 0.001177, 0.000359, 0.018415, 0.065377, 0.000520, 0.000073, 0.014354, 0.061426
};

float xmean_init[12] = {
    0.009530, -0.006325, 0.173554, 0.586259, 0.003021, -0.007768, 0.004675, 0.045318, 0.003076, -0.007817, 0.003545, 0.062118
};


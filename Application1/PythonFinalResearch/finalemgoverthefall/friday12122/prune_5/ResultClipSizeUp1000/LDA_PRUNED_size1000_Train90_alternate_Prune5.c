// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 75.55%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:04:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.444650, 0.444680,
    -0.259687, 0.259726,
    0.371403, -0.371467,
    0.489845, -0.489824,
    0.631477, -0.631697,
    -0.696365, 0.696661,
    0.020902, -0.020973,
    -0.068485, 0.068468,
    -0.285984, 0.286235,
    0.286880, -0.287342,
    -0.224598, 0.224750,
    0.098369, -0.098183,
};

float Cg_init[2] = {
    -0.211101, -0.211155
};

float xstd_init[12] = {
    0.003212, 0.001246, 0.099574, 0.162003, 0.001260, 0.000358, 0.020640, 0.067505, 0.001304, 0.000076, 0.012790, 0.062870
};

float xmean_init[12] = {
    0.009508, -0.006343, 0.170912, 0.581698, 0.003042, -0.007770, 0.004844, 0.045807, 0.003150, -0.007816, 0.003033, 0.063056
};


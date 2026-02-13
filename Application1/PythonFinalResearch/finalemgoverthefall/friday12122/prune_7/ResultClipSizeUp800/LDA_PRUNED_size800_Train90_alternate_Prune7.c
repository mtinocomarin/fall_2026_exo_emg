// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.41%
// test_accuracy: 75.83%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 16:05:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.594719, 0.594692,
    -0.330184, 0.330225,
    0.359684, -0.359718,
    0.618070, -0.618052,
    0.803722, -0.803820,
    -0.832892, 0.833068,
    -0.102405, 0.102356,
    -0.115331, 0.115301,
    0.687425, -0.687459,
    0.049102, -0.048980,
    -0.354322, 0.354288,
    -0.060649, 0.060582,
};

float Cg_init[2] = {
    -0.424381, -0.424401
};

float xstd_init[12] = {
    0.003521, 0.001332, 0.104165, 0.165990, 0.001246, 0.000379, 0.019154, 0.067612, 0.000512, 0.000073, 0.014282, 0.061201
};

float xmean_init[12] = {
    0.009629, -0.006297, 0.172047, 0.585241, 0.003059, -0.007758, 0.005088, 0.046805, 0.003094, -0.007814, 0.003586, 0.065288
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.48%
// test_accuracy: 74.04%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:48:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.484195, 0.484245,
    -0.397360, 0.397342,
    0.280928, -0.280968,
    0.591561, -0.591556,
    0.764660, -0.764571,
    -0.909539, 0.909413,
    -0.013687, 0.013716,
    -0.055233, 0.055236,
    0.769665, -0.769554,
    -0.144053, 0.143782,
    -0.365865, 0.365961,
    0.085377, -0.085299,
};

float Cg_init[2] = {
    -0.421139, -0.421123
};

float xstd_init[12] = {
    0.003879, 0.001499, 0.109124, 0.172106, 0.001342, 0.000415, 0.024207, 0.074355, 0.000510, 0.000078, 0.015361, 0.060468
};

float xmean_init[12] = {
    0.009849, -0.006188, 0.178728, 0.592991, 0.003072, -0.007753, 0.005812, 0.048376, 0.003089, -0.007813, 0.003951, 0.062849
};


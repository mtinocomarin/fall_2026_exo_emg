// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.10%
// test_accuracy: 87.50%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 12:42:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.217996, 1.218042,
    -0.053186, 0.053172,
    0.911253, -0.911273,
    1.009705, -1.009694,
    0.171759, -0.171633,
    -0.020182, 0.019968,
    0.160197, -0.160189,
    -0.883669, 0.883750,
    0.310378, -0.310515,
    -0.865744, 0.866014,
    -0.135020, 0.134955,
    0.075210, -0.075304,
};

float Cg_init[2] = {
    -0.670574, -0.670600
};

float xstd_init[12] = {
    0.004147, 0.001710, 0.135736, 0.177172, 0.001566, 0.000289, 0.038614, 0.102188, 0.000673, 0.000160, 0.022304, 0.103060
};

float xmean_init[12] = {
    0.010685, -0.005751, 0.242222, 0.698974, 0.003651, -0.007714, 0.013333, 0.087436, 0.003545, -0.007734, 0.009915, 0.120769
};


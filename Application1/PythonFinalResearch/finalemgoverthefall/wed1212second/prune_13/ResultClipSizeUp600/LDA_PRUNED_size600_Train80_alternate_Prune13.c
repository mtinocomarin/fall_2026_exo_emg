// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.11%
// test_accuracy: 73.30%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:06:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.041405, -0.041520,
    -0.343692, 0.343924,
    -0.045362, 0.045329,
    -0.053107, 0.052992,
    2.447867, -2.447796,
    -2.168586, 2.168454,
    -0.090921, 0.090956,
    0.333222, -0.333183,
    -1.023378, 1.023344,
    -0.286253, 0.286301,
    0.482378, -0.482407,
    1.792596, -1.792601,
};

float Cg_init[2] = {
    -0.857809, -0.857796
};

float xstd_init[12] = {
    0.000937, 0.000083, 0.008057, 0.067696, 0.000786, 0.000129, 0.015750, 0.056460, 0.003574, 0.001084, 0.124398, 0.221402
};

float xmean_init[12] = {
    0.005663, -0.007748, 0.002233, 0.099330, 0.002449, -0.007842, 0.005614, 0.052249, 0.009327, -0.006479, 0.148454, 0.490622
};


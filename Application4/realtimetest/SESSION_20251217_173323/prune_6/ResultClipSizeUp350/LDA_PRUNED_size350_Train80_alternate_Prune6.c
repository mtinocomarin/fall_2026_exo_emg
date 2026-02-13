// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.10%
// test_accuracy: 71.67%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt']}
// generated: 2025-12-17 18:09:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.909377, 0.909196,
    1.104051, -1.103521,
    0.083884, -0.084056,
    -0.478753, 0.478599,
    0.789238, -0.789296,
    -0.247641, 0.247599,
    -1.509197, 1.509167,
    0.212228, -0.212198,
    0.204056, -0.204047,
    -1.225060, 1.224994,
    0.637844, -0.637810,
    1.297364, -1.297377,
};

float Cg_init[2] = {
    -0.731719, -0.731673
};

float xstd_init[12] = {
    0.001143, 0.000142, 0.026521, 0.099341, 0.002816, 0.000767, 0.056654, 0.141837, 0.005761, 0.002265, 0.163480, 0.249497
};

float xmean_init[12] = {
    0.005530, -0.007710, 0.009231, 0.131538, 0.004264, -0.007545, 0.021709, 0.125641, 0.011796, -0.005714, 0.176068, 0.537436
};


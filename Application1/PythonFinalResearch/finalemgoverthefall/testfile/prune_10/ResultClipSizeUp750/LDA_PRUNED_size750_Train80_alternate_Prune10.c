// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.18%
// test_accuracy: 75.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt']}
// generated: 2026-02-13 14:48:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.500460, 0.500581,
    -0.066159, 0.066083,
    -0.058659, 0.058667,
    0.240432, -0.240420,
    1.774309, -1.774711,
    -1.427206, 1.427767,
    0.041912, -0.042035,
    0.169313, -0.169430,
    -0.474431, 0.474454,
    -0.695020, 0.695010,
    0.501144, -0.501166,
    1.235252, -1.235257,
};

float Cg_init[2] = {
    -0.612587, -0.612727
};

float xstd_init[12] = {
    0.000928, 0.000078, 0.008796, 0.063980, 0.000687, 0.000108, 0.013732, 0.050380, 0.003342, 0.000994, 0.115678, 0.209823
};

float xmean_init[12] = {
    0.005579, -0.007756, 0.002424, 0.093052, 0.002353, -0.007857, 0.004286, 0.045195, 0.008893, -0.006619, 0.131732, 0.466753
};


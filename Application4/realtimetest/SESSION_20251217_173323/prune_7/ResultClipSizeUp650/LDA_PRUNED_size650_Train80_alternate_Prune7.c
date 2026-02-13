// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.11%
// test_accuracy: 73.33%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt', 'act2\\trial_21.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_24.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_14.txt', 'act1\\trial_19.txt', 'act1\\trial_1.txt']}
// generated: 2025-12-17 18:09:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.400242, 0.400200,
    0.023486, -0.023383,
    0.427008, -0.427028,
    0.270083, -0.270116,
    0.966059, -0.966067,
    -0.774556, 0.774499,
    -1.011261, 1.011321,
    0.123995, -0.124006,
    -0.440947, 0.440964,
    -0.592300, 0.592298,
    0.468169, -0.468194,
    1.362687, -1.362666,
};

float Cg_init[2] = {
    -0.577280, -0.577273
};

float xstd_init[12] = {
    0.001216, 0.000198, 0.026588, 0.098327, 0.003059, 0.000952, 0.057403, 0.140888, 0.005706, 0.002320, 0.159269, 0.265144
};

float xmean_init[12] = {
    0.005669, -0.007695, 0.008704, 0.135417, 0.004414, -0.007462, 0.022778, 0.130139, 0.011606, -0.005726, 0.173982, 0.546527
};


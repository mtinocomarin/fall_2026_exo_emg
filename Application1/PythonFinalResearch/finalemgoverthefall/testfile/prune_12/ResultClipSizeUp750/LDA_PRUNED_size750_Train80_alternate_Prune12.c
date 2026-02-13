// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_12\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.21%
// test_accuracy: 74.11%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_13.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_27.txt']}
// generated: 2026-02-13 14:49:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.555788, 0.555929,
    -0.109649, 0.109527,
    -0.143661, 0.143683,
    0.297272, -0.297240,
    2.028420, -2.028789,
    -1.689675, 1.690181,
    0.083610, -0.083719,
    0.230230, -0.230338,
    -0.608596, 0.608645,
    -0.487203, 0.487147,
    0.519924, -0.519934,
    1.362053, -1.362055,
};

float Cg_init[2] = {
    -0.741868, -0.742007
};

float xstd_init[12] = {
    0.000933, 0.000079, 0.008676, 0.064590, 0.000709, 0.000112, 0.014276, 0.051746, 0.003327, 0.000988, 0.117606, 0.211345
};

float xmean_init[12] = {
    0.005651, -0.007751, 0.002476, 0.096429, 0.002371, -0.007854, 0.004619, 0.047072, 0.008871, -0.006615, 0.135667, 0.469929
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.27%
// test_accuracy: 70.22%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt']}
// generated: 2026-02-13 14:48:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.090119, 0.089911,
    -0.211274, 0.211730,
    0.052518, -0.052576,
    0.144315, -0.144539,
    1.606790, -1.606831,
    -1.133793, 1.133782,
    -0.097328, 0.097348,
    0.142899, -0.142892,
    -0.634154, 0.634205,
    -0.293981, 0.293935,
    0.597768, -0.597795,
    1.111095, -1.111108,
};

float Cg_init[2] = {
    -0.582455, -0.582483
};

float xstd_init[12] = {
    0.000925, 0.000074, 0.008654, 0.065812, 0.000695, 0.000108, 0.014117, 0.050692, 0.003205, 0.001010, 0.119920, 0.211483
};

float xmean_init[12] = {
    0.005558, -0.007756, 0.002428, 0.092605, 0.002358, -0.007856, 0.004482, 0.045378, 0.008895, -0.006585, 0.137778, 0.478207
};


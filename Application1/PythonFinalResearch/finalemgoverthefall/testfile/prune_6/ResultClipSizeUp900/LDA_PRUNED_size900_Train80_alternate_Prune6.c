// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.47%
// test_accuracy: 73.53%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt']}
// generated: 2026-02-13 14:46:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.307503, 0.307341,
    -0.121365, 0.121693,
    0.009719, -0.009748,
    0.152683, -0.152861,
    1.337035, -1.336905,
    -0.873043, 0.872817,
    -0.080356, 0.080419,
    0.030190, -0.030155,
    -0.464449, 0.464480,
    -0.407846, 0.407821,
    0.416261, -0.416275,
    0.795176, -0.795183,
};

float Cg_init[2] = {
    -0.388247, -0.388218
};

float xstd_init[12] = {
    0.000919, 0.000072, 0.008091, 0.064307, 0.000648, 0.000100, 0.013383, 0.050779, 0.003344, 0.001009, 0.116186, 0.205328
};

float xmean_init[12] = {
    0.005520, -0.007758, 0.002142, 0.092534, 0.002328, -0.007859, 0.004072, 0.044661, 0.008997, -0.006594, 0.134148, 0.475701
};


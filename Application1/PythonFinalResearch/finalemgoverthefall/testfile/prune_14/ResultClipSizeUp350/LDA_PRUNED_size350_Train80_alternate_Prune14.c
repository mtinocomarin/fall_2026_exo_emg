// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.37%
// test_accuracy: 79.17%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_30.txt', 'act2\\trial_33.txt']}
// generated: 2026-02-13 14:49:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.121114, -0.121172,
    -0.149062, 0.149192,
    0.045150, -0.045172,
    -0.257039, 0.256978,
    2.241993, -2.241942,
    -2.004274, 2.004188,
    -0.369740, 0.369754,
    0.225371, -0.225341,
    -0.587084, 0.587049,
    -1.326736, 1.326747,
    0.355535, -0.355530,
    2.414902, -2.414894,
};

float Cg_init[2] = {
    -0.946117, -0.946097
};

float xstd_init[12] = {
    0.000902, 0.000086, 0.008352, 0.067486, 0.000865, 0.000154, 0.016657, 0.061049, 0.003421, 0.000996, 0.116938, 0.212481
};

float xmean_init[12] = {
    0.005637, -0.007756, 0.001728, 0.093333, 0.002480, -0.007834, 0.006049, 0.057037, 0.008922, -0.006661, 0.126173, 0.462963
};


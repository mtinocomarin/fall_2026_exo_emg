// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.64%
// test_accuracy: 71.88%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-17 17:04:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.440118, -0.440222,
    -0.072826, 0.073033,
    -0.324887, 0.324882,
    -0.341993, 0.341887,
    1.967265, -1.967267,
    -1.824137, 1.824124,
    -0.296386, 0.296397,
    0.330638, -0.330629,
    -0.641075, 0.641065,
    -0.921895, 0.921884,
    0.449852, -0.449839,
    2.372399, -2.372412,
};

float Cg_init[2] = {
    -0.949679, -0.949673
};

float xstd_init[12] = {
    0.000916, 0.000058, 0.004545, 0.063153, 0.000840, 0.000148, 0.016501, 0.060344, 0.003118, 0.000920, 0.116778, 0.215761
};

float xmean_init[12] = {
    0.005590, -0.007764, 0.000794, 0.088571, 0.002408, -0.007841, 0.006190, 0.055714, 0.008974, -0.006622, 0.142857, 0.480714
};


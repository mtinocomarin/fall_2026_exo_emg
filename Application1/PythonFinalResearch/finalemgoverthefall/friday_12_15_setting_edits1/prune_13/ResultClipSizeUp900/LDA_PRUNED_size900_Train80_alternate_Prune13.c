// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.97%
// test_accuracy: 69.85%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:17:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.411644, 0.411659,
    0.028687, -0.028724,
    0.808318, -0.808297,
    0.357157, -0.357153,
    -0.805225, 0.805316,
    0.316848, -0.316951,
    0.073184, -0.073179,
    0.228743, -0.228735,
    0.347475, -0.347378,
    -0.492701, 0.492551,
    -0.356983, 0.357031,
    0.452516, -0.452511,
};

float Cg_init[2] = {
    -0.412591, -0.412582
};

float xstd_init[12] = {
    0.003776, 0.001589, 0.336116, 0.123953, 0.001083, 0.000196, 0.050430, 0.128726, 0.000665, 0.000167, 0.051335, 0.137402
};

float xmean_init[12] = {
    0.010051, -0.005877, 0.437151, 1.037647, 0.003406, -0.007759, 0.012281, 0.617028, 0.003502, -0.007736, 0.014964, 0.698638
};


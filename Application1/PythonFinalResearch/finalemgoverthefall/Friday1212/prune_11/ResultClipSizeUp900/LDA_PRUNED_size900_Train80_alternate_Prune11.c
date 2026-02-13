// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.25%
// test_accuracy: 76.47%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-12 15:52:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.754743, 0.754911,
    -0.290293, 0.290224,
    0.741915, -0.741997,
    0.527223, -0.527236,
    1.162421, -1.162388,
    -1.116415, 1.116416,
    -0.200703, 0.200662,
    -0.091958, 0.091954,
    0.582975, -0.582676,
    0.049835, -0.050552,
    -0.279728, 0.279946,
    0.110805, -0.110553,
};

float Cg_init[2] = {
    -0.545397, -0.545410
};

float xstd_init[12] = {
    0.003256, 0.001286, 0.102729, 0.169445, 0.001213, 0.000366, 0.019235, 0.067754, 0.000505, 0.000065, 0.011691, 0.056534
};

float xmean_init[12] = {
    0.009547, -0.006297, 0.176359, 0.589692, 0.003031, -0.007767, 0.004893, 0.047227, 0.003074, -0.007818, 0.002988, 0.060729
};


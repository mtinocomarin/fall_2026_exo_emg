// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.62%
// test_accuracy: 78.12%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:16:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.602127, 1.602123,
    0.353835, -0.353818,
    1.173207, -1.173225,
    0.555136, -0.555127,
    -0.087552, 0.087630,
    -0.294552, 0.294461,
    0.000952, -0.000941,
    0.461937, -0.461936,
    -0.321339, 0.321261,
    -0.214094, 0.214211,
    0.038436, -0.038474,
    0.380745, -0.380756,
};

float Cg_init[2] = {
    -0.576247, -0.576249
};

float xstd_init[12] = {
    0.004682, 0.002184, 0.342636, 0.118192, 0.001579, 0.000303, 0.064751, 0.142545, 0.000644, 0.000147, 0.042658, 0.147345
};

float xmean_init[12] = {
    0.011133, -0.005482, 0.459167, 1.031750, 0.003701, -0.007703, 0.020417, 0.635750, 0.003535, -0.007741, 0.011667, 0.697750
};


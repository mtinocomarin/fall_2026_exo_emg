// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.20%
// test_accuracy: 69.08%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 13:14:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.598720, 0.598760,
    0.102624, -0.102669,
    0.656797, -0.656819,
    0.222020, -0.222009,
    -0.463255, 0.463189,
    0.222836, -0.222762,
    0.005108, -0.005111,
    0.173548, -0.173549,
    0.263656, -0.263502,
    -0.310432, 0.310207,
    -0.269519, 0.269577,
    0.308430, -0.308390,
};

float Cg_init[2] = {
    -0.231296, -0.231285
};

float xstd_init[12] = {
    0.003834, 0.001665, 0.334154, 0.123419, 0.000930, 0.000164, 0.041875, 0.131948, 0.000625, 0.000152, 0.044732, 0.138747
};

float xmean_init[12] = {
    0.009914, -0.005895, 0.416060, 1.038381, 0.003301, -0.007778, 0.008637, 0.615425, 0.003478, -0.007744, 0.012483, 0.687044
};


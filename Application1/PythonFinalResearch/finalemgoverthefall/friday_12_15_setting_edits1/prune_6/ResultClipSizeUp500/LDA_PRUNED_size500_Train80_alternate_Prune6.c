// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.20%
// test_accuracy: 72.22%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 13:13:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.583086, 0.583042,
    -0.046799, 0.046830,
    0.537668, -0.537656,
    0.434837, -0.434843,
    -0.456676, 0.456487,
    0.057444, -0.057240,
    0.032511, -0.032510,
    0.242714, -0.242710,
    0.182643, -0.182648,
    -0.242619, 0.242634,
    -0.404557, 0.404553,
    0.287948, -0.287940,
};

float Cg_init[2] = {
    -0.308925, -0.308919
};

float xstd_init[12] = {
    0.004539, 0.002053, 0.333665, 0.120359, 0.001244, 0.000221, 0.055947, 0.135162, 0.000678, 0.000170, 0.051225, 0.146760
};

float xmean_init[12] = {
    0.010531, -0.005658, 0.440028, 1.029573, 0.003483, -0.007744, 0.014815, 0.618375, 0.003541, -0.007730, 0.017236, 0.698803
};


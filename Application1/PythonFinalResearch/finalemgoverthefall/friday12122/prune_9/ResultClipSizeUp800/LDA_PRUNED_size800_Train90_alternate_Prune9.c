// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.69%
// test_accuracy: 77.50%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 16:06:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.724474, 0.724472,
    -0.283284, 0.283299,
    0.471469, -0.471501,
    0.613208, -0.613191,
    1.029957, -1.029914,
    -1.003650, 1.003601,
    -0.132056, 0.132076,
    -0.111398, 0.111385,
    0.700893, -0.700920,
    -0.015435, 0.015493,
    -0.341519, 0.341507,
    -0.007794, 0.007759,
};

float Cg_init[2] = {
    -0.476510, -0.476516
};

float xstd_init[12] = {
    0.003517, 0.001349, 0.102446, 0.164979, 0.001233, 0.000375, 0.019398, 0.066634, 0.000522, 0.000074, 0.014660, 0.061737
};

float xmean_init[12] = {
    0.009671, -0.006277, 0.174091, 0.588938, 0.003050, -0.007761, 0.005037, 0.047161, 0.003095, -0.007815, 0.003687, 0.064297
};


// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.46%
// test_accuracy: 78.85%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 16:09:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.748795, 0.748758,
    -0.149917, 0.149948,
    0.594264, -0.594288,
    0.789386, -0.789363,
    1.053750, -1.053703,
    -1.066128, 1.066048,
    -0.299332, 0.299370,
    -0.045665, 0.045661,
    0.836836, -0.836911,
    0.004769, -0.004529,
    -0.511511, 0.511417,
    0.001057, -0.001156,
};

float Cg_init[2] = {
    -0.657257, -0.657249
};

float xstd_init[12] = {
    0.003130, 0.001083, 0.102076, 0.167372, 0.001353, 0.000423, 0.021537, 0.072942, 0.000530, 0.000078, 0.016498, 0.063311
};

float xmean_init[12] = {
    0.009623, -0.006328, 0.171609, 0.589720, 0.003137, -0.007738, 0.006061, 0.049930, 0.003111, -0.007814, 0.004382, 0.063567
};


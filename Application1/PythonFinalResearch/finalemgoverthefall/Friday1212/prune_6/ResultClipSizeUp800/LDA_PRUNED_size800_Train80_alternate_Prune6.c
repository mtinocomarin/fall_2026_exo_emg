// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.08%
// test_accuracy: 75.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 15:49:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701968, 0.702001,
    -0.250074, 0.250071,
    0.417377, -0.417422,
    0.564799, -0.564784,
    0.832226, -0.832231,
    -0.969560, 0.969581,
    -0.035436, 0.035435,
    -0.029836, 0.029822,
    0.605044, -0.604969,
    0.080579, -0.080756,
    -0.388353, 0.388426,
    0.001727, -0.001685,
};

float Cg_init[2] = {
    -0.411954, -0.411962
};

float xstd_init[12] = {
    0.003656, 0.001429, 0.107186, 0.170528, 0.001307, 0.000402, 0.023560, 0.073840, 0.000507, 0.000074, 0.014727, 0.060358
};

float xmean_init[12] = {
    0.009685, -0.006248, 0.177300, 0.589795, 0.003083, -0.007753, 0.005880, 0.049436, 0.003092, -0.007814, 0.003624, 0.064359
};

